/*
https://codeforces.com/contest/266/problem/A
*/

#include <stdio.h>

int index1  ;
int checker ;
int n       ;

int main(void)
{
    scanf("%d",&n);
    char arr[n];

    for(index1 = 0 ; index1 < n ; ++index1)
    {
        scanf(" %c",&arr[index1]);// the space before %c to clear the buffer
    }

    for(index1 =  0 ; (index1 < n) ; ++index1)
    {
        if(arr[index1] == arr[index1 + 1])
        {
            ++checker ;
        }
    }

    printf("%d",checker);
    return 0;
}
