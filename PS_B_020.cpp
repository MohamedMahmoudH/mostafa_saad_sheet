/*
https://codeforces.com/contest/688/problem/B
B. Lovely Palindromes
*/

#include <iostream>
#include <algorithm>
#define ByMohamedMahmoud ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve(void)
{
    string  palindrome;
    cin  >> palindrome;
    cout << palindrome;
    reverse(palindrome.begin() , palindrome.end());
    cout << palindrome;
}

int main()
{
    ByMohamedMahmoud
    solve();
    return 0;
}
