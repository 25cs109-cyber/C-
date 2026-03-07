#include<iostream>
using namespace std;

class Record {
    int rollno;
    string name;
    int m1, m2, m3;
    float average;

public:
    // Parameterized Constructor
    Record(int r, string n, int a, int b, int c) {
        rollno = r;
        name = n;
        m1 = a;
        m2 = b;
        m3 = c;
    }

    // Default Constructor
    Record() {
        rollno = 109;
        name = "Misari";
        m1 = 88;
        m2 = 82;
        m3 = 93;
    }

    void calculateAvg() {
        average = (m1 + m2 + m3) / 3.0;
    }

    void display() {
        cout << "\nStudent Record" << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Average: " << average << endl;
    }
};

int main() {

    Record s1; // Default constructor
    s1.calculateAvg();
    s1.display();

    Record s2(201, "Rahul", 70, 85, 90); // Parameterized constructor
    s2.calculateAvg();
    s2.display();

    return 0;
}
