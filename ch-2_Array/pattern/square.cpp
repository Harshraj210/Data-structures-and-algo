#include <iostream>
using namespace std;
// void printsquare(int n)
// {

//   int i, j;
//   for (int i = 1; i <= 5; i++)
//   {
//     for (int j = 0; j <= 5; j++)
//     {
//       cout << "* " << endl;
//     }
//   }
// }
int main()
{
  int n = 1;
    for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= n; j++)
      {
        cout << "* ";
    }
    cout<<endl;
  }
  return 0;
}