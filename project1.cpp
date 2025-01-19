#include <iostream>
#include <iomanip>


using namespace std;

int x = 698;

int CalcVol(int w, int l = 1, int h = 1)
{
    return w * l * h;
}

int main()
{
    double MyDouble = 123.3665585258;
    cout << fixed << setprecision(3) << MyDouble << endl;
    int x;
    cin >> x;
    cout << x << endl;
    cout << ::x << endl;
    cout << CalcVol(5,5);


    return 0;
}
