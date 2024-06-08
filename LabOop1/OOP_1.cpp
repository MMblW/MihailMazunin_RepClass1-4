#include <iostream>
#include <cmath>
using namespace std;
class example
{
public:
    double a;
    int r;
    void PrintPower(double a, int r, int j)
    {
        cout << a * pow(r, j);
    }
    void DoPower(double first, double second)
    {
        a = first;
        r = second;
        int j;
        cin >> j;
        PrintPower(a, r, j);
    }
};
int main()
{
    example classone;
    classone.DoPower(3, 2);
}