/*
http://codeforces.com/contest/112/problem/A
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max_num 120

char first_str [max_num];
char second_str[max_num];
char step_first_str [max_num];
char step_second_str[max_num];

int index1 ;
int checker;

int main(void)
{
    fgets(first_str  , max_num , stdin);
    size_t len1 = strlen(first_str);
    if((len1 > 0) && (first_str[len1 - 1] == '\n'))
        first_str[--len1] = '\0';

    fgets(second_str , max_num , stdin);
    size_t len2 = strlen(second_str);
    if((len2 > 0) && (second_str[len2] == '\n'))
        second_str[--len2] = '\0';


    for(index1 = 0 ; index1 < strlen(first_str) ; ++index1)
    {
        step_first_str [index1] = tolower(first_str[index1]);
        step_second_str[index1] = tolower(second_str[index1]);
    }

    checker = strcmp(step_first_str , step_second_str);

    if(0 == checker)
    {
        printf("0");
    }
    else if(checker > 0)
    {
        printf("1");
    }
    else
    {
        printf("-1");
    }

    return 0;
}
