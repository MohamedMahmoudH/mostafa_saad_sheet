/*
https://codeforces.com/contest/688/problem/B
B. Lovely Palindromes
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseArr(char *arr , size_t sizee)
{
    int  begin = 0 ;
    int  end   = sizee - 1 ;
    char temp = 0;

    while(start < end)
    {
        temp = arr[begin];
        arr[begin] = arr[end];
        arr[end] = temp ;

        --end;
        ++start;
    }
}

void solve(void)
{
    int index1 = 0;
    char *input = (char *)calloc(100005 , sizeof(char));

    fgets(input , 100005 , stdin);
    size_t len = strlen(input);
    if((len > 0) && (input[len - 1] == '\n'))
            input[--len] = '\0';

    printf("%s",input);
    reverseArr(input , len);
    printf("%s",input);

    free(input);
}

int main()
{
    solve();
    return 0;
}
