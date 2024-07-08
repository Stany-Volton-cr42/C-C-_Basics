#include <iostream>

using namespace std;

int main()
{
    int i = 1,j = 2,k;
      //1 + 2 +  1  +  2   +  3 +  4 = 13 
    k = i + j + i++ + j++ + ++i + ++j;
                //postfix   Prefix
    cout << "Value of i = " << i <<", j = " << j << " and k = " << k;
    return 0;
}