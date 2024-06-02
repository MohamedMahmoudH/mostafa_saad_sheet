#include <iostream>
#define ByMohamedMahmoud ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve(void)
{
    short n;
    unsigned long long x;
    cin >> n >> x;

    char sign ;
    int  d , sad = 0;
    for(short i = 0 ; i < n ; ++i)
    {
        cin >> sign >> d ;
        if(sign == '+')x += d;
        else if(sign == '-')
        {
            if(x >= d)x -= d;
            else sad++;
        }
    }
    cout << x  << ' ' << sad;
}

int main()
{
    ByMohamedMahmoud
    solve();
    return 0;
}
