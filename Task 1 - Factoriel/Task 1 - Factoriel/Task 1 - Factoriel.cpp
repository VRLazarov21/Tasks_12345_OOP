#include <iostream>
using namespace std;

class Fact
{
private:
    int number;

public:
    Fact(int newNum)
    {
        number = newNum;
    }
    int getFact()
    {
        int factoriel = 1;
        for (int i = number; i > 0; i--)
        {
            factoriel *= number;
        }
        return factoriel;
    }
};
int main() 
{
    int number;
    cin >> number;
    Fact factoriel(number);
    cout << factoriel.getFact();
}