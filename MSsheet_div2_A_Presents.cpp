#include <iostream>
#define ByMohamedMahmoud ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(void)
{
    short n , i = 0 ;
    short holder = 0;

    cin >> n;
    short *arr = new short[n]();

    for(i = 1 ; i <= n ; ++i){
        cin >> holder;
        arr[holder - 1] = i;
    }
    for(i = 0 ; i < n ; ++i){
        cout << arr[i] << ' ';
    }

    delete[]arr;arr=nullptr;
}

int main()
{
    ByMohamedMahmoud
    solve();
    return 0;
}
