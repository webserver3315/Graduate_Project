#ifndef BASICS

#define BASICS
#include <stdio.h>
#include <time.h>
#include <cstdlib>

#define VERBOSE 2
#define RANDOM
#define ULL unsigned long long

#endif
struct float32{ // 1 8 23
    union{
        struct{
            unsigned int mantissa : 23;
            unsigned short exponent : 8;
            unsigned short sign : 1;
        };
        float total;
        int total_int;
    };
};

/* When first call, put depth := 1
 * 
*/
void print_binary_rec(int foo, int depth)
{
    int ret;
    if(foo) {
        print_binary_rec((unsigned)foo>>1, depth+1);
        if(depth%4) printf("%d",foo&1);
        else printf("_%d",foo&1);
    }
}

void print_binary(int foo)
{
    // printf("foo = %d %f\n", foo.total_int, foo.total);
    if(foo == 0)
        printf("0");
    else
        print_binary_rec(foo,1);
}

void float32_printer(struct float32 f32, char* name)
{
    printf("%s: %f\n",name, f32.total);
    printf("%s.sign: ", name);
    print_binary(f32.sign); printf("\n");
    printf("%s.exponent(%d): ", name, f32.exponent);
    print_binary(f32.exponent); printf("\n");
    printf("%s.mantissa: ", name);
    print_binary(f32.mantissa); printf("\n");
    printf("%s.total(%f): ", name, f32.total);
    print_binary(f32.total_int); printf("\n");
}

struct float32 norm;
struct float32 pos_infinity;
struct float32 neg_infinity;
struct float32 pos_not_a_number;
struct float32 neg_not_a_number;
struct float32 pos_zero;
struct float32 neg_zero;
struct float32 f32_arr[9];

void edge_test(int a, int b){
    struct float32 tmp;
    tmp.total = f32_arr[a].total + f32_arr[b].total;
    char name[20];
    sprintf(name, "result %d: %d >>> ", a, b);
    float32_printer(tmp, name);
    printf("\n");
    if(b==6){
        if(a==6){
            return;
        }
        else
            edge_test(a+1,0);
    }
    else
        edge_test(a,b+1);
}
void edge_setting(){
    struct float32 f32;
    f32.total = 0.75;

    float32_printer(f32, "f32");
    printf("\n");
    f32.exponent = f32.exponent - 1;
    float32_printer(f32, "f32");
    printf("\n");
    
    pos_infinity.sign = 0;
    pos_infinity.exponent = 0b11111111;
    pos_infinity.mantissa = 0;
    float32_printer(pos_infinity, "pos_infinity");
    printf("\n");
    
    neg_infinity.sign = 1;
    neg_infinity.exponent = 0b11111111;
    neg_infinity.mantissa = 0;
    float32_printer(neg_infinity, "neg_infinity");
    printf("\n");
    
    pos_not_a_number.sign = 0;
    pos_not_a_number.exponent = 0b11111111;
    pos_not_a_number.mantissa = 0b1111111111111111111;
    float32_printer(pos_not_a_number, "pos_not_a_number");
    printf("\n");
    
    neg_not_a_number.sign = 1;
    neg_not_a_number.exponent = 0b11111111;
    neg_not_a_number.mantissa = 0b1111111111111111111;
    float32_printer(neg_not_a_number, "neg_not_a_number");
    printf("\n");
    
    pos_zero.sign = 0;
    pos_zero.exponent = 0;
    pos_zero.mantissa = 0;
    float32_printer(pos_zero, "pos_zero");
    printf("\n");
    
    neg_zero.sign = 1;
    neg_zero.exponent = 0;
    neg_zero.mantissa = 0;
    float32_printer(neg_zero, "neg_zero");
    printf("\n");
    
    norm.total = 0.5;
    
    f32_arr[0] = norm;
    f32_arr[1] = pos_infinity;
    f32_arr[2] = neg_infinity;
    f32_arr[3] = pos_not_a_number;
    f32_arr[4] = neg_not_a_number;
    f32_arr[5] = pos_zero;
    f32_arr[6] = neg_zero;
}
int leading_1_detector(int tmp)
{
    if(tmp & 1<<23){ // tmp[23]
        return 0;   
    }else if(tmp & 1<<22){ // tmp[22]
        return 1;
    }else if(tmp & 1<<21){
        return 2;
    }else if(tmp & 1<<20){
        return 3;
    }else if(tmp & 0b00000000000010000000000000000000){
        return 4;
    }else if(tmp & 0b00000000000001000000000000000000){
        return 5;
    }else if(tmp & 0b00000000000000100000000000000000){
        return 6;
    }else if(tmp & 0b00000000000000010000000000000000){
        return 7;
    }else if(tmp & 0b00000000000000001000000000000000){
        return 8;
    }else if(tmp & 1<<14){
        return 9;
    }else if(tmp & 1<<13){
        return 10;
    }else if(tmp & 1<<12){
        return 11;
    }else if(tmp & 1<<11){
        return 12;
    }else if(tmp & 1<<10){
        return 13;
    }else if(tmp & 1<<9){
        return 14;
    }else if(tmp & 1<<8){
        return 15;
    }else if(tmp & 1<<7){
        return 16;
    }else if(tmp & 1<<6){
        return 17;
    }else if(tmp & 1<<5){
        return 18;
    }else if(tmp & 1<<4){
        return 19;
    }else if(tmp & 1<<3){
        return 20;
    }else if(tmp & 1<<2){ // tmp[2]
        return 21;
    }else if(tmp & 1<<1){ // tmp[1]
        return 22;
    }else if(tmp & 1<<0){ // tmp[0]
        return 23;
    }else{
        return 0;
    }
    
}

float32 my_adder(struct float32 alpha, struct float32 bravo)
{
    #if VERBOSE >= 2
    printf("alpha(0x%08llx %f) is ",(ULL)alpha.total_int, alpha.total); print_binary((ULL)alpha.total_int); printf("\n");
    printf("bravo(0x%08llx %f) is ",(ULL)bravo.total_int, bravo.total); print_binary((ULL)bravo.total_int); printf("\n");
    #endif
    struct float32 charlie, delta; // charlie: Correct answer
    charlie.total = alpha.total + bravo.total;
    /**************** Get Larger Exponent ***************/
    int EA, EA0, EA1, EB, EB0, EB1, EA_minus_EB, EB_minus_EA;
    int Larger_E, Right_Shift;
    int E_LeftBig, E_RightBig, E_Equal;
    EA = alpha.exponent;
    EB = bravo.exponent;
    if (EA==0b00000000){
        EA0 = 1;
        EA1 = 0;
    } else if (EA==0b11111111){
        EA0 = 0;
        EA1 = 1;
    }else{
        EA0 = 0;
        EA1 = 0;
    }
    if (EB==0b00000000){
        EB0 = 1;
        EB1 = 0;
    } else if (EB==0b11111111){
        EB0 = 0;
        EB1 = 1;
    }else{
        EB0 = 0;
        EB1 = 0;
    }
    EA_minus_EB = EA - EB; // 9bit
    EB_minus_EA = EB - EA; // 9bit
    // E_RightBig = ((EA_minus_EB & 0b100000000) != 0);
    // E_LeftBig = ((EB_minus_EA & 0b100000000) != 0);
    E_RightBig = (EA < EB); 
    E_LeftBig = (EA > EB);
    E_Equal = !(E_RightBig | E_LeftBig);
    Larger_E = ((E_LeftBig) ? EA : EB);
    Right_Shift = ((E_LeftBig) ? EA_minus_EB : EB_minus_EA);
    if(EA0 ^ EB0){ // 만약 하나의 E만 전부 0이면
        Right_Shift--;
    } 
    /* 
    이걸 구현하려면 또 Carry Adder 만들어야하니, 앗싸리 EA 또는 EB가 0이면 1로 올려주는 방안을 고려할 필요가 있음.
    왜냐하면 어차피 denormalized number 의 E-127에서 E는 0이 아니라 1로 취급됨.
    */

    #if VERBOSE >= 2
    printf(" \
    EA = %d \
    EA0 = %d \
    EA1 = %d \
    \n \
    EB = %d \
    EB0 = %d \
    EB1 = %d \
    \n \
    EA_minus_EB = %d \
    EB_minus_EA = %d \
    \n \
    E_LeftBig = %d \
    E_RightBig = %d \
    E_Equal = %d \
    \n \
    Larger_E = %d \
    Right_Shift = %d \
    \n", EA, EA0, EA1, EB, EB0, EB1, 
    EA_minus_EB, EB_minus_EA,
    E_LeftBig, E_RightBig, E_Equal,
    Larger_E, Right_Shift);
    #endif
    
    /*********************** Setting Up Mantissa ******************************/
    int MA, MB, isDenorm1, isDenorm2, isDenorm3, isDenorm4;
    int Denorm1, Denorm2;
    int M_RightBig, M_LeftBig, M_Equal, MA0, MB0;
    int SA, SB;
    MA = alpha.mantissa; MB = bravo.mantissa;
    SA = alpha.sign; SB = bravo.sign;
    M_LeftBig = MA > MB;
    M_RightBig = MA < MB;
    M_Equal = (MA == MB);

    MA0 = ((MA==0) ? 1 : 0); MB0 = ((MB==0) ? 1 : 0);
    isDenorm1 = ((!EA0)<<23) | MA;
    isDenorm2 = MA;
    isDenorm3 = ((!EB0)<<23) | MB;
    isDenorm4 = MB;
    Denorm1 = ((EA0&&(!MA0)) ? isDenorm2 : isDenorm1);
    Denorm2 = ((EB0&&(!MB0)) ? isDenorm4 : isDenorm3);
    
    #if VERBOSE >= 2
    printf("\
    M_LeftBig = %d \
    M_RightBig = %d \
    M_Equal = %d \
    \n "
    , M_LeftBig, M_RightBig, M_Equal);
    #endif

    #if VERBOSE >= 2
    print_binary(Denorm1); printf("\n");
    print_binary(Denorm2); printf("\n");
    #endif

    /*********************** Add Mantissa ******************************/
    int small_E_Mantissa, large_E_Mantissa;
    if(E_LeftBig || (E_Equal && M_LeftBig)){
        small_E_Mantissa = Denorm2;
        large_E_Mantissa = Denorm1;
    }else{
        small_E_Mantissa = Denorm1;
        large_E_Mantissa = Denorm2;
    }
    unsigned int small_E_Mantissa2 = ((EA1 || EB1) ?  0xFFFFFF : small_E_Mantissa);
    
    /* Right_Shift가 32bit 초과면, 그 동작은 undefined이다. 따라서 수동으로 0처리해줘야한다.*/
    unsigned int small_E_Mantissa3 = ((Right_Shift>=32) ? 0 : small_E_Mantissa2 >> Right_Shift);

    unsigned int RS_mask=0;
    for(int i=0;i<(Right_Shift>=32 ? 32 : Right_Shift);i++){
        RS_mask = RS_mask * 2 + 1;
    }
    unsigned int RS = small_E_Mantissa2 & RS_mask;

    unsigned int rtmp = (1<<(Right_Shift>=32 ? 31 : Right_Shift-1));
    unsigned int R = (((small_E_Mantissa2 & (1<<(Right_Shift>=32 ? 31 : Right_Shift-1))) == 0) ? 0 : 1);

    unsigned int RS_mask2=0;
    for(int i=0;i<(Right_Shift>=32 ? 32 : Right_Shift)-1;i++){
        RS_mask2 = RS_mask2 * 2 + 1;
    }
    unsigned int S = ((small_E_Mantissa2 & RS_mask2) == 0 ? 0 : 1);

    unsigned int small_E_Mantissa4 = ((SA ^ SB) ? ((~small_E_Mantissa3) & 0x00FFFFFF) : small_E_Mantissa3);
    unsigned int added_Mantissa = (unsigned)(SA ^ SB) + (unsigned)small_E_Mantissa4 + (unsigned)large_E_Mantissa;
    
    #if VERBOSE >= 2
    printf("large_E_Mantissa: "); print_binary(large_E_Mantissa); printf("\n");
    printf("small_E_Mantissa: "); print_binary(small_E_Mantissa); printf("\n");
    printf("small_E_Mantissa2: "); print_binary(small_E_Mantissa2); printf("\n");
    printf("RS_mask: "); print_binary(RS_mask); printf("\n");
    printf("RS_mask2: "); print_binary(RS_mask2); printf("\n");
    printf("rtmp: "); print_binary(rtmp); printf("\n");
    printf("RS: "); print_binary(RS); printf("\n");
    printf("R: %d\n", R);
    printf("S: %d\n", S);
    printf("small_E_Mantissa3: "); print_binary(small_E_Mantissa3); printf("\n");
    printf("small_E_Mantissa4: %d\n", small_E_Mantissa4);
    printf("small_E_Mantissa4: "); print_binary(small_E_Mantissa4); printf("\n");
    printf("added_Mantissa: "); print_binary(added_Mantissa); printf("\n");
    #endif

    /***************************************** Renormalization *****************************************/
    int mantissa_24th, mantissa_23rd, mantissa_22nd, frac, leading_1_position, adder_output;
    adder_output = added_Mantissa & (int)(0x01FFFFFF);
    mantissa_24th = ((added_Mantissa & (1<<24)) == 0 ? 0 : 1);
    mantissa_23rd = ((added_Mantissa & (1<<23)) == 0 ? 0 : 1);
    mantissa_22nd = ((added_Mantissa & (1<<22)) == 0 ? 0 : 1);
    frac = adder_output & (int)(0x007FFFFF);
    leading_1_position = leading_1_detector(added_Mantissa);

    int left_shifting = (Larger_E < leading_1_position) ? Larger_E : leading_1_position; // Exp가 대가를 지불할 수 있을만큼만 Man<< 한다.
    int lefted_frac = frac << left_shifting;
    // int righted_frac = frac >> 1;
    int righted_frac = (adder_output >> 1) & (int)(0x007FFFFF);
    int lefted_frac_truncated = lefted_frac & 0x007FFFFF;
    int lefted_frac_righted = lefted_frac >> 1;
    int lefted_frac_righted_truncated = lefted_frac_righted & 0x007FFFFF;
    
    #if VERBOSE >= 2
    printf("adder_output: "); print_binary(adder_output); printf("\n");
    printf("mantissa_24th: "); print_binary(mantissa_24th); printf("\n");
    printf("mantissa_23rd: "); print_binary(mantissa_23rd); printf("\n");
    printf("mantissa_22nd: "); print_binary(mantissa_22nd); printf("\n");
    printf("frac: "); print_binary(frac); printf("\n");
    printf("Larger_E: %d\n", Larger_E);
    printf("leading_1_position: %d\n",leading_1_position);
    printf("lefted_frac: "); print_binary(lefted_frac); printf("\n");
    printf("righted_frac: "); print_binary(righted_frac); printf("\n");
    printf("lefted_frac_truncated: "); print_binary(lefted_frac_truncated); printf("\n");
    #endif
    
    int final_sign, final_mantissa, final_exponent;
    if(E_LeftBig || (E_Equal && M_LeftBig)){ // if SUBTRACTION
        final_sign = SA;
    }else{
        final_sign = SB;
    }

    /* EXPONENT MUX */
    if((SA==SB) && mantissa_24th){ // 같은 부호 더했는데 24째에 1이면, mantissa 우시프트
        final_exponent = Larger_E + 1;
        #if VERBOSE >= 2
        printf("EXP MUX 1\n");
        printf("final_exponent: "); print_binary(final_exponent); printf("\n");
        #endif
    }else if((SA==SB) && mantissa_23rd){ // 같은 부호 더했는데 24째는 0, 23째는 1이면 그대로
        final_exponent = Larger_E;
        #if VERBOSE >= 2
        printf("EXP MUX 2\n");
        printf("final_exponent: "); print_binary(final_exponent); printf("\n");
        #endif
    }
    else if((mantissa_23rd == 0) && (Larger_E > leading_1_position)){ // 23th 24th 모두 0이면, leading 1을 23째까지 좌시프트해야함.
        // 뺄셈 수행시 오버플로우 주의(e.g. 0x00 - 0d10). Larger_E에서 지불할 비용이 없는데 leading 1 을 만드는건 무리임.
        // 해당 경우는 EXP MUX 4로 옮김
        final_exponent = (unsigned int)(Larger_E - leading_1_position);
        #if VERBOSE >= 2
        printf("EXP MUX 3\n");
        printf("final_exponent: "); print_binary(final_exponent); printf("\n");
        #endif
    }
    else{ // Larger_E에서 leading_1_position 을 위해 지불할 비용이 없을 때, 될때까지 Mantissa 좌shift 한 뒤, exp는 0으로
        final_exponent = 0;
        #if VERBOSE >= 2
        printf("EXP MUX 4\n");
        printf("final_exponent: "); print_binary(final_exponent); printf("\n");
        #endif
    }

    /* MANTISSA MUX */
    if((SA==SB) && mantissa_24th){ // 덧셈에 24th 살아있으면, mantissa 우측으로 제껴야 함
        S = R || S;
        R = frac & 0b01;
        final_mantissa = righted_frac;
        #if VERBOSE >= 2
        printf("MANTISSA MUX 1\n");
        printf("final_mantissa: "); print_binary(final_mantissa); printf("\n");
        #endif
    }else if((SA==SB) && mantissa_23rd){ // 24번 없고, 23번만 살아있으면 frac 그대로
        final_mantissa = frac;
        #if VERBOSE >= 2
        printf("MANTISSA MUX 2\n");
        printf("final_mantissa: "); print_binary(final_mantissa); printf("\n");
        #endif
    }else if(mantissa_23rd == 0){
        final_mantissa = lefted_frac_truncated;
        #if VERBOSE >= 2
        printf("MANTISSA MUX 3\n");
        printf("final_mantissa: "); print_binary(final_mantissa); printf("\n");
        #endif
    }else if(final_exponent == 0){ // subnorm이면, hidden 1 필요없다.
        final_mantissa = lefted_frac_righted_truncated;
        #if VERBOSE >= 2
        printf("MANTISSA MUX 4\n");
        printf("final_mantissa: "); print_binary(final_mantissa); printf("\n");
        #endif
    }
    else{
        final_mantissa = 0;
        #if VERBOSE >= 2
        printf("MANTISSA MUX 5\n");
        printf("final_mantissa: "); print_binary(final_mantissa); printf("\n");
        #endif
    }

    unsigned int G = ((final_mantissa & 0b01) == 0 ? 0 : 1);
    #if VERBOSE >= 2
    printf("G: %d\n", G);
    printf("R: %d\n", R);
    printf("S: %d\n", S);
    #endif
    if((R==1 && S==1) || (G==1 && R==1 && S==0))
        final_mantissa++;
    // if(final_mantissa & 0x1000000) goto RENORM;

    delta.sign = final_sign;
    delta.exponent = final_exponent;
    delta.mantissa = final_mantissa;
    
    #if VERBOSE >= 2
        printf("delta.total(%f) : 0b", delta.total); print_binary(delta.total_int); printf("\n");
        printf("charlie.total(%f) : 0b", charlie.total); print_binary(charlie.total_int); printf("\n");
        printf("charlie vs delta : %f vs %f\n", charlie.total, delta.total);
        if(charlie.total == delta.total) printf("SAME\n");
        else printf("ERROR!!!\n");
    #endif
    printf("*********************** %f + %f END*********************\n", alpha.total, bravo.total);
    return delta;
}