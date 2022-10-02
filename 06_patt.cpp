
#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            if (i == 1 || i == n)
            {

                cout << "*";
            }
            else if (j == 1 || j == n-1)
            {

                cout << "*";
            }
            else
            {
                cout << " ";
            }
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