/*
https://codeforces.com/contest/405/problem/A

this is absolutely sorting problem
*/


#include <stdio.h>

#define max_n 100

void swap(int *ptr1 ,int *ptr2);
void printing_array(int arr[] , int size);
void divideToSubArr(int arr[] , int size);
void sort_subarray (int arr[] , int size);

int array[max_n];
int left_subarray [max_n];
int right_subarray[max_n];

int num    ;//the number of the columns
int mid    ;//index for middle element of array
int index1 ;
int index2 ;

int main(void)
{
    printf("enter size of array : ");
    scanf("%d",&num);

    printf("enter elements of array : ");
    for(index1 = 0 ; index1 < num ; ++index1)
    {
        scanf("%d",&array[index1]);
    }

    divideToSubArr(array , num);

    sort_subarray(left_subarray  , (mid + 1));
    sort_subarray(right_subarray , (num - mid - 1));

    int i = 0 , j = 0 ;
    for(index1 = 0 ; (i < (mid + 1)) && (j < (num - mid - 1)) ; ++index1)/////////////////////////////////////////////
    {
        if(left_subarray[i] <= right_subarray[j])
        {
            array[index1] = left_subarray[i];
            ++i;
        }
        else
        {
            array[index1] = right_subarray[j];
            ++j;
        }
    }

    /*

    // Copy remaining elements of left_subarray (if any)
    while (i < (mid + 1))
    {
        array[index1] = left_subarray[i];
        ++i;
        ++index1;
    }

    // Copy remaining elements of right_subarray (if any)
    while (j < (num - mid - 1))
    {
        array[index1] = right_subarray[j];
        ++j;
        ++index1;
    }

    */

    printing_array(array , num);

    return 0;
}


 /********************************************************************************************************************/


void swap(int *ptr1 ,int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 =  temp;
}

//merge sort
void divideToSubArr(int arr[] , int size)
{
    mid = ((size - 1) / 2);
    for(index2 = 0 ; index2 <= mid ; ++index2)
    {
        left_subarray[index2] = arr[index2];
    }
    //printing_array(left_subarray , (mid + 1));

    for(index2 = 0 ; index2 < (size - mid - 1) ; ++index2)
    {
        right_subarray[index2] = arr[size - mid - 1 + index2];
    }
    //printing_array(right_subarray , (size - mid - 1));
}

void sort_subarray(int arr[] , int size)
{
    while(size > 0)
    {
        for(index2 = 0 ; (index2 < size) && (arr[size - 1] < arr[index2]) ; ++index2)
        {
           swap(&arr[size - 1] , &arr[index2]);
        }
        --size;
    }
}

void printing_array(int arr[] , int size)
{
    printf("\n{\t");
    for(index2 = 0 ; index2 < size ; ++index2)
    {
        printf("%d\t",arr[index2]);
    }
    printf("}\n");
}

/*
merge sort ::
1- sub the original array to get two sub_arrays "if odd size : the mid element with any of these sub_arrays"

2- sort each sub_array

3- combine two sorted sub_arrays with
sorting of elements :
compare first two elements at each sub_array
and take the smaller first element
then take first element that you didn't take it and second element from sub_array that you take its first element
and so on "repeat"
*/
