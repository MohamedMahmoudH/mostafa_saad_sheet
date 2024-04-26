/*
https://codeforces.com/contest/263/problem/A
*/

#include <stdio.h>
#include <math.h>

int matrix[5][5];

int main(void)
{
    int rows_index   = 0;
    int column_index = 0;
    int theOneRow    = 0;//rows index of 1
    int theOneColumn = 0;//column index of 1

    for(rows_index = 0 ; rows_index < 5 ; ++rows_index)
    {
        for(column_index = 0 ; column_index < 5 ; ++column_index)
        {
            scanf("%d",&matrix[rows_index][column_index]);

            switch(matrix[rows_index][column_index])
            {
            case 1:
                theOneRow = rows_index;
                theOneColumn = column_index;
            }
        }
    }
    //matrix[theOneRow][theOneColumn] == matrix[2][2]
    printf("%d",abs(theOneRow - 2) + abs(theOneColumn - 2));//number of switching rows and column to get a beautiful matrix

}
