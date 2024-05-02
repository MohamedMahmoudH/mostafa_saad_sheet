/*
https://codeforces.com/contest/304/problem/C
*/

//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int n      ;
int index1 ;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n ;

    if(!(n % 2)) {
        cout << "-1" << endl;
        return 0 ;
    }

    for(index1 = 0 ; index1 < n ; ++index1) {
        cout << index1 << " ";
    }

    cout << endl << (n -1) ;
    for(index1 = 0 ; index1 < (n - 1) ; ++index1) {
        cout << " " << index1 ;
    }

    cout << endl << (n -1) ;
    for(index1 = 1 ; index1 < n ; ++index1) {
        cout << " " << ((2 * index1) - 1) % n ;
    }
    return 0;
}
