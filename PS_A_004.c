/*
One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests. Participants are usually offered several problems during programming contests.
Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution. Otherwise, the friends won't write the problem's solution.
This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution.
Help the friends find the number of problems for which they will write a solution.

Input :
The first input line contains a single integer n (1 <= n <= 1000) — the number of problems in the contest. Then n lines contain three integers each,
each integer is either 0 or 1. If the first number in the line equals 1, then Petya is sure about the problem's solution, otherwise he isn't sure.
 The second number shows Vasya's view on the solution, the third number shows Tonya's view. The numbers on the lines are separated by spaces.

Output :
Print a single integer — the number of problems the friends will implement on the contest.
*/

#include <stdio.h>
#define MAX_NUM 1000

//int checker(int x);

int petya[MAX_NUM];
int vasya[MAX_NUM];
int tonya[MAX_NUM];

int n        ;//number of problems
int Index    ;
int problems ;//number of solved problems

int main(void)
{
    scanf("%d",&n);

    if((n < 1) || (n > MAX_NUM))
    {
        return 1;
    }

    for(Index = 0 ; Index < n ; ++Index)
    {
        scanf("%d %d %d",&petya[Index],&vasya[Index],&tonya[Index]);

        /*switch(checker(petya[Index]) + checker(vasya[Index]) + checker(tonya[Index]))
        {
        case 0:*/

            if((petya[Index] + vasya[Index] + tonya[Index]) >= 2)
            {
                ++problems;
            }
            /*break;
        default :
            return 2;
        }*/
    }
    printf("%d",problems);
    return 0;

}

/*int checker(int x)
{
    switch(x)
    {
    case 0:
    case 1:
        return 0;

    default:
        return 1;
    }
}
*/
