/*
https://codeforces.com/contest/268/problem/A
*/

#include <stdio.h>

short index1 ;
short index2 ;
short n      ;
short checker;

int main(void)
{
    scanf("%hi",&n);
    short teams_uniform[n][2];

    for(index1 = 0 ; index1 < n ; ++index1) {
        scanf ("%hi %hi",&teams_uniform[index1][0],&teams_uniform[index1][1]); }

    for(index1 = 0 ; index1 < n ; ++index1) {
        for(index2 = 0 ; (index2 < n) ; ++index2) {
            if((teams_uniform[index1][1] == teams_uniform[index2][0]) && (index1 != index2)) {
                ++checker; } } }

    printf("%hi",checker);
    return 0;
}
