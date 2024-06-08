#include <iostream>
using namespace std;
class salary
{
    string Name;
    double Payment;
    int Bonus;
public:
    salary(string c_Name, double c_Payment, int c_Bonus)
    {
        Name = c_Name;
        Payment = c_Payment;
        Bonus = c_Bonus;
    }
    void Show()
    {
        cout << endl << Name << ' ' << Payment + (Payment * Bonus) / 100;
    }
};
int main()
{
    string m_Name;
    double m_Payment;
    int m_Bonus;
    cin >> m_Name >> m_Payment >> m_Bonus;
    salary example(m_Name, m_Payment, m_Bonus);
    example.Show();
}