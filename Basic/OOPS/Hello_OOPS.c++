#include <iostream>
// Concept of incapsulation 
using namespace std;

class student{
    string name;
    int age;

    public:
    int getage(){
        return this ->age;
    }
};
int main()
{
    cout << "all is well";
    return 0;
}