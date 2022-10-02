
#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    { int k=i;
        for (int j = 1; j <= n-i; j++)
        {
           cout<<" ";
        }
          for (int j = 1; j <= i; j++)
        {
           cout<<k;
           k--;
        }
         k++;
           for (int j = 1; j < i; j++)
        {
           k++;
           cout<<k;
        }
        cout << endl;
    }
}
int main()
{
    int size;
    cout << "enter the size" << endl;
    cin >> size;
    pattern(size);
    return 0;
}