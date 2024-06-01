#include <iostream>
#define ByMohamedMahmoud ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(void)
{
    int n , b , d ;
    cin >> n >> b >> d;

    int orangeSize = 0 , currentSize = 0 , overflows = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> orangeSize;
        if(orangeSize <= b)currentSize += orangeSize;
        if(currentSize > d){
            ++overflows;
            currentSize = 0;
        }
    }
    cout << overflows;
}

int main()
{
    ByMohamedMahmoud
    solve();
    return 0;
}
