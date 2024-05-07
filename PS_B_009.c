/*
https://codeforces.com/contest/746/problem/B
*/

#include <stdio.h>
#include <string.h>
#define max 2005

char encodedString[max];
char string[max];
short index1;
short n     ;

int main(void)
{
    scanf("%hi",&n);
    getchar();

    fgets(encodedString , max , stdin);
    size_t len = strlen(encodedString);
    if((len > 0) && (encodedString[len - 1] == '\n'))
        encodedString[--len] = '\0';

    short index2 = 0;
    for(index1 = (n - 2) ; index1 > 0 ; (index1 -= 2)){
        string[index2++] = encodedString[index1];
    }
    switch(0 == (n % 2)){
    case 1:
        string[index2++] = encodedString[0];
    }
    for(index1 += 1 ; index1 < n ; (index1 += 2)){
        string[index2++] = encodedString[index1];
    }
    printf("%s",string);
    return 0;
}
