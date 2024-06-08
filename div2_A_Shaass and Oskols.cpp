#include <iostream>
#define ByMohamedMahmoud ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(void)
{
    short n , m , x , y , i;
    n = m = x = y = i = 0;
    cin >> n;

    short *arr = new short[n+2]();
    for(i = 1 ; i <= n ; ++i){
        cin >> arr[i];
    }

    cin >> m;
    for(i = 1 ; i <= m ; ++i){
        cin >> x >> y;

        arr[x - 1] += y - 1;
        arr[x + 1] += arr[x] - y;
        arr[x] = 0;
    }

    for(i = 1 ; i <= n ; ++i){
        cout << arr[i] << endl;
    }
    delete[] arr;arr = nullptr;
}

int main()
{
    ByMohamedMahmoud
    solve();
    return 0;
}
