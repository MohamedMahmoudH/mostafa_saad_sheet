/*
https://codeforces.com/contest/344/problem/A
*/

#include <stdio.h>

#define max 100000

int arr[2 * max];

int main(void)
{
    int n = 0;
    int index1 = 0;
    int index2 = 0;
    int polarity_changes = 0;

    scanf("%d",&n);

    for(index1 = 0 ; index1 < n ; ++index1)
    {
        scanf("%d",&arr[index2]);

        if((arr[index2] != arr[index2 - 1]) && (index2 > 0))
        {
            ++polarity_changes;
        }
        ++index2;
    }

    printf("%d",(polarity_changes + 1));
}
/*

another solution
made By : adi_chaos
https://codeforces.com/contest/344/submission/257473215

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char p[n][3]; // Increased size to accommodate null terminator
    for (int i = 0; i < n; i++) {
        scanf("%2s", p[i]);
    }

    int group = 1;
    for (int i = 1; i < n; i++) {
        if (strcmp(p[i - 1], p[i]) != 0) {
            group++;
        }
    }

    printf("%d\n", group);

    return 0;
}
*/
