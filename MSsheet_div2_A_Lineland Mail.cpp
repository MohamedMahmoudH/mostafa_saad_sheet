#include <iostream>
#define ByMohamedMahmoud ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#pragma pack(4)
using namespace std;

typedef struct{
    int pos;
    int step;
}mo;

void solve(void)
{
    int n;
    cin >> n;
    mo *arr = new mo[n]();

    cin >> arr[0].pos;
    for(int i = 1 ; i < n ; ++i)
    {
        cin >> arr[i].pos;
        arr[i].step   =  arr[i].pos-arr[i-1].pos;
        arr[i-1].step = ((arr[i].step < arr[i-1].step) && (i != 1))?(arr[i].step):(arr[i-1].step);
    }
    arr[0].step = arr[1].pos - arr[0].pos;

    int x = 0 , y = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        x = arr[n-1].pos - arr[i].pos;
        y = arr[ i ].pos - arr[0].pos;
        cout << arr[i].step << ' ' << ((x > y)? x : y)<< endl;
    }
    delete[]arr;arr=nullptr;
}

int main()
{
    ByMohamedMahmoud
    solve();
    return 0;
}

