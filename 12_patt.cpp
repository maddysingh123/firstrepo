
#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0 && j % 2 != 0)
            {
                cout << "0"
                     << " ";
            }
            else if (i % 2 != 0 && j % 2 == 0)
            {
                cout << "0"
                     << " ";
            }
            else
            {
                cout << "1"
                     << " ";
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