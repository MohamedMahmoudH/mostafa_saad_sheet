/*
https://codeforces.com/contest/16/problem/B
*/

#include <stdio.h>

unsigned int maxMatchBoxes    ; // n
unsigned int containersNum    ; // m
unsigned int maxMatches       ;
unsigned int remainingMatches ;
unsigned int index1    ;
unsigned int max_index ;

unsigned int main(void)
{
    scanf("%d %d",&maxMatchBoxes ,&containersNum);
    unsigned int list[containersNum][2];

    for(index1 = 0 ; index1 < containersNum ; ++index1)
    {
        scanf("%d %d",&list[index1][0],&list[index1][1]);
    }

    while(maxMatchBoxes != 0)
    {
        max_index = 0 ;
        for(index1 = 1 ; index1 < containersNum ; ++index1)
        {
            switch(list[max_index][1] < list[index1][1])
            {
                case 1 :
                max_index = index1 ;
            }
        }

        if(maxMatchBoxes > (list[max_index][0]))
        {
            maxMatches += (list[max_index][0] * list[max_index][1]);
            maxMatchBoxes -= list[max_index][0];
            list[max_index][0] = 0;
        }
        else
        {
            maxMatches += (maxMatchBoxes * list[max_index][1]);
            //list[max_index][0] -= maxMatchBoxes;
            maxMatchBoxes = 0;
        }
        list[max_index][1] = 0 ;

        remainingMatches = 0;
        for(index1 = 0 ; index1 < containersNum ; ++index1)
        {
            remainingMatches += list[index1][1];
        }
        if(0 == remainingMatches){break;}
    }

    printf("%d",maxMatches);
    return 0;
}
