#include <iostream>

using namespace std;

int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i%3 == 0)
        {
        // skip the number who is divisible by 3
            continue;
        }
        
        cout << i << "    ";
    }
    return 0;
}