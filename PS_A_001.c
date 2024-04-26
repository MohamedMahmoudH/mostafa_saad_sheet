/*
Vanya and his friends are walking along the fence of height h and they do not want the guard to notice them. In order to achieve this the height of each of the friends should not exceed h.
If the height of some person is greater than h he can bend down and then he surely won't be noticed by the guard. The height of the i-th person is equal to ai.
Consider the width of the person walking as usual to be equal to 1, while the width of the bent person is equal to 2. Friends want to talk to each other while walking, so they would like to walk in a single row.
 What is the minimum width of the road, such that friends can walk in a row and remain unattended by the guard?

Input :

The first line of the input contains two integers n and h (1 <= n <= 1000, 1 <= h <= 1000) — the number of friends and the height of the fence, respectively.
The second line contains n integers ai (1 <= ai <= 2h), the i-th of them is equal to the height of the i-th person.

Output :

Print a single integer — the minimum possible valid width of the road.
*/

#include <stdio.h>

unsigned int arr[2000];

int main(void)
{
    unsigned int n       = 0; // number of friends
    unsigned int h       = 0; // the height of the fence
    unsigned int index   = 0;
    unsigned int width   = 0;

    //printf("Enter number of friends then the height of the fence : ");
    scanf ("%d %d",&n,&h);

    if((n < 1) || (n > 1000) || (h < 1) || (h > 1000))
    {
        //printf("there is an ERROR\n");
        return 1;
    }

    //printf("enter height of friends : ");
    for(index = 0 ; index < n ; ++index)
    {
        scanf("%d",&arr[index]);
        if((arr[index] > h) && (arr[index] <= (2 * h)))
        {
            width += 2;
        }
        else if((arr[index] <= h) && (arr[index] >= 1))
        {
            ++width;
        }
        else
        {
            //printf("there is an ERROR\n");
            return 1;
        }
    }
    printf("%d",width);
    return 0;
}
