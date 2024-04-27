/*
https://codeforces.com/contest/463/problem/B
*/

#include <stdio.h>

int index1   ;
int dollars  ;
int energyUp ;


int main(void)
{
    int n = 0 ;
    scanf("%d",&n);

    int pylonds[n + 1];
    pylonds[0] = 0;
    for(index1 = 1 ; index1 <= n ; ++index1)
    {
        scanf("%d",&pylonds[index1]);
    }

    for(index1 = 1 ; index1 <= n ; ++index1)
    {
        if(pylonds[index1] > pylonds[index1 - 1])
        {
            if(energyUp <= (pylonds[index1] - pylonds[index1 - 1]))
            {
                dollars += (pylonds[index1] - pylonds[index1 - 1] - energyUp);
                energyUp = 0;
            }
            else
            {
                energyUp -= (pylonds[index1] - pylonds[index1 - 1]);
            }
        }
        else
        {
            energyUp += (pylonds[index1 - 1] - pylonds[index1]);
        }
    }

    printf("%d",dollars);
    return 0;
}
