

#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    { 
        for (int j = 1; j <= n-i; j++)
        {
           cout<<" ";
        }
          for (int j = 1; j <= 2*i-1; j++)
        {
           cout<<"*";
          Unlimi
        }
        cout << endl;
    }
 for (int i = n; i >= 1; i--)
    { 
        for (int j = 1; j <= n-i; j++)
        {
           cout<<" ";
        }
          for (int j = 1; j <= 2*i-1; j++)
        {
           cout<<"*";
          
        }
        cout << endl;
    }
}
int main() {
  // size of cross, use odd number
  int size = 5;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (i==j || i+j==size-1) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}

