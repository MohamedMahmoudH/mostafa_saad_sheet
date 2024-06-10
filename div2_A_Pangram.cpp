/* you can add condition for n < 26 but not really matter */
#include <cctype>
#include <string>
#include <iostream>
#include <algorithm>
#define ByMohamedMahmoud ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

bool includeAllAlpha(string *str)
{
    for(char c = 'a' ; c <= 'z' ; ++c)if(str->find(c) == string::npos) return false;
    return true;
}

void solve()
{
    short n;
    string str;
    cin >> n >> str;
    transform(str.begin() , str.end() , str.begin() , ::tolower);
    cout << (includeAllAlpha(&str)? "YES" : "NO") ;
}

int main()
{
    ByMohamedMahmoud
    solve();
    return 0;
}
