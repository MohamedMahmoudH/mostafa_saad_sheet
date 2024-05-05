/*
https://codeforces.com/contest/47/problem/B
*/

#include <stdio.h>

void change(char letter , short int num);
void getOutput(char letter , short int letter_value);

char cmp[3][5] ; // comparison 2D array
char output[3] ; // 1D array

short int index1 ;
short int A ;
short int B ;
short int C ;

int main(void)
{
    for(index1 = 0 ; index1 < 3 ; ++index1)
    {
        fgets(cmp[index1] , 5 , stdin);
        switch(cmp[index1][1])
        {
            case '>' :
                change(cmp[index1][0] , 1 );
                change(cmp[index1][2] , -1);
                break ;

            case '<' :
                change(cmp[index1][0] , -1);
                change(cmp[index1][2] , 1 );
        }
    }

    if((A == 0) && (B == 0) && (C == 0))
    {
        printf("Impossible");
    }
    else
    {
        getOutput('A' , A);
        getOutput('B' , B);
        getOutput('C' , C);
        printf("%s",output);
    }
    return 0;
}

void change(char letter , short int num)
{
    switch((int)letter)
    {
        case 65 : // ASCII code for A
            A += num ;
            break ;
        case 66 : // ASCII code for B
            B += num ;
            break ;
        case 67 : // ASCII code for C
            C += num ;
    }
}
void getOutput(char letter , short int letter_value)
{
    switch(letter_value)
    {
        case 2 :
            output[2] = letter;
            break ;
        case 0 :
            output[1] = letter;
            break ;
        case -2 :
            output[0] = letter;
    }
}
