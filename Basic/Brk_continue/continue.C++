#include <iostream>

using namespace std;

int main()
{   int pocketmoney = 3000;
    for(int date = 1; date<=30; date++){
        if (date%2 == 0)
        {
        // Remember Used for skip any perticular secnerio not or continue when it's true
            continue;
        }
        if (pocketmoney == 0)
        {
        // Break statement is used to termanite the loop
            break;
        }
        
        cout<<"You can go outside "<< date << endl;
        pocketmoney = pocketmoney - 300;
        cout << "Your pocket money is " << pocketmoney << endl;
    }
    return 0;
}