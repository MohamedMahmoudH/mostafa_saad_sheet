/*
https://codeforces.com/contest/431/problem/A
*/

#include <stdio.h>
#include <string.h>

#define max 100005

int  unitStepArr[4];
char string[max]   ;

int index1 ;
int sum    ;

int main(void)
{
    for(index1 = 0 ; index1 < 4 ; ++index1)
    {
        scanf("%d",&unitStepArr[index1]);
    }

    // Clear input buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    /*
    you shoud not use fflush(stdin) because :
    The behavior of fflush() on input streams is undefined according to the C standard, so it's not recommended to use it for clearing input buffers.

    fflush(stdin);// to clear the buffer
    */

    fgets(string , max , stdin);
    size_t len = strlen(string);
    if((len > 0) && (string[len - 1] == '\n'))
        string[--len] = '\0';

    for(index1 = 0 ; index1 < len ; ++index1)
    {
        switch(string[index1])
        {
            case '1' :
                sum += unitStepArr[0];
                break;
            case '2' :
                sum += unitStepArr[1];
                break;
            case '3' :
                sum += unitStepArr[2];
                break;
            case '4' :
                sum += unitStepArr[3];
        }
    }

    printf("%d",sum);
    return 0;
}
