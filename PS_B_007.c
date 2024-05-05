/*
https://codeforces.com/contest/227/problem/B
*/

#include <stdio.h>

int elementsNum;
int queriesNum ;
int index1 ;
int index2 ;

unsigned long long VasyaEfficient ;
unsigned long long PetyaEfficient ;

int main(void)
{
    scanf("%d",&elementsNum);
    int array[elementsNum];
    int position[elementsNum];
    for(index1 = 0 ; index1 < elementsNum ; ++index1)
    {
        scanf("%d",&array[index1]);
        position[array[index1]] = index1;
    }

    scanf("%d",&queriesNum);
    int queries[queriesNum];
    for(index1 = 0 ; index1 < queriesNum ; ++index1)
    {
        scanf("%d",&queries[index1]);

        PetyaEfficient += (elementsNum - position[queries[index1]]);
        VasyaEfficient += (position[queries[index1]] + 1);
    }

    printf("%llu %llu",VasyaEfficient , PetyaEfficient);
    return 0;
}
