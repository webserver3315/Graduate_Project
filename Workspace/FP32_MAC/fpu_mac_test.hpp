#ifndef BASICS

#define BASICS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define VERBOSE 1
#define RANDOM
#define ULL unsigned long long

struct float32{ // 1 8 23
    union{
        struct{
            unsigned int mantissa : 23;
            unsigned short exponent : 8;
            unsigned short sign : 1;
        };
        float total;
        int total_int;
        unsigned int total_uint;
    };
};

#endif

int called = 0;

/* When first call, put depth := 1
 * 
*/
void print_binary_rec(unsigned long long foo, unsigned long long depth)
{
    int ret;
    if(foo) {
        print_binary_rec(((unsigned long long)foo)>>1, depth+1);
        if(depth%4) printf("%llu",foo&1);
        else printf("_%llu",foo&1);
    }
}

void print_binary(unsigned long long foo)
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
        return 23; // no 1 in mantissa
    }
}

int leading_1_detector_48bit(unsigned long long tmp){
    if(tmp & (unsigned long long)1<<47){
        return 47; // "leading 1 is at 47th bit"
    }
    else if(tmp & (unsigned long long)1<<46){
        return 46;
    }
    else if(tmp & (unsigned long long)1<<45){
        return 45;
    }
    else if(tmp & (unsigned long long)1<<44){
        return 44;
    }
    else if(tmp & (unsigned long long)1<<43){
        return 43;
    }
    else if(tmp & (unsigned long long)1<<42){
        return 42;
    }
    else if(tmp & (unsigned long long)1<<41){
        return 41;
    }
    else if(tmp & (unsigned long long)1<<40){
        return 40;
    }
    else if(tmp & (unsigned long long)1<<39){
        return 39;
    }
    else if(tmp & (unsigned long long)1<<38){
        return 38;
    }
    else if(tmp & (unsigned long long)1<<37){
        return 37;
    }
    else if(tmp & (unsigned long long)1<<36){
        return 36;
    }
    else if(tmp & (unsigned long long)1<<35){
        return 35;
    }
    else if(tmp & (unsigned long long)1<<34){
        return 34;
    }
    else if(tmp & (unsigned long long)1<<33){
        return 33;
    }
    else if(tmp & (unsigned long long)1<<32){
        return 32;
    }
    else if(tmp & (unsigned long long)1<<31){
        return 31;
    }
    else if(tmp & (unsigned long long)1<<30){
        return 30;
    }
    else if(tmp & (unsigned long long)1<<29){
        return 29;
    }
    else if(tmp & (unsigned long long)1<<28){
        return 28;
    }
    else if(tmp & (unsigned long long)1<<27){
        return 27;
    }
    else if(tmp & (unsigned long long)1<<26){
        return 26;
    }
    else if(tmp & (unsigned long long)1<<25){
        return 25;
    }
    else if(tmp & (unsigned long long)1<<24){
        return 24;
    }
    else if(tmp & (unsigned long long)1<<23){
        return 23;
    }
    else if(tmp & (unsigned long long)1<<22){
        return 22;
    }
    else if(tmp & (unsigned long long)1<<21){
        return 21;
    }
    else if(tmp & (unsigned long long)1<<20){
        return 20;
    }
    else if(tmp & (unsigned long long)1<<19){
        return 19;
    }
    else if(tmp & (unsigned long long)1<<18){
        return 18;
    }
    else if(tmp & (unsigned long long)1<<17){
        return 17;
    }
    else if(tmp & (unsigned long long)1<<16){
        return 16;
    }
    else if(tmp & (unsigned long long)1<<15){
        return 15;
    }
    else if(tmp & (unsigned long long)1<<14){
        return 14;
    }
    else if(tmp & (unsigned long long)1<<13){
        return 13;
    }
    else if(tmp & (unsigned long long)1<<12){
        return 12;
    }
    else if(tmp & (unsigned long long)1<<11){
        return 11;
    }
    else if(tmp & (unsigned long long)1<<10){
        return 10;
    }
    else if(tmp & (unsigned long long)1<<9){
        return 9;
    }
    else if(tmp & (unsigned long long)1<<8){
        return 8;
    }
    else if(tmp & (unsigned long long)1<<7){
        return 7;
    }
    else if(tmp & (unsigned long long)1<<6){
        return 6;
    }
    else if(tmp & (unsigned long long)1<<5){
        return 5;
    }
    else if(tmp & (unsigned long long)1<<4){
        return 4;
    }
    else if(tmp & (unsigned long long)1<<3){
        return 3;
    }
    else if(tmp & (unsigned long long)1<<2){
        return 2;
    }
    else if(tmp & (unsigned long long)1<<1){
        return 1;
    }
    else if(tmp & (unsigned long long)1){
        return 0;
    }
    else{
        return -1; // NO leading 1
    }
}

float32 my_multiplier(struct float32 alpha, struct float32 bravo)
{
    #if VERBOSE >= 5
    printf("alpha(0x%08llx %f) is ",(ULL)alpha.total_int, alpha.total); print_binary((ULL)alpha.total_int); printf("\n");
    printf("bravo(0x%08llx %f) is ",(ULL)bravo.total_int, bravo.total); print_binary((ULL)bravo.total_int); printf("\n");
    #endif

    struct float32 charlie_multiplier, delta_multiplier; // charlie_multiplier: Correct answer
    charlie_multiplier.total = alpha.total * bravo.total;
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
    E_RightBig = (EA < EB); // 일단 대소판별기는 임시로 이렇게 때운다. 만들면 되니까.
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

    #if VERBOSE >= 5
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

    // 순서유의
    // 이 때, EA_minus_EB는 후에 다 EA0 봐가면서 보정이 되어있으므로 여기서 바꿔야함. 이보다 앞에서 바꿔버리면 꼬임.
    if(EA == 0) EA = 1; // denorm 의 exp는 -126취급.
    if(EB == 0) EB = 1;
    
    /*************************** ADD Exponent ***************************/
    int EA_plus_EB = EA + EB; // EA and EB is unsigined int
    int EA_plus_EB_minus_254 = EA_plus_EB - 254;

    #if VERBOSE >= 5
    printf("ADD EXPONENT\n");
    printf("EA_plus_EB is %d\n",EA_plus_EB);
    printf("EA_plus_EB_minus_254 is %d\n",EA_plus_EB_minus_254);
    #endif
    
    /*************************** Get Sign ***************************/
    int SA, SB;
    SA = alpha.sign; SB = bravo.sign;
    int final_sign = SA ^ SB;

    /*********************** Setting up Multiply Mantissa ******************************/
    int MA, MB, isDenorm1, isDenorm2, isDenorm3, isDenorm4;
    int Denorm1, Denorm2;
    int M_RightBig, M_LeftBig, M_Equal, MA0, MB0;
    
    MA = alpha.mantissa; MB = bravo.mantissa;
    
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
    
    #if VERBOSE >= 5
    printf(" \
    M_LeftBig = %d \
    M_RightBig = %d \
    M_Equal = %d \
    \n"
    , M_LeftBig, M_RightBig, M_Equal);
    #endif

    #if VERBOSE >= 5
    printf("Denorm1(0x%x) is ",Denorm1); print_binary(Denorm1); printf("\n");
    printf("Denorm2(0x%x) is ",Denorm2); print_binary(Denorm2); printf("\n");
    #endif

    /******************************** Multiply Mantissa ******************************/
    unsigned long long M_48_Original = (unsigned long long) Denorm1 * (unsigned long long) Denorm2;

    int G, R, S;
    int leading_1_position = leading_1_detector_48bit(M_48_Original);
    #if VERBOSE >= 5
    printf("M_48_Original == d1 * d2 = 0x%llx\n", M_48_Original);
    printf("leading_1_position %d\n", leading_1_position);
    #endif

    /*         Dealing with   M48             */
    int E = EA_plus_EB_minus_254;
    int Exp = E + 127;
    int UDFL = 0;
    int OVFL = 0;
    // long long Until_46th_tmp = 46 - leading_1_position;
    // long long Maximum_Mantissa_LeftShiftAble = EA_plus_EB_minus_254 + 126;
    // long long Until_46th = (Until_46th_tmp < Maximum_Mantissa_LeftShiftAble) ? Until_46th_tmp : Maximum_Mantissa_LeftShiftAble;

    long long Until_46th = 46 - leading_1_position;
    long long Until_126 = -126 - EA_plus_EB_minus_254;
    long long Maximum_Exp_Cost = 126 + EA_plus_EB_minus_254;
    ULL Man1, Man2, Man3, Man4, Man5, Man6, final_Man;
    int Exp1, Exp2, Exp3, Exp4, Exp5, final_Exp;
    int Until_126_2 = 99999999;

    Man1 = M_48_Original;
    Man2 = M_48_Original>>1;
    Man3 = M_48_Original>>Until_126;
    if(Until_126 > 48) Man3 = 0x00;
    Man4 = M_48_Original<<Until_46th;
    Man5 = Man4 >> (Until_46th - Maximum_Exp_Cost); // // c-e-i // 보상가능
    Man6 = Man4 >> Exp; // Exp 전부소진해도 denorm: c-e    

    Exp1 = Exp;
    Exp2 = Exp + 1;
    Exp3 = 0;
    Exp4 = 1;
    Exp5 = Exp - Until_46th;

    #if VERBOSE >= 5
    printf("Until_46th %d\n", Until_46th);
    printf("Until_126 %d\n", Until_126);
    printf("Until_126_2 %d\n", Until_126_2);
    printf("E is %d\n",E);
    printf("Exp is %d\n",Exp);
    printf("Man1(0x%llx) is ", Man1); print_binary(Man1); printf("\n");
    printf("Man2(0x%llx) is ", Man2); print_binary(Man2); printf("\n");
    printf("Man3(0x%llx) is ", Man3); print_binary(Man3); printf("\n");
    printf("Man4(0x%llx) is ", Man4); print_binary(Man4); printf("\n");
    printf("Man5(0x%llx) is ", Man5); print_binary(Man5); printf("\n");
    printf("Exp1(0x%x) is %d\n",Exp1,Exp1);
    printf("Exp2(0x%x) is %d\n",Exp2,Exp2);
    printf("Exp3(0x%x) is %d\n",Exp3,Exp3);
    printf("Exp4(0x%x) is %d\n",Exp4,Exp4);
    printf("Exp5(0x%x) is %d\n",Exp5,Exp5);
    #endif
    // Final_Man Setter


    int DEBUG_FINAL_MAN = 0;
    int DEBUG_FINAL_EXP = 0;
    if(E > -126){
        if(leading_1_position == 47){ // a
            final_Man = Man2;
            DEBUG_FINAL_MAN = 0x1;
        }else if(leading_1_position == 46){ // b
            final_Man = Man1;
            DEBUG_FINAL_MAN = 0x2;
        }else{ // c
            if(E - Until_46th == -126){
                final_Man = Man5;
                DEBUG_FINAL_MAN = 0x3;
            }
            else if(E - Until_46th < -126){ // c-e-i
                final_Man = Man6;
                DEBUG_FINAL_MAN = 0x4;
            }else{ // c-b or c-h
            final_Man = Man4;
            DEBUG_FINAL_MAN = 0x5;
            }
        }
    }
    else if(E < -126){
        if(leading_1_position == 47){ // d
            final_Man = Man3;
            DEBUG_FINAL_MAN = 0x6;
        }else if(leading_1_position == 46){ // e
            final_Man = Man3;
            DEBUG_FINAL_MAN = 0x7;
        }else{ // f
            final_Man = Man3;
            DEBUG_FINAL_MAN = 0x8;
        }
    }
    else{// Equal
        if(leading_1_position == 47){ // g
            final_Man = Man2;
            DEBUG_FINAL_MAN = 0x9;
        }else if(leading_1_position == 46){ // h
            final_Man = Man1;
            DEBUG_FINAL_MAN = 0xA;
        }else{ // i
            final_Man = Man1;
            DEBUG_FINAL_MAN = 0xB;
        }
    }

    // ******************************************** final_Exp Setter
    if(E > -126){
        if(leading_1_position == 47){ // a
            final_Exp = Exp2;
            DEBUG_FINAL_EXP = 0x1;
        }else if(leading_1_position == 46){ // b
            final_Exp = Exp1;
            DEBUG_FINAL_EXP = 0x2;
        }else{ // c
            if(E-Until_46th > -126){ // c-b
                final_Exp = Exp5;
                DEBUG_FINAL_EXP = 0x3;
            }
            else if(E-Until_46th == -126){ // c-h
                final_Exp = Exp4;
                DEBUG_FINAL_EXP = 0x4;
            }
            else{ // c-e-i
                final_Exp = Exp3;
                DEBUG_FINAL_EXP = 0x5;
            }
        }
    }
    else if(E < -126){
        if(leading_1_position == 47){ // d
            if(Until_126 == 1){ // d-h
                final_Exp = Exp4;
                DEBUG_FINAL_EXP = 0x6;
            }else{ // d-i
                final_Exp = Exp3;
                DEBUG_FINAL_EXP = 0x7;
            }
            
        }else if(leading_1_position == 46){ // e
            final_Exp = Exp3;
            DEBUG_FINAL_EXP = 0x8;
        }else{ // f
            final_Exp = Exp3;
            DEBUG_FINAL_EXP = 0x9;
        }
    }
    else{// Equal
        if(leading_1_position == 47){ // g
            final_Exp = Exp2;
            DEBUG_FINAL_EXP = 0xA;
        }else if(leading_1_position == 46){ // h
            final_Exp = Exp1;
            DEBUG_FINAL_EXP = 0xB;
        }else{ // i
            final_Exp = Exp3;
            DEBUG_FINAL_EXP = 0xC;
        }
    }
    
    if(((EA1 & (MA0)) | (EB1 & (MB0))) || (final_Exp > 254)) OVFL = 1;
    int NAN_FLAG = 0;
    if((EA == 0xFF && MA != 0) || (EB == 0xFF && MB != 0)) NAN_FLAG = 1;



    #if VERBOSE >= 5
    printf("final_Man(0x%llx) is ", final_Man); print_binary(final_Man); printf("\n");
    printf("DEBUF_FINAL_MAN(0x%x)\n", DEBUG_FINAL_MAN);
    printf("DEBUF_FINAL_EXP(0x%x)\n", DEBUG_FINAL_EXP);
    #endif
    // Hide M48's 46th bit
    ULL M_48 = final_Man & 0x3FFFFFFFFFFF;
    // Get G R S
    G = (M_48 & 0x800000) == 0 ? 0 : 1;
    R = (M_48 & 0x400000) == 0 ? 0 : 1;
    S = (M_48 & 0x3FFFFF) == 0 ? 0 : 1;
    // Get M_48[45:23]
    M_48 >>= 23;
    if((R==1 && S==1) || (G==1 && R==1 && S==0)){
        M_48++;
        if(M_48 & 0x800000){
            M_48 >>= 1;
            final_Exp++;
        }
    }
    // rounding 고려시 추가 normalization 필요하지만, 일단 구현안함


    if(OVFL){ // INF
        final_Exp = 0xFF;
        M_48 = 0;
    }
    if(NAN_FLAG){
        final_Exp = 0xFF;
        M_48 = 0xFFFFFF;
    }
    delta_multiplier.sign = final_sign;
    delta_multiplier.exponent = final_Exp;
    delta_multiplier.mantissa = M_48;


    #if VERBOSE >= 5
    printf("final M_48(0x%llx) is ",M_48); print_binary(M_48); printf("\n");
    printf("G: %d\n", G);
    printf("R: %d\n", R);
    printf("S: %d\n", S);
    printf("OVFL: %d\t UDFL: %d\n",OVFL, UDFL);

    float32_printer(alpha, "alpha");
    float32_printer(bravo, "bravo");
    float32_printer(charlie_multiplier, "charlie_multiplier");
    float32_printer(delta_multiplier, "delta_multiplier");
    #endif

    #if VERBOSE >= 5
    printf("delta_multiplier.total(%f) : 0b", delta_multiplier.total); print_binary(delta_multiplier.total_int); printf("\n");
    printf("charlie_multiplier.total(%f) : 0b", charlie_multiplier.total); print_binary(charlie_multiplier.total_int); printf("\n");
    printf("charlie_multiplier vs delta_multiplier : %f vs %f\n", charlie_multiplier.total, delta_multiplier.total);
    if(charlie_multiplier.total == delta_multiplier.total) printf("SAME\n");
    else printf("ERROR!!!\n");

    printf("my_multiplier: called = %dth\n", called);
    printf("*********************** %f * %f END*********************\n", alpha.total, bravo.total);
    called++;
    #endif

    return delta_multiplier;
}

float32 my_adder(struct float32 alpha, struct float32 bravo)
{
    #if VERBOSE >= 3
    printf("alpha(0x%08x %f) is ",alpha.total_uint, alpha.total); print_binary(alpha.total_uint); printf("\n");
    printf("bravo(0x%08x %f) is ",bravo.total_uint, bravo.total); print_binary(bravo.total_uint); printf("\n");
    #endif
    struct float32 charlie_adder, delta_adder; // charlie_adder: Correct answer
    charlie_adder.total = alpha.total + bravo.total;
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

    #if VERBOSE >= 3
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
    
    #if VERBOSE >= 3
    printf("\
    M_LeftBig = %d \
    M_RightBig = %d \
    M_Equal = %d \
    \n "
    , M_LeftBig, M_RightBig, M_Equal);
    #endif

    #if VERBOSE >= 3
    print_binary(Denorm1); printf("\n");
    print_binary(Denorm2); printf("\n");
    #endif

    /*********************** Add Mantissa ******************************/
    int small_E_Mantissa, large_E_Mantissa;
    int small_E_Sign, large_E_Sign;
    if(E_LeftBig || (E_Equal && M_LeftBig)){
        small_E_Sign = SB;
        large_E_Sign = SA;
        small_E_Mantissa = Denorm2;
        large_E_Mantissa = Denorm1;
    }else{
        small_E_Sign = SA;
        large_E_Sign = SB;
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
    unsigned int small_E_Mantissa5 = ((unsigned)(SA ^ SB) + (unsigned)small_E_Mantissa4) & 0x00FFFFFF;

    unsigned int G = (((small_E_Mantissa2 & (1<<(Right_Shift>=32 ? 31 : Right_Shift))) == 0) ? 0 : 1);

    unsigned int added_Mantissa = small_E_Mantissa5 + (unsigned)large_E_Mantissa;
    
    #if VERBOSE >= 3
    printf("large_E_Mantissa(0x%x): ",large_E_Mantissa); print_binary(large_E_Mantissa); printf("\n");
    printf("small_E_Mantissa(0x%x): ",small_E_Mantissa); print_binary(small_E_Mantissa); printf("\n");
    printf("small_E_Mantissa2(0x%x): ",small_E_Mantissa2); print_binary(small_E_Mantissa2); printf("\n");
    printf("RS_mask: "); print_binary(RS_mask); printf("\n");
    printf("RS_mask2: "); print_binary(RS_mask2); printf("\n");
    printf("rtmp: "); print_binary(rtmp); printf("\n");
    printf("RS: "); print_binary(RS); printf("\n");
    printf("R: %d\n", R);
    printf("S: %d\n", S);
    printf("small_E_Mantissa3(0x%x): ",small_E_Mantissa3); print_binary(small_E_Mantissa3); printf("\n");
    printf("small_E_Mantissa4(0x%x): ", small_E_Mantissa4); print_binary(small_E_Mantissa4); printf("\n");
    printf("small_E_Mantissa5(0x%x): ", small_E_Mantissa5); print_binary(small_E_Mantissa5); printf("\n");
    printf("added_Mantissa(0x%x): ", added_Mantissa); print_binary(added_Mantissa); printf("\n");
    #endif

    /***************************************** Renormalization *****************************************/
    int mantissa_24th, mantissa_23rd, mantissa_22nd, leading_1_position, adder_output;
    if(SA ^ SB) adder_output = added_Mantissa & (int)(0x00FFFFFF);
    else adder_output = added_Mantissa & (int)(0x01FFFFFF);
    mantissa_24th = ((adder_output & (1<<24)) == 0 ? 0 : 1);
    mantissa_23rd = ((adder_output & (1<<23)) == 0 ? 0 : 1);
    mantissa_22nd = ((adder_output & (1<<22)) == 0 ? 0 : 1);

    leading_1_position = leading_1_detector(added_Mantissa);
    int left_shifting = (Larger_E < leading_1_position) ? Larger_E : leading_1_position; // Exp가 대가를 지불할 수 있을만큼만 Man<< 한다.

    int righted_frac = (adder_output >> 1) & (int)(0x007FFFFF); // [24:0] 에서 1 우시프트하고 [22:0]만 남긴 것

    int frac = adder_output & (int)(0x007FFFFF); // 24th bit 날려버림: [22:0] 만 남긴것=>23bit

    int lefted_frac = adder_output << left_shifting; // [22:0] 에서 leading 1이 23th 에 없으면 23th까지 제낀것
    int lefted_frac_truncated = lefted_frac & 0x007FFFFF; // 23th hidden 1 날려버린 것
    // int lefted_frac_righted = lefted_frac >> 1; // denorm 이라 hidden 1 안날린 것
    // int lefted_frac_righted_truncated = lefted_frac_righted & 0x007FFFFF; // denorm 의 [22:0] 확인사살
    
    #if VERBOSE >= 3
    printf("mantissa_24th: "); print_binary(mantissa_24th); printf("\n");
    printf("mantissa_23rd: "); print_binary(mantissa_23rd); printf("\n");
    printf("mantissa_22nd: "); print_binary(mantissa_22nd); printf("\n");
    printf("Larger_E: %d\n", Larger_E);
    printf("leading_1_position: %d\n",leading_1_position);
    printf("left_shifting: %d\n",left_shifting);
    printf("\n");
    printf("added_Mantissa(0x%x): ",added_Mantissa); print_binary(added_Mantissa); printf("\n");
    printf("adder_output(0x%x): ",adder_output); print_binary(adder_output); printf("\n");
    printf("righted_frac(0x%x): ",righted_frac); print_binary(righted_frac); printf("\n");
    printf("frac(0x%x): ",frac); print_binary(frac); printf("\n");
    printf("lefted_frac(0x%x): ",lefted_frac); print_binary(lefted_frac); printf("\n");
    printf("lefted_frac_truncated(0x%x): ",lefted_frac_truncated); print_binary(lefted_frac_truncated); printf("\n");
    // printf("lefted_frac_righted: "); print_binary(lefted_frac_righted); printf("\n");
    // printf("lefted_frac_righted_truncated: "); print_binary(lefted_frac_righted_truncated); printf("\n");
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
        #if VERBOSE >= 3
        printf("EXP MUX 1\n");
        if(final_exponent > 0x00FF) printf("EXP OVERFLOW HAPPENED, BUT NOT HANDLED, MIGHT MAKE INF to NaN\n");
        printf("final_exponent: "); print_binary(final_exponent); printf("\n");
        #endif
    }else if(mantissa_23rd){ // 같은 부호 더했는데 24째는 0, 23째는 1이면 그대로        
        if(Larger_E == 0) final_exponent = 1;
        else final_exponent = Larger_E;

        #if VERBOSE >= 3
        printf("EXP MUX 2\n");
        printf("final_exponent: "); print_binary(final_exponent); printf("\n");
        #endif
    }
    else if((Larger_E == leading_1_position)){ // 23th 24th 모두 0이면, leading 1을 23째까지 좌시프트해야함.
        // 뺄셈 수행시 오버플로우 주의(e.g. 0x00 - 0d10). Larger_E에서 지불할 비용이 없는데 leading 1 을 만드는건 무리임.
        // Larger E가 23th 만들기 위한 비용을 부담할 수 있을 때
        final_exponent = 1;
        
        #if VERBOSE >= 3
        printf("EXP MUX 3\n");
        printf("final_exponent: "); print_binary(final_exponent); printf("\n");
        #endif
    }
    else if((Larger_E > leading_1_position)){
        final_exponent = (unsigned int)(Larger_E - leading_1_position);

        #if VERBOSE >= 3
        printf("EXP MUX 4\n");
        printf("final_exponent: "); print_binary(final_exponent); printf("\n");
        #endif
    }
    else{ // Larger_E에서 leading_1_position 을 위해 지불할 비용이 없을 때, 될때까지 Mantissa 좌shift 한 뒤, exp는 0으로
        final_exponent = 0;
        #if VERBOSE >= 3
        printf("EXP MUX 5\n");
        printf("final_exponent: "); print_binary(final_exponent); printf("\n");
        #endif
    }

    /* MANTISSA MUX */
    if((SA == SB) & (final_exponent != 0) & mantissa_24th){ // norm이고, 24th 살아있으면 >>1하고 hidden 1인 23 날려버린다.
        S = R || S;
        R = frac & 0b01;
        final_mantissa = righted_frac; // make 24th Rshift, hidden 1 is that.
        #if VERBOSE >= 3
        printf("MANTISSA MUX 1\n");
        printf("final_mantissa: "); print_binary(final_mantissa); printf("\n");
        #endif
    }
    else if(mantissa_23rd){ // norm이고, 23th 살아있으면 => hidden 1인 23만 날려버린다.
        final_mantissa = frac; // yes hidden 1
        assert(final_exponent != 0);
        #if VERBOSE >= 3
        printf("MANTISSA MUX 2\n");
        printf("final_mantissa: "); print_binary(final_mantissa); printf("\n");
        #endif
    }else if((mantissa_24th == 0) & (mantissa_23rd == 0) & (final_exponent == 0)){        
        final_mantissa = lefted_frac_truncated;  // made leading 1 23th, yes hidden 1
        #if VERBOSE >= 3
        printf("MANTISSA MUX 3\n");
        printf("final_mantissa: "); print_binary(final_mantissa); printf("\n");
        #endif
    }else if((mantissa_24th == 0) & (mantissa_23rd == 0) & (final_exponent != 0)){
        final_mantissa = lefted_frac_truncated;  // made leading 1 23th, yes hidden 1
        #if VERBOSE >= 3
        printf("MANTISSA MUX 4\n");
        printf("final_mantissa: "); print_binary(final_mantissa); printf("\n");
        #endif
    }
    else{ // 아마 inf용?
        final_mantissa = 0;
        #if VERBOSE >= 3
        printf("MANTISSA MUX 5\n");
        printf("SHOULD NOT BE HERE ISN't IT?\n");
        printf("final_mantissa: "); print_binary(final_mantissa); printf("\n");
        #endif
    }
    
    
    if((R==1 && S==1) || (G==1 && R==1 && S==0)){  
        if(SA^SB) {
            final_mantissa--;
            #if VERBOSE >= 3
            printf("final_mantissa--\n");
            #endif
        }
        else {
            final_mantissa++;
            #if VERBOSE >= 3
            printf("final_mantissa++\n");
            #endif
        }
    }
    // if(final_mantissa & 0x1000000) goto RENORM;

    int NAN_FLAG = 0;
    int OVERFLOW_FLAG = 0;
    if((EA == 0xFF && MA != 0) || (EB == 0xFF && MB != 0)) NAN_FLAG = 1;
    if((SA == SB) && final_exponent == 0xFF) OVERFLOW_FLAG = 1;
    if(NAN_FLAG){
        delta_adder.sign = final_sign;
        delta_adder.exponent = 0xFF;
        delta_adder.mantissa = 0xFF;
    }
    else if(OVERFLOW_FLAG){
        delta_adder.sign = final_sign;
        delta_adder.exponent = 0xFF;
        delta_adder.mantissa = 0x00;
    }
    else{
        delta_adder.sign = final_sign;
        delta_adder.exponent = final_exponent;
        delta_adder.mantissa = final_mantissa;
    }    

    #if VERBOSE >= 3
    printf("small_E_Sign: %d\n", small_E_Sign);
    printf("large_E_Sign: %d\n", large_E_Sign);
    printf("G: %d\n", G);
    printf("R: %d\n", R);
    printf("S: %d\n", S);
    #endif
    
    #if VERBOSE >= 3
        printf("delta_adder.total(%f) : 0b", delta_adder.total); print_binary(delta_adder.total_uint); printf("\n");
        printf("charlie_adder.total(%f) : 0b", charlie_adder.total); print_binary(charlie_adder.total_uint); printf("\n");
        printf("charlie_adder vs delta_adder : %f vs %f\n", charlie_adder.total, delta_adder.total);
        if(charlie_adder.total == delta_adder.total) printf("SAME\n");
        else printf("ERROR!!!\n");
        printf("\n");
    #endif
    return delta_adder;
}

float32 my_mac(struct float32 alpha, struct float32 bravo, struct float32 acc){
    struct float32 gotten_middle_result, gotten_final_result;
    struct float32 expected_middle_result, expected_final_result;
    gotten_middle_result = my_multiplier(alpha, bravo);
    gotten_final_result  = my_adder(gotten_middle_result, acc);
    expected_middle_result.total = alpha.total * bravo.total;
    expected_final_result.total = expected_middle_result.total + acc.total;

    #if VERBOSE >= 2
        printf("alpha(0x%08llx %f) is ",(ULL)alpha.total_uint, alpha.total); print_binary((ULL)alpha.total_uint); printf("\n");
        printf("bravo(0x%08llx %f) is ",(ULL)bravo.total_uint, bravo.total); print_binary((ULL)bravo.total_uint); printf("\n");
        printf("acc(0x%08llx %f) is ",(ULL)acc.total_uint, acc.total); print_binary((ULL)acc.total_uint); printf("\n");

        printf("GOTTEN_middle_result.total(0x%x == %f) : 0b", gotten_middle_result.total_uint, gotten_middle_result.total); print_binary(gotten_middle_result.total_uint); printf("\n");
        printf("EXPECTED_middle_result.total(0x%x == %f) : 0b", expected_middle_result.total_uint, expected_middle_result.total); print_binary(expected_middle_result.total_uint); printf("\n");
        printf("GOTTEN_final_result.total(0x%x == %f) : 0b", gotten_final_result.total_uint, gotten_final_result.total); print_binary(gotten_final_result.total_uint); printf("\n");
        printf("EXPECTED_final_result.total(0x%x == %f) : 0b", expected_final_result.total_uint, expected_final_result.total); print_binary(expected_final_result.total_uint); printf("\n");
        printf("compare: GOTTEN_final_result VS EXPECTED_final_result : 0x%x vs 0x%x\n", gotten_final_result.total_uint, expected_final_result.total_uint);

        if(gotten_middle_result.total == expected_middle_result.total) printf("middle result SAME\n");
        else printf("middle result ERROR!!!\n");
        if(gotten_final_result.total == expected_final_result.total) printf("final result SAME\n");
        else printf("final result ERROR!!!\n");
    #endif

    #if VERBOSE >= 1

    if(gotten_middle_result.total == expected_middle_result.total) printf("middle result SAME\n");
    else {
        printf("alpha(0x%08llx %f) is ",(ULL)alpha.total_uint, alpha.total); print_binary((ULL)alpha.total_uint); printf("\n");
        printf("bravo(0x%08llx %f) is ",(ULL)bravo.total_uint, bravo.total); print_binary((ULL)bravo.total_uint); printf("\n");
        printf("acc(0x%08llx %f) is ",(ULL)acc.total_uint, acc.total); print_binary((ULL)acc.total_uint); printf("\n");
        printf("GOTTEN_middle_result.total(0x%x == %f) : 0b", gotten_middle_result.total_uint, gotten_middle_result.total); print_binary(gotten_middle_result.total_uint); printf("\n");
        printf("EXPECTED_middle_result.total(0x%x == %f) : 0b", expected_middle_result.total_uint, expected_middle_result.total); print_binary(expected_middle_result.total_uint); printf("\n");
        printf("middle result ERROR!!!\n");
    }
    if(gotten_final_result.total == expected_final_result.total) printf("final result SAME\n");
    else{
        printf("GOTTEN_final_result.total(0x%x == %f) : 0b", gotten_final_result.total_uint, gotten_final_result.total); print_binary(gotten_final_result.total_uint); printf("\n");
        printf("EXPECTED_final_result.total(0x%x == %f) : 0b", expected_final_result.total_uint, expected_final_result.total); print_binary(expected_final_result.total_uint); printf("\n");
        printf("final result ERROR!!!\n");
    } 
    #endif

    return gotten_final_result;
}