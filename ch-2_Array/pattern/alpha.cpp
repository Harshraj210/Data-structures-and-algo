#include <iostream>
using namespace std;

void invertedalp(int n)
{
    for (int i = n; i >= 1; i--)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

int main()
{
    invertedalp(8);
    return 0;
}
