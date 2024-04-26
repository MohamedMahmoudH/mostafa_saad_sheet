/*
https://codeforces.com/contest/59/problem/A
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define max 120

char str[max];

int index1 ;
int upper_num = 0;
int lower_num = 0;

int main(void)
{
    fgets(str , max , stdin);
    size_t len = strlen(str);
    if((len > 0) && (str[len - 1] == '\n'))
        str[--len] = '\0';

    for(index1 = 0 ; index1 < len ; ++index1)
    {
        if(isupper(str[index1]))
        {
            ++upper_num;
        }
        else
        {
            ++lower_num;
        }
    }

    if(upper_num > lower_num)
    {
        for(index1 = 0 ; index1 < len ; ++index1)
        {
            printf("%c" , toupper(str[index1]));
        }
    }
    else
    {
        for(index1 = 0 ; index1 < len ; ++index1)
        {
            printf("%c" , tolower(str[index1]));
        }

    }
    return 0;
}
