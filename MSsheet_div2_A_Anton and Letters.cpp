#include <iostream>
#include <algorithm>
#include <string>
#define ByMohamedMahmoud ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(void)
{
    bool  flag    = true;
    short result  = 0;
    char  tracker = 0;
    string str;
    getline(cin , str);
    sort(str.begin() , str.end());

    for(size_t i = 0 ; i < str.size() ; ++i)
    {
        if((str[i] >= 'a') && (str[i] <= 'z') && ((flag) || (tracker != str[i])))
        {
            flag    = false;
            tracker = str[i];
            result++;
        }
    }
    cout << result;
}

int main()
{
    ByMohamedMahmoud
    solve();
    return 0;
}
