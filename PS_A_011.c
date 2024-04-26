/*
link : ( https://codeforces.com/contest/381/problem/A )
*/

#include <stdio.h>

int arr[1020];

int num     ;
int Sereja  ;
int Dima    ;
int counter ;

int main(void)
{
    scanf("%d",&num);
    for(int index1 = 0 ; index1 < num ; ++index1)
    {
        scanf("%d",&arr[index1]);
    }

    int index2 = 0;
    int index3 = num - 1;

    for(counter = 0 ; index2 <= index3 ; ++counter)
    {
        if(arr[index2] >= arr[index3])
        {
            switch(counter % 2)
            {
                case 0 :
                Sereja += arr[index2++];
                break;
                case 1 :
                Dima += arr[index2++];
            }
        }
        else
        {
            switch(counter % 2)
            {
                case 0 :
                Sereja += arr[index3--];
                break;
                case 1 :
                Dima += arr[index3--];
            }
        }
    }

    printf("%d %d", Sereja , Dima);
    return 0 ;
}

