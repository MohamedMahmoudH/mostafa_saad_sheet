#include <iostream>
#include <algorithm>
#define ByMohamedMahmoud ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;

void solve()
{
    unsigned short index1 = 0;
    unsigned short height , width , waste , ques;
    scanf("%hu %hu %hu %hu",&height,&width,&waste,&ques);

    string arr[3] = {"Carrots" , "Kiwis" , "Grapes"};
    int *wasteCells = new int[waste]();

    unsigned short a , b;
    for(index1 = 0 ; index1 < waste ; ++index1)
    {
        scanf("%hu %hu",&a,&b);
        wasteCells[index1] = ((a - 1)*width + b);
    }
    sort(wasteCells , wasteCells + waste);

    unsigned int cellNum = 0 , wasteCellsNum = 0;
    for(index1 = 0 ; index1 < ques ; ++index1)
    {
        scanf("%hu %hu",&a,&b);
        cellNum = ((a - 1)* width + b);
        if(binary_search(wasteCells , wasteCells + waste , cellNum))cout << "Waste" << "\n";
        else
        {
            wasteCellsNum = upper_bound(wasteCells , wasteCells + waste , cellNum) - wasteCells + 1 ;
            cout << arr[(cellNum - wasteCellsNum) % 3] << "\n";
        }
    }
    delete[]wasteCells;wasteCells = nullptr;
}

int main()
{
    ByMohamedMahmoud
    solve();
    return 0;
}
