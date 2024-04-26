/*
https://codeforces.com/contest/66/problem/B
*/

#include <stdio.h>

int index1;
int index2;
int index3;

int n ;
int largest_checker;
int max_num        ;

int right_down;
int left_down ;


int main(void)
{
    scanf("%d",&n);

    int arr[n];
    int checker[n];

    for(index1 = 0 ; index1 < n ; ++index1)
    {
        checker[index1] = 1 ;
        scanf("%d",&arr[index1]);
    }

    if(1 == n)
    {
        printf("1");
        return 0;
    }
    else if(2 == n)
    {
        printf("2");
        return 0;
    }

    for(index1 = 0 ; index1 < n ; ++index1)
    {
       for(index2 = index1 ; index2 < (n - 1) ; ++index2) // right_down
       {
            right_down = arr[index2];
            if(right_down >= arr[index2 + 1])
            {
                ++checker[index1];
            }
            else
            {
                break;
            }
       }

       for(index3 = index1 ; index3 > 0 ; --index3) // left_down
       {
            left_down = arr[index3];
            if(left_down >= arr[index3 - 1])
            {
                ++checker[index1];
            }
            else
            {
                break;
            }
       }
    }

    /*
    for(index1 = 0 ; index1 < n ; ++index1)
    {
        printf("%2d\t",checker[index1]);
        if(0 == (index1 % 10))
        {
            printf("\n");
        }
    }
    */

    // printf("\n\n\n");
    max_num = checker[0];
    for(index1 = 1 ; index1 < n ; ++index1)
    {
        if(checker[index1] > max_num)
        {
            max_num = checker[index1];
            // printf("%d\t",max_num);
        }
    }

    printf("%d",max_num);
    return 0;
}
