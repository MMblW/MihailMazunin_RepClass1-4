#include <iostream>
using namespace std;
class Pair
{
    int first;
    double second;
public:
    Pair(int a, double b)
    {
        first = a;
        second = b;
    }
    Pair()
    {
        int a;
        double b;
        cin >> a >> b;
        first = a;
        second = b;
    }
    ~Pair()
    {
        // No dynamic
    }
    void Show()
    {
        cout << endl << first << " : " << second;
    }
    void Set(int a, double b)
    {
        first = a;
        second = b;
    }
    void operator - (Pair a)
    {
        first -= a.first;
        second -= a.second;
    }
    void operator + (int a)
    {
        first += a;
    }
    void operator + (double a)
    {
        second += a;
    }
    void operator = (Pair a)
    {
        first = a.first;
        second = a.second;
    }
    void operator >> (Pair a)
    {
        first = a.first;
        second = a.second;
    }
    void operator << (Pair a)
    {
        cout << endl << first << " : " << second;
    }
};
int main()
{
    Pair example(2, 3.5);
    example.Show();

    example.Set(3, 3.6);
    example.Show();

    Pair example2(1, 1.7);
    example = example2;
    example.Show();

    example2.Set(5, 3.1);
    example >> example2;
    example.Show();

    example.Set(4, 9.2);
    example << example;

    example.Set(7, 3.2);
    example - example2;
    example.Show();

    example + 1;
    example.Show();

    example + 2.1;
    example.Show();
}