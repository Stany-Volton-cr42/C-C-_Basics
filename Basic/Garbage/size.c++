// program for showint size of different datatype
#include <iostream>

using namespace std;
//This is like alis that when we use cout we not need to write std::cout like python
int main(){
    int a;
    a = 12;

    cout<<"size of int "<< sizeof(a)<< endl;

    float b;
    cout << "size of float "<< sizeof (b)<< endl;

    char c;
    cout << "size of char "<< sizeof (c) << endl;

    bool d;
    cout << "seze of bool "<< sizeof (d) << endl;

    //  also for short and long intiger datatype
     
    short int si;
    long int li;
    cout<<"size of short int "<< sizeof(si)<< endl;
    cout<<"size of long int "<< sizeof(li)<< endl;

}