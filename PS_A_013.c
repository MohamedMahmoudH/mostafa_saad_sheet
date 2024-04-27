/*
https://codeforces.com/contest/427/problem/A
*/

#include <stdio.h>

int n       ;
int index1  ;
int checker ;
int positiveNum ;

int main(void)
{
    scanf("%d",&n);
    char arr[n];

    for(index1 = 0 ; index1 < n ; ++index1)
    {
        scanf("%d",&arr[index1]);
    }

    for(index1 = 0 ; index1 < n ; ++index1)
    {
        if(arr[index1] < 0)
        {
            ++checker ;
        }
        else
        {
            positiveNum = arr[index1];
            while((positiveNum > 0) && (index1 < n))
            {
                positiveNum += arr[++index1];
            }
        }
    }

    printf("%d",checker);
    return 0;
}
