/*
Anton likes to play chess, and so does his friend Danik.
Once they have played n games in a row. For each game it's known who was the winner — Anton or Danik. None of the games ended with a tie.
Now Anton wonders, who won more games, he or Danik? Help him determine this.

Input
The first line of the input contains a single integer n (1 <= n <= 100000) — the number of games played.
The second line contains a string s, consisting of n uppercase English letters 'A' and 'D' — the outcome of each of the games.
The i-th character of the string is equal to 'A' if the Anton won the i-th game and 'D' if Danik won the i-th game.

Output
If Anton won more games than Danik, print "Anton" (without quotes) in the only line of the output.
If Danik won more games than Anton, print "Danik" (without quotes) in the only line of the output.
If Anton and Danik won the same number of games, print "Friendship" (without quotes).
*/

#include <stdio.h>

unsigned int match[100000];

int main(void)
{
    unsigned int n       = 0;// number of games
    unsigned int index   = 0;
    signed   int whoWins = 0;

    scanf("%d",&n);

    if((n > 100000)  || (n < 1))
    {
        return 1;
    }

    for(index = 0 ; index < n ; ++index)
    {
        scanf(" %c",&match[index]);
        switch(match[index])
        {
        case 'A' :
            ++whoWins;
            break;
        case 'D':
            --whoWins;
        }
    }

    if(whoWins > 0)
    {
        printf("Anton");
    }
    else if(whoWins < 0)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }
    return 0;
}
