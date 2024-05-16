/*
https://codeforces.com/contest/363/problem/B
B. Fence
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int theValue;
    int theIndex;
}mapping;

int compare(const void *a , const void *b)
{
    return (((*(mapping *)a).theValue) - ((*(mapping *)b).theValue)); // sorting according to "theValue" field
}

void solve(void)
{
    int n = 0 , k = 0 ;
    scanf("%d %d" ,&n , &k);
    getchar();

    mapping *theMap = (mapping *)calloc((n - k + 1) , sizeof(mapping));
    short   *height = (short   *)calloc( n          , sizeof(short)  ); // as the max of each element is 100
    for(int index1 = 0 ; index1 < n ; ++index1) // max n is : 150 000
    {
        scanf("%hi",&height[index1]);
        getchar();
        if(index1 == (k - 1))
        {
            theMap[0].theIndex = 0 ;
            for(int index2 = 1 ; index2 <= (k) ; ++index2)
            {
                theMap[0].theValue += height[k - index2];
            }
        }
        else if(index1 > (k - 1)) // avoiding nested loop by subtracting the first element of previous value and adding the last element of the new value
        {
            theMap[index1 - k + 1].theIndex = (index1 - k + 1);
            theMap[index1 - k + 1].theValue = (theMap[index1 - k].theValue) - (height[index1 - k]) + (height[index1]);
        }
    }

    qsort(theMap , (n - k + 1) , sizeof(mapping) , compare);
    printf("%d",((theMap[0].theIndex) + 1));

    free(theMap);
    free(height);
}

int main()
{
    solve();
    return 0;
}
