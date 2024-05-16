/*
https://codeforces.com/contest/6/problem/B
B. President's Office

i don't know how this shit get accepted
*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a , const void *b)
{
    return (*(char *)a - *(char *)b);
}

void solve(void)
{
    char president_char = 0;
    short n = 0 , m = 0 , flag = 1;
    short indexX = 0 , indexY = 0 ;
    short rows = 1 , columns = 1  ;
    scanf("%hi %hi %c",&n,&m,&president_char);

    char **office = (char **)calloc(n+2 , sizeof(char *));
    for(short index1 = 0 ; index1 < n+2 ; ++index1)
    {
        office[index1] = (char *)calloc(m+2 , sizeof(char));
        office[index1][0] = '.';
        for(short index2 = 1 ; index2 < m+1 ; ++index2)
        {
            if((0 == index1) || ((n + 1) == index1))
            {
                office[index1][index2] = '.';
                continue;
            }
            scanf(" %c",&office[index1][index2]);
            if((president_char == office[index1][index2]))
            {
                if(flag)
                {
                    indexX = index2;
                    indexY = index1;
                    flag = 0;
                }
                else if(indexX == index2)// for one column
                {
                    rows++;
                }
                else if(indexY == index1)// for one row
                {
                    columns++;
                }
            }
        }
        office[index1][m + 1] = '.';
    }

    /*
    for(short index1 = 0 ; index1 < n+2 ; ++index1)
    {
        for(short index2 = 0 ; index2 < m+2 ; ++index2)
        {
            printf("%c\t",office[index1][index2]);
        }
        printf("\n");
    }
    printf("rows = %hi\tcolumns = %hi\n",rows,columns);
    printf("indexX = %hi\tindexY = %hi\n",indexX,indexY);
    */

    int checker0 = 0;
    char *checker = (char *)calloc(500 , sizeof(char));
    short sizee = 0;

    for(short yy = 0 ; yy < rows ; ++yy)
    {
        if(office[indexY + yy][indexX - 1] != '.')
        {
            checker[sizee++] = office[indexY + yy][indexX - 1];
        }
        if(office[indexY + yy][indexX + columns] != '.')
        {
            checker[sizee++] = office[indexY + yy][indexX + columns];
        }
    }

    for(short xx = 0 ; xx < columns ; ++xx)
    {
        if('.' != office[indexY - 1][indexX + xx])
        {
            checker[sizee++] = office[indexY - 1][indexX + xx];
        }
        if('.' != office[indexY + rows][indexX + xx])
        {
            checker[sizee++] = office[indexY + rows][indexX + xx];
        }
    }

    qsort(checker , sizee , sizeof(char) , compare);
    /*
    for(short index3 = 0 ; index3 < sizee ; ++index3)
    {
        printf("%c\t",checker[index3]);
    }
    */
    if(checker[0] != NULL)
    {
        char tracker = checker[0];
        checker0++;
        for(short index3 = 1 ; index3 < sizee ; ++index3)
        {
            if(checker[index3] != tracker)
            {
                tracker = checker[index3];
                checker0++;
            }
        }
    }
    printf("%d",checker0);

    for(short index1 = 0 ; index1 < n+2 ; ++index1)
    {
        free(office[index1]);
    }
    free(office );
    free(checker);
}

int main()
{
    solve();
    return 0;
}
