/*
http://codeforces.com/contest/236/problem/A
*/
#include <stdio.h>
#include <string.h>
#define max_num 120

char str[max_num];

int main(void)
{
    fgets(str, max_num, stdin);
    size_t len = strlen(str);
    if ((len > 0) && (str[len - 1] == '\n'))
        str[--len] = '\0';

    int repetitiveNum = 0;
    for (int index1 = 0; index1 < len; ++index1)
    {
        for (int index2 = index1 + 1; index2 < len; ++index2)
        {
            if (str[index2] == str[index1])
            {
                ++repetitiveNum;
                break;
            }
        }
    }

    int nonRepetitiveNum = len - repetitiveNum;

    switch (nonRepetitiveNum % 2)
    {
    case 0:
        printf("CHAT WITH HER!");
        break;
    case 1:
        printf("IGNORE HIM!");
        break;
    }

    return 0;
}
