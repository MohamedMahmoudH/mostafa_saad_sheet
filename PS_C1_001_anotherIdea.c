/*
https://codeforces.com/contest/515/problem/C
*/

#include <stdio.h>
#include <string.h>

char  num    [15 ];
char  max_num[120];
short holder [ 8 ];

short index1 ;

int main(void)
{
    short n = 0;
    scanf("%hi",&n);
    getchar();

    fgets(num , 16 , stdin);
    size_t len = strlen(num);
    if((len > 0) && (num[len - 1] == '\n'))
        num[--len] = '\0';

    for(index1 = 0 ; index1 < len ; ++index1) {
        switch(num[index1]) {
            case '0' :
            case '1' :
                break;
            case '4' ://322
                ++holder[3];
                holder[2] += 2;
                break;
            case '6' ://53
                ++holder[5];
                ++holder[3];
                break;
            case '8' ://7222
                ++holder[7];
                holder[2] += 3;
                break;
            case '9' ://7332
                ++holder[7];
                ++holder[2];
                holder[3] += 2;
                break;
            default : // any prime number : 2 , 3 , 5 , 7
                ++holder[num[index1] - '0'];
        }
    }

    for(index1 = 7 ; index1 >= 2 ; --index1) {
        for(short index2 = 0 ; index2 < holder[index1] ; ++index2) {
            printf("%hi",index1);
        }
    }
    return 0;
}
