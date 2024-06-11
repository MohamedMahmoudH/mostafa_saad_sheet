#include <iostream>
#include <algorithm>
#define ByMohamedMahmoud ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve()
{
    short n , i = 0 ;
    short greedyTwin = 0 , sleepingTwin = 0;
    cin >> n;
    short *arr = new short[n]();

    for(i = 0 ; i < n ; ++i)
    {
        cin >> arr[i];
        sleepingTwin += arr[i];
    }
    sort(arr , arr + n , greater<short>());
    for(i = 0 ; sleepingTwin >= greedyTwin ; ++i)
    {
        greedyTwin   += arr[i];
        sleepingTwin -= arr[i];
    }
    cout << i;
    delete[]arr;arr = nullptr;
}

int main()
{
    ByMohamedMahmoud
    solve();
    return 0;
}

