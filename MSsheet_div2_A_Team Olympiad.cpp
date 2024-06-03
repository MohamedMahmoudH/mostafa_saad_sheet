#include <iostream>
#include <algorithm>
#define ByMohamedMahmoud ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#pragma pack(2)
using namespace std;

typedef struct{
    short team ;
    short order;
}mapping;

bool compare(const mapping &a , const mapping &b)
{
    return((a.team) < (b.team));
}

void solve(void)
{
    short n;
    cin >> n;

    short one , two , three ;
    one = two = three = 0;

    mapping *arr = new mapping[n]();
    for(size_t i = 0 ; i < n ; ++i)
    {
        cin >> arr[i].team;
        arr[i].order = (i + 1);
        (1 == arr[i].team)?(one++):((2 == arr[i].team)?(two++):(three++));
    }
    sort(arr , (arr + n) , compare);

    short teamsNum = min(one , min(two , three));
    cout << teamsNum << endl;

    for(short i = 0 ; i < teamsNum ; ++i)
        cout << arr[i].order << ' ' << arr[i + one].order << ' ' << arr[i + one + two].order << endl;

    delete[]arr;arr = nullptr;
}

int main()
{
    ByMohamedMahmoud
    solve();
    return 0;
}

