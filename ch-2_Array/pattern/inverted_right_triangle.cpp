#include <iostream>
using namespace std;

void invertedtri(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    invertedtri(8);
    return 0;
}
