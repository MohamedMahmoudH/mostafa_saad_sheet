#include <iostream>
#include <algorithm>
#define ByMohamedMahmoud ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(void)
{
    string str;
    cin >> str;
    sort(str.begin() , str.end());
    int index = str.size()/2;
    cout << str[index];
    for(int i = 1 ; i <= index ; ++i)
    {
        cout << '+' << str[index + i];
    }
}

int main()
{
    ByMohamedMahmoud
    solve();
    return 0;
}
