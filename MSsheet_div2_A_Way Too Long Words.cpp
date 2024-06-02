#include <iostream>
#define ByMohamedMahmoud ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(void)
{
    string str;
    cin >> str;
    if(str.size() > 10)cout << str[0] << (str.size() - 2) << str[str.size() - 1] << endl;
    else cout << str << endl;
}

short n;
int main()
{
    ByMohamedMahmoud
    cin >> n;
    while(n--)
    {
        solve();
    }
    return 0;
}
