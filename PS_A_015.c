/*
https://codeforces.com/contest/731/problem/A
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

#define max_size 105

int find_smallest_value(void);

char embosser[max_size];

int  index1 ;
int  num    ;
char last_char = 'a';

int main(void)
{
    fgets(embosser , max_size , stdin);
    size_t len = strlen(embosser);
    if((len > 0) && (embosser[len - 1] == '\n'))
        embosser[--len] = '\0';

    for(index1 = 0 ; index1 < len ; ++index1)
    {
        num += find_smallest_value();
        last_char = embosser[index1];
    }

    printf("%d",num);
    return 0;
}

int find_smallest_value(void)
{
    int num1  = abs((int)embosser[index1] - (int)(last_char + 26)) % 26 ;
    int num2  = abs((int)last_char - (int)(embosser[index1] + 26)) % 26 ;

    return (num1 < num2) ? num1 : num2;
}
