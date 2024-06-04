#include <iostream>
#define ByMohamedMahmoud ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(void)
{
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    short n , k;
    cin >> n >> k;

    string pass(n , ' ');
    for(short i = 0 ; i < n ; ++i)
        pass[i] = (i < k) ? alpha[i] : pass[i % k];
    cout << pass;
}

int main()
{
    ByMohamedMahmoud
    solve();
    return 0;
}
