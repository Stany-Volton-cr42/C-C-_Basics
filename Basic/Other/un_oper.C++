#include <iostream>

using namespace std;

class Demo
{
private:
    int a ,b;
public:
    Demo(int x, int y){
        a = x;
        b = y;
    }

    void show(){
        cout << "a" << a << "b" <<b << endl;
    }
    void operator -(){
        a = -a;
        b = -b;
    }
};
int main()
{
    Demo ob( -10 ,20);
    ob.show();
    -ob;
    ob.show();
    return 0;
}

