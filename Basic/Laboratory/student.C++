#include <iostream>
#include <string>
using namespace std;

class Student {
  private:
    string name;

  public:
    Student() {
      name = "Unknown";
    }

    Student(string n) {
      name = n;
    }

    void printName() {
      cout << "Student name: " << name << endl;
    }
};

int main() {
  Student s1;
  s1.printName();

  Student s2("John");
  s2.printName();

  Student s3("Jane");
  s3.printName();

  return 0;
}