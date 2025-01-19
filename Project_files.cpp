#include <iostream>
#include <string.h>
using namespace std;
class ThreeD
{
public:
    int x, y, z;

    ThreeD() : x(0), y(0), z(0) {}

    ThreeD(int a, int b, int c) : x(a), y(b), z(c) {}

    void SetX(int a) { x = a; }
    void SetY(int b) { y = b; }
    void SetZ(int c) { z = c; }

    int GetX() const { return x; }
    int GetY() const { return y; }
    int GetZ() const { return z; }

    friend istream &operator>>(istream &in, ThreeD &obj)
    {
        cout << "Enter x: ";
        in >> obj.x;
        cout << "Enter y: ";
        in >> obj.y;
        cout << "Enter z: ";
        in >> obj.z;
        return in;
    }

    friend ostream &operator<<(ostream &out, const ThreeD &obj)
    {
        out << "X = " << obj.x << endl;
        out << "Y = " << obj.y << endl;
        out << "Z = " << obj.z << endl;
        return out;
    }
};

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ThreeD obj;

    cout << "Enter values for obj: " << endl;
    cin >> obj;

    cout << "obj: " << endl;
    cout << obj;

    return 0;
};
