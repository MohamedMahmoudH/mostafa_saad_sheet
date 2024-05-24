/*
https://codeforces.com/contest/810/problem/B
B. Summer sell-off
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int products;
    int customers;
    int benefit;
}mo;

int compare(const void *a , const void *b)
{
    const mo *v1 = (const mo *)a;
    const mo *v2 = (const mo *)b;

    return((v2->benefit) - (v1->benefit));
}

void solve(void)
{
    int n , f;
    int index1 = 0 , x = 0 ,y = 0;
    scanf("%d %d",&n,&f);

    unsigned long long productSold = 0;
    mo *days = (mo *)calloc(n , sizeof(mo));
    for(index1 = 0 ; index1 < n ; ++index1)
    {
        scanf("%d %d",&days[index1].products,&days[index1].customers);
        x = days[index1].products;
        y = days[index1].customers;
        if(x >= y)
        {
            days[index1].benefit = 0;
            productSold += y;
        }
        else if((2 * x) >= y)
        {
            days[index1].benefit = (y - x);
            productSold += x;
        }
        else
        {
            days[index1].benefit = x ;
            productSold += x;
        }
    }

    qsort(days , n , sizeof(mo) , compare);

    for(index1 = 0 ; index1 < f ; ++index1)
    {
        productSold += days[index1].benefit;
    }

    printf("%llu",productSold);
    free(days);
}

int main()
{
    solve();
    return 0;
}
