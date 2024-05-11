/*
https://codeforces.com/contest/732/problem/A
*/

#include <stdio.h>

int counter ;
int num     ;

int main(void)
{
    int k = 0;
    int r = 0;
    scanf("%d %d",&k,&r);

    int mod_k = k % 10;// ones of k

    //max number of shovels 10 because we can buy 10 shovels without any change
    for(counter = 1 ; counter <= 10 ; ++counter)
    {
        num = mod_k * counter ;
        if((0 == (num % 10)) || (r == (num % 10)))
        {
            break;
        }
    }

    printf("%d",counter);
    return 0;
}
