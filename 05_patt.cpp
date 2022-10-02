
#include <iostream>
using namespace std;
void pattern(int n)
{
    int k=1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*"
                     << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < n - k; j++)
            {
                cout << "*"
                     << " ";
            }
                    k++;
            cout << endl;
        }
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