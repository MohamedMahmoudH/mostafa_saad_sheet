/*
https://codeforces.com/contest/515/problem/C
*/

#include <stdio.h>
#include <string.h>

void  swap(char *ptr1 , char *ptr2);
short partition(char max_num[] , int low , int high);
void  quickSort(char max_num[] , int low , int high);

char num[20];
char max_num[130];

short index1 ;
short index2 ;

int main(void)
{
    short n = 0;
    scanf("%hi",&n);
    getchar();

    fgets(num , 20 , stdin);
    size_t len = strlen(num);
    if((len > 0) && (num[len - 1] == '\n'))
        num[--len] = '\0';

    for(index1 = 0 ; index1 < len ; ++index1)
    {
        switch(num[index1])
        {
            case '0' :
            case '1' :
                break;

            case '4' :
                strcat((max_num + index2) , "322");
                index2 += 3 ;
                break;

            case '6' :
                strcat((max_num + index2) , "53");
                index2 += 2 ;
                break;

            case '8' :
                strcat((max_num + index2) , "7222");
                index2 += 4 ;
                break;

            case '9' :
                strcat((max_num + index2) , "7332");
                index2 += 4 ;
                break;

            default : // any prime number : 2 , 3 , 5 , 7
                strncat((max_num + index2) , (num + index1) , 1 );
                ++index2;
        }
    }

      short high = index2 ;
      quickSort(max_num , 0 , (high - 1));
      //quickSort(max_num , 0 , (sizeof(max_num) / sizeof(max_num[0])));

    printf("%s",max_num);
    return 0;
}

//quick sort

void swap(char *ptr1 , char *ptr2) { // addresses
    int temp = *ptr1 ;
    *ptr1 = *ptr2 ;
    *ptr2 = temp;
}

short partition(char max_num[] , int low , int high) {
    int pivot  = max_num[high];
    int index1 = low - 1  ;
    for(int index2 = low ; index2 <= (high - 1) ; ++index2) {
        if(max_num[index2] > pivot) {
            ++index1;
            swap((max_num + index1),(max_num + index2));
        }
    }
    swap((max_num + index1 + 1), (max_num + high));

    return (index1 + 1);
}

void quickSort(char max_num[] , int low , int high) {
    if(low < high) {
        int partRetIndex = partition(max_num , low , high);
        quickSort(max_num ,         low        , (partRetIndex - 1) );
        quickSort(max_num , (partRetIndex + 1) ,         high       );
    }
}
