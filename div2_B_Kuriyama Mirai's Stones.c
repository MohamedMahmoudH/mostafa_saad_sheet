#include <stdio.h>
#include <stdlib.h>

int compare(const void *a , const void *b)
{
    return (*(unsigned long long *)a - *(unsigned long long *)b);
}

void whichFn(unsigned long long arr[])
{
    int l = 0 , r = 0 ;
    scanf("%d %d", &l , &r);
    getchar();
    printf("%llu\n",(arr[r] - arr[l - 1]));
}

void solve(void)
{
    short type = 0;
    int n = 0 , m = 0 ;

    scanf("%d",&n);
    unsigned long long *values       = (unsigned long long *)calloc(n+1 , sizeof(unsigned long long));
    unsigned long long *sortedValues = (unsigned long long *)calloc(n+1 , sizeof(unsigned long long));

    values[0] = sortedValues[0] = 0;
    for(int index1 = 1 ; index1 <= n ; ++index1)
    {
        scanf("%llu",&sortedValues[index1]);
        values[index1] = sortedValues[index1] + values[index1 - 1];
    }
    qsort(sortedValues , n+1 , sizeof(unsigned long long) , compare);

    for(int index1 = 1 ; index1 <= n ; ++index1)
    {
        sortedValues[index1] += sortedValues[index1 - 1];
    }

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
