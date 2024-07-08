#include <iostream>
#include <cstring>
using namespace std;

class Publication {
    char title[50];
    float price;
public:
    Publication() {
        strcpy(title, "Unknown");
        price = 0.0;
    }
    Publication(char t[], float p) {
        strcpy(title, t);
        price = p;
    }
    void get_data() {
        cout << "Enter title: ";
        cin.ignore(); // clear input buffer
        cin.getline(title, 50);
        cout << "Enter price: ";
        cin >> price;
    }
    void put_data() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Publication {
    int page_count;
public:
    Book() : Publication() {
        page_count = 0;
    }
    Book(char t[], float p, int pc) : Publication(t, p) {
        page_count = pc;
    }
    void get_data() {
        Publication::get_data();
        cout << "Enter page count: ";
        cin >> page_count;
    }
    void put_data() {
        Publication::put_data();
        cout << "Page count: " << page_count << endl;
    }
};

class Tape : public Publication {
    float playing_time;
public:
    Tape() : Publication() {
        playing_time = 0.0;
    }
    Tape(char t[], float p, float pt) : Publication(t, p) {
        playing_time = pt;
    }
    void get_data() {
        Publication::get_data();
        cout << "Enter playing time (in minutes): ";
        cin >> playing_time;
    }
    void put_data() {
        Publication::put_data();
        cout << "Playing time: " << playing_time << " minutes" << endl;
    }
};

int main() {
    Book b;
    Tape t;
    cout << "Enter details of the book: " << endl;
    b.get_data();
    cout << "Enter details of the tape: " << endl;
    t.get_data();
    cout << "Details of the book: " << endl;
    b.put_data();
    cout << "Details of the tape: " << endl;
    t.put_data();
    return 0;
}
