/*
same as ps_11 ( https://codeforces.com/contest/381/problem/A )
but if we takes biggest number of the whole array not only biggest number of boundries
*/

#include <stdio.h>

void getMaxNum(int *ptr);


int arr[1020];

int num        ;
int index1     ;
int index2     ;
int Sereja     ;
int sereja_num ;
int Dima       ;
int dima_num   ;


int main(void)
{
    scanf("%d",&num);
    for(index1 = 0 ; index1 < num ; ++index1)
    {
        scanf("%d",&arr[index1]);
    }

    for(index1 = 0 ; index1 < num ; ++index1)
    {
        if(0 == (index1 % 2)) // sereja
        {
            getMaxNum(&Sereja);
            sereja_num += Sereja ;
            //printf("%d\n",Sereja);
        }
        else // dima
        {
            getMaxNum(&Dima);
            dima_num += Dima ;
            //printf("\t%d\n",Dima);
        }
    }
    printf("%d %d", sereja_num , dima_num);
    return 0 ;
}


void getMaxNum(int *ptr)
{
    *ptr = arr[0];
     int max_index = 0;

    for(index2 = 1 ; (index2 < num) ; ++index2)
    {
        if(*ptr < arr[index2])
        {
            *ptr = arr[index2] ;
            max_index = index2 ;
        }
    }
    arr[max_index] = 0;//to erase the max value that i take it
}


