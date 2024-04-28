/*
https://codeforces.com/contest/102/problem/B
*/

//#include <stdlib.h> // for itoa
#include <stdio.h>
#include <string.h>

char  num[100005];
int   collector  ;
int   index1     ;
short counter    ;

int main(void)
{
    fgets(num , 100005 , stdin);
    size_t len = strlen(num);
    if((len > 0) && (num[len - 1] == '\n')) // (int)10 === '\n' ___the ascii code
        num[--len] = '\0';// (int)0 === '\0'

    while(len != 1)
    {
        collector = 0 ;
        for(index1 = 0 ; index1 < len ; ++index1)
        {
            collector += ((int)num[index1] - 48); // ascii code of 1 is : 49
        }

        // snprintf function : used to store a specified string till a specified length in a specified format
        // snprintf function :  to write formatted data to a string
        // snprintf() works similarly to printf(), but instead of printing the formatted output to the standard output(console), it stores the output in the provided buffer
        // it returns the number of characters (excluding the null-terminator) that would have been written if enough space had been available in the buffer. If the return value is equal to or greater than size, it means that the output was truncated to fit within the buffer size.
        snprintf(num , sizeof(num) , "%d" , collector);

        // or using itoa(collector , num , 10);

        len = strlen(num);
        ++counter;
    }

    printf("%d",counter);
    return 0;
}
