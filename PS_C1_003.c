/*
https://codeforces.com/contest/546/problem/C
*/

#include <stdio.h>
#define max 207

unsigned short n , k1 , k2;
unsigned short index1     ;
unsigned short arr1[max]  ;
unsigned short arr2[max]  ;

int main(void)
{
    scanf("%hu %hu",&n,&k1);
    for(index1 = 0 ; index1 < k1 ; ++index1)
    {
        scanf("%hu",&arr1[index1]);
    }

    scanf("%hu",&k2);
    for(index1 = 0 ; index1 < k2 ; ++index1)
    {
        scanf("%hu",&arr2[index1]);
    }

    index1 = 0;
    while(arr1[index1] && arr2[index1])
    {
        if(arr1[index1] > arr2[index1])
        {
            arr1[k1++]   = arr2[index1];
            arr1[k1++]   = arr1[index1];
            arr1[index1] = arr2[index1] = 0;
            //printf("%hu --- case 1 : %hu\t%hu\n",index1 ,arr1[k1 - 2],arr1[k1- 1]);
        }
        else
        {
            arr2[k2++]   = arr1[index1];
            arr2[k2++]   = arr2[index1];
            arr1[index1] = arr2[index1] = 0;
            //printf("%hu --- case 0 : %hu\t%hu\n",index1 ,arr2[k1 - 2],arr2[k1 - 1]);
        }
        ++index1;
        if(index1 > 200)
        {
            printf("-1");
            return 0;
        }
    }

    printf("%hu ",index1);
    if(0 == arr1[index1])
    {
        printf("2");
    }
    else
    {
        printf("1");
    }
    return 0;
}
