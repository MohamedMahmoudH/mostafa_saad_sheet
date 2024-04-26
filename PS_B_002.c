/*
https://codeforces.com/contest/680/problem/B
*/

#include <stdio.h>

int citiesNum ; // n : the number of cities
int index1;
int index2;
int myCity ; // a :  the number of city where Limak lives

int main(void)
{
    scanf("%d %d",&citiesNum,&myCity);
    int cities[citiesNum];

    for(index1 = 0 ; index1 < citiesNum ; ++index1)
    {
        scanf("%d",&cities[index1]);
    }

    int solvedCases = cities[myCity - 1];

    for(index1 = myCity , index2 = myCity - 2 ;(index1 < citiesNum) && (index2 >= 0) ; ++index1 , --index2)
    {
        if((1 == cities[index1]) && (1 == cities[index2]))
        {
            solvedCases += 2;
        }
    }

    if(index1 < citiesNum)
    {
        while(index1 < citiesNum)
        {
            switch(cities[index1++])
            {
            case 1:
                ++solvedCases;
            }
        }
    }
    else if(index2 >= 0)
    {
        while(index2 >= 0)
        {
            switch(cities[index2--])
            {
            case 1:
                ++solvedCases;
            }
        }
    }

    printf("%d",solvedCases);
    return 0;
}
