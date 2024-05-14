#include <stdio.h>

unsigned short binaryExp(unsigned short base , unsigned short exponent);

unsigned int   B ; // max to 2147483647
unsigned int   P ; // max to 2147483647
unsigned short M ; // max to 46340

int main(void) {
    scanf("%u %u %hu",&B,&P,&M);
    B = B % M ; // in case of ((B % M)^P) % M == (B^P) % M
    if(M != 1) {
        P = P % (M - 1); // in case of (B^(P % (M - 1))) % M == (B^P) % M
    } else {
        printf("0"); // x mod 1 == 0
        return 1;
    }
    unsigned short result = binaryExp(B , P);
    printf("%hu",result);
    return 0;
}

unsigned short binaryExp(unsigned short base , unsigned short exponent) {
    if(0 == exponent) {
        return 1;
    } else if(0 == (exponent % 2)) { // even
        unsigned short temp = binaryExp(base, exponent / 2);
        return (temp * temp) % M;
    } else if(1 == (exponent % 2)) { // odd
        unsigned short temp = binaryExp(base, (exponent - 1) / 2);
        return (base * temp * temp) % M;
    } else {return 0;}
}
