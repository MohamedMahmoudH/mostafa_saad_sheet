/*
45 min
https://codeforces.com/contest/433/problem/B
B. Kuriyama Mirai's Stones
*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a , const void *b)
{
    return (*(int *)a - *(int *)b);
}

void whichFn(int arr[])
{
    int l = 0 , r = 0 ;
    scanf("%d %d", &l , &r);
    getchar();

    unsigned long long output = 0;
    for(int index1 = (l - 1) ; index1 < r ; ++index1)
    {
        output += arr[index1];
        //printf("%d\t",arr[index1]);
    }
    printf("%llu\n",output);
}

void solve(void)
{
    short type = 0;
    int n = 0 , m = 0 ;

    scanf("%d",&n);
    int *values       = (int *)calloc(n , sizeof(int));
    int *sortedValues = (int *)calloc(n , sizeof(int));
    for(int index1 = 0 ; index1 < n ; ++index1)
    {
        scanf("%d",&values[index1]);
        sortedValues[index1] = values[index1];
        getchar();
    }
    qsort(sortedValues , n , sizeof(int) , compare);

    scanf("%d",&m);
    for(int index1 = 0 ; index1 < m ; ++index1)
    {
        scanf("%hi", &type);
        getchar();
        if(1 == type) {
            whichFn(values);
        }
        else if(2 == type){
            whichFn(sortedValues);
        }
    }

    free(values);
    free(sortedValues);
}


int main()
{
    solve();
    return 0;
}
