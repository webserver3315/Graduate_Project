/*
    FPU Multiplier
    M48 처리하는 새 알고리즘 적용
*/
#ifndef BASICS

#define BASICS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define VERBOSE 1
// #define RANDOM
#define ULL unsigned long long

#endif

int called = 0;

struct float16{ // 1 5 10
    union{
        struct{
            unsigned short sign : 1;
            unsigned short exponent : 5;
            unsigned short mantissa : 10;
        };
        unsigned short total;
    };
};

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
void print_binary_rec(unsigned long long foo, unsigned long long depth)
{
    int ret;
    if(foo) {
        print_binary_rec((unsigned long long)foo>>1, depth+1);
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
    if(tmp & 1<<23){
        return 0;   
    }else if(tmp & 1<<22){
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
    }else if(tmp & 0b00000000000000000100000000000000){
        return 9;
    }else if(tmp & 0b00000000000000000010000000000000){
        return 10;
    }else if(tmp & 0b00000000000000000001000000000000){
        return 11;
    }else if(tmp & 0b00000000000000000000100000000000){
        return 12;
    }else if(tmp & 0b00000000000000000000010000000000){
        return 13;
    }else if(tmp & 0b00000000000000000000001000000000){
        return 14;
    }else if(tmp & 0b00000000000000000000000100000000){
        return 15;
    }else if(tmp & 0b00000000000000000000000010000000){
        return 16;
    }else if(tmp & 0b00000000000000000000000001000000){
        return 17;
    }else if(tmp & 0b00000000000000000000000000100000){
        return 18;
    }else if(tmp & 0b00000000000000000000000000010000){
        return 19;
    }else if(tmp & 0b00000000000000000000000000001000){
        return 20;
    }else if(tmp & 0b00000000000000000000000000000100){
        return 21;
    }else if(tmp & 0b00000000000000000000000000000010){
        return 22;
    }else if(tmp & 0b00000000000000000000000000000001){
        return 23;
    }else{
        return 0;
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
        return 0; // NO leading 1
    }
}

float32 my_multiplier(struct float32 alpha, struct float32 bravo)
{
    #if VERBOSE >= 1
    printf("alpha(0x%08llx %f) is ",(ULL)alpha.total_int, alpha.total); print_binary((ULL)alpha.total_int); printf("\n");
    printf("bravo(0x%08llx %f) is ",(ULL)bravo.total_int, bravo.total); print_binary((ULL)bravo.total_int); printf("\n");
    #endif

    struct float32 charlie, delta; // charlie: Correct answer
    charlie.total = alpha.total * bravo.total;
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

    // 순서유의
    // 이 때, EA_minus_EB는 후에 다 EA0 봐가면서 보정이 되어있으므로 여기서 바꿔야함. 이보다 앞에서 바꿔버리면 꼬임.
    if(EA == 0) EA = 1; // denorm 의 exp는 -126취급.
    if(EB == 0) EB = 1;
    
    /*************************** ADD Exponent ***************************/
    int EA_plus_EB = EA + EB; // EA and EB is unsigined int
    int EA_plus_EB_minus_254 = EA_plus_EB - 254;

    #if VERBOSE >= 2
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
    
    #if VERBOSE >= 2
    printf(" \
    M_LeftBig = %d \
    M_RightBig = %d \
    M_Equal = %d \
    \n"
    , M_LeftBig, M_RightBig, M_Equal);
    #endif

    #if VERBOSE >= 2
    printf("Denorm1(0x%x) is ",Denorm1); print_binary(Denorm1); printf("\n");
    printf("Denorm2(0x%x) is ",Denorm2); print_binary(Denorm2); printf("\n");
    #endif

    /******************************** Multiply Mantissa ******************************/
    unsigned long long M_48_Original = (unsigned long long) Denorm1 * (unsigned long long) Denorm2;

    int G, R, S;
    int leading_1_position = leading_1_detector_48bit(M_48_Original);
    #if VERBOSE >= 2
    printf("M_48_Original == d1 * d2 = 0x%llx\n", M_48_Original);
    printf("leading_1_position %d\n", leading_1_position);
    #endif

    /*         Dealing with   M48             */
    int E = EA_plus_EB_minus_254;
    int Exp = E + 127;
    int UDFL = 0;
    int OVFL = 0;
    long long Until_46th = 46 - leading_1_position;
    long long Until_126 = -126 - E;
    ULL Man1, Man2, Man3, Man4, Man5, final_Man;
    int Exp1, Exp2, Exp3, Exp4, Exp5, final_Exp;

    Man1 = M_48_Original;
    Man2 = M_48_Original>>1;
    Man3 = M_48_Original>>Until_126;
    if(Until_126 > 48) Man3 = 0x00;
    Man4 = M_48_Original<<Until_46th;
    Man5 = M_48_Original<<Until_46th;
        // int Until_126_2 = leading_1_detector_48bit(Man5);
        int Until_126_2 = -126 - (Exp - Until_46th);
        Man5 = Man5 >> Until_126_2;
        if(Until_126_2 > 48) Man5 = 0x00;
    

    Exp1 = Exp;
    Exp2 = Exp + 1;
    Exp3 = 0;
    Exp4 = 1;
    Exp5 = Exp - Until_46th;

    #if VERBOSE >= 2
    printf("Until_46th %d\n", Until_46th);
    printf("Until_126 %d\n", Until_126);
    printf("E is %d\n",E);
    printf("Exp is %d\n",Exp);
    printf("Man1(0x%llx) is ", Man1); print_binary(Man1); printf("\n");
    printf("Man2(0x%llx) is ", Man2); print_binary(Man2); printf("\n");
    printf("Man3(0x%llx) is ", Man3); print_binary(Man3); printf("\n");
    printf("Man4(0x%llx) is ", Man4); print_binary(Man4); printf("\n");
    printf("Man5(0x%llx) is ", Man5); print_binary(Man5); printf("\n");
    printf("Exp1 is %d\n",Exp1);
    printf("Exp2 is %d\n",Exp2);
    printf("Exp3 is %d\n",Exp3);
    printf("Exp4 is %d\n",Exp4);
    printf("Exp5 is %d\n",Exp5);
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
            if(E - Until_46th < -126){ // c-e-i
            final_Man = Man5;
            DEBUG_FINAL_MAN = 0x3;
            }else{ // c-b or c-h
            final_Man = Man4;
            DEBUG_FINAL_MAN = 0x4;
            }
        }
    }
    else if(E < -126){
        if(leading_1_position == 47){ // d
            final_Man = Man3;
            DEBUG_FINAL_MAN = 0x5;
        }else if(leading_1_position == 46){ // e
            final_Man = Man3;
            DEBUG_FINAL_MAN = 0x6;
        }else{ // f
            final_Man = Man3;
            DEBUG_FINAL_MAN = 0x7;
        }
    }
    else{// Equal
        if(leading_1_position == 47){ // g
            final_Man = Man2;
            DEBUG_FINAL_MAN = 0x8;
        }else if(leading_1_position == 46){ // h
            final_Man = Man1;
            DEBUG_FINAL_MAN = 0x9;
        }else{ // i
            final_Man = Man1;
            DEBUG_FINAL_MAN = 0xA;
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
    
    if(final_Exp > 254) OVFL = 1;
    int NAN_FLAG = 0;
    if((EA == 0xFF && MA != 0) || (EB == 0xFF && MB != 0)) NAN_FLAG = 1;



    #if VERBOSE >= 2
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
    delta.sign = final_sign;
    delta.exponent = final_Exp;
    delta.mantissa = M_48;


    #if VERBOSE >= 2
    printf("final M_48(0x%llx) is ",M_48); print_binary(M_48); printf("\n");
    printf("G: %d\n", G);
    printf("R: %d\n", R);
    printf("S: %d\n", S);
    printf("OVFL: %d\t UDFL: %d\n",OVFL, UDFL);

    float32_printer(alpha, "alpha");
    float32_printer(bravo, "bravo");
    float32_printer(charlie, "charlie");
    float32_printer(delta, "delta");
    #endif

    #if VERBOSE >= 1
    printf("delta.total(%f) : 0b", delta.total); print_binary(delta.total_int); printf("\n");
    printf("charlie.total(%f) : 0b", charlie.total); print_binary(charlie.total_int); printf("\n");
    printf("charlie vs delta : %f vs %f\n", charlie.total, delta.total);
    if(charlie.total == delta.total) printf("SAME\n");
    else printf("ERROR!!!\n");

    called++;
    printf("my_multiplier: called = %dth\n", called);
    printf("*********************** %f * %f END*********************\n", alpha.total, bravo.total);
    #endif

    return delta;
}


int main()
{
    printf("Hello World\n");
    
    // float32_printer(cc, "cc");
    struct float32 aa, bb, cc;
    
    aa.total_int = 1098295052; bb.total_int = 189244;
    my_multiplier(aa, bb);

    aa.total_int = 138562329; bb.total_int = 944790155;
    my_multiplier(aa, bb);

    aa.total_int = 312418058; bb.total_int = 212783891;
    my_multiplier(aa, bb);

    aa.total_int = 0x407FFFFF; bb.total_int = 0x407FFFFF; // Make 47th Mantissa 1, and result not INF
    my_multiplier(aa, bb);

    // 이하 통과시켜야함
    aa.total_int = 89489864; bb.total_int = 817591348; // exp 10 * exp 97 != zero(왜냐하면 생존 mantissa가 있다)
    my_multiplier(aa, bb);

    aa.total_int = 89489864; 
    bb.total_int = 817591348; bb.mantissa = 0; bb.exponent = 117; // exp == 0
    my_multiplier(aa, bb);

    aa.total_int = 0x007fffff; bb.total_int = 0x007fffff; // Maximum denorm mult ^ 2
    my_multiplier(aa, bb);
    
    // 이하 해결

    // 예시: https://stackoverflow.com/questions/51661257/binary-floating-point-addition-algorithm
    aa.total_int = 0b00001000111100110110010010011100; 
    bb.total_int = 0b00000000000011000111111010000100; 
    float32_printer(aa, "aa");
    float32_printer(bb, "bb");
    my_multiplier(aa, bb); // 뒈짓

    aa.total_int = 0x800000; bb.total_int = 0x800000; // Min norm ^ 2 == denorm???
    my_multiplier(aa, bb); // 뒈짓

    aa.total_int = 0x7f7fffff; bb.total_int = 0x007fffff; // Maximum norm mult * Maximum denorm mult
    my_multiplier(aa, bb);

    aa.total_int = 1656830887; bb.total_int = 1386443347;
    my_multiplier(aa, bb);


    
    aa.total_int = 1352740975; bb.total_int = 1207161653; // 터짐
    float32_printer(aa, "aa");
    float32_printer(bb, "bb");
    my_multiplier(aa, bb);

    aa.total_int = 1173666029; bb.total_int = 1167651708; // 아마 R==1 S==1이라서 mantissa++ 해줘야할듯?
    float32_printer(aa, "aa");
    float32_printer(bb, "bb");
    my_multiplier(aa, bb);

    aa.total_int = 977394179; bb.total_int = 961550550;
    float32_printer(aa, "aa");
    float32_printer(bb, "bb");
    my_multiplier(aa, bb);

    aa.total = 0.5; bb.total = 0.4375;
    my_multiplier(aa, bb); 

    aa.total = 0.5; bb.total = -0.4375;
    my_multiplier(aa, bb);
    aa.total = 0.5; bb.total = 0.75;
    my_multiplier(aa, bb);
    aa.total = -0.5; bb.total = 0.75;
    my_multiplier(aa, bb);
    aa.total = -0.5; bb.total = -0.75;  
    my_multiplier(aa, bb);
    // cc.total = aa.total + bb.total;

    aa.total_int = 551542477; bb.total_int = 1881522032;
    my_multiplier(aa, bb);
    // 여기까지 전부 통과



/*
    // 47th mantissa == 1
    aa.total_int = 89489864; 
    bb.total_int = 817591348; bb.exponent = 118; // exp == -126==1-127 +1(since mantissa 47th)
    my_multiplier(aa, bb);

    aa.total_int = 89489864; 
    bb.total_int = 817591348; bb.exponent = 117; // exp == 1 (since mantissa + 1)
    my_multiplier(aa, bb);

    aa.total_int = 89489864; 
    bb.total_int = 817591348; bb.exponent = 116; // exp == 0
    my_multiplier(aa, bb);
*/
    #ifdef RANDOM
    srand(time(NULL));
    for(int i=0;i<100000;i++){
        aa.total_int = rand();
        bb.total_int = rand();
        printf("aa.total_int: %d\n",aa.total_int);
        printf("bb.total_int: %d\n",bb.total_int);
        float32_printer(aa, "aa");
        float32_printer(bb, "bb");
        my_multiplier(aa, bb);
    }
    #endif
    
    return 0;
}