/*A local construction company frequently deals with rectangular plots and structures of 
varying dimensions. To streamline their planning and estimation processes, the company 
requires a simple system to manage and analyze rectangular shapes efficiently. 
The system must handle multiple rectangles, each with distinct dimensions. For each 
rectangle, the length and width need to be defined and stored securely.*/

#include<iostream>
using namespace std;

class Rectangle {
    float length[10], width[10];
    float perimeter[10], area[10];
    int n;

public:
    Rectangle() {
        cout << "Enter number of rectangles (<10): ";
        cin >> n;

        for(int i = 0; i < n; i++) {
            do {
                cout << "Enter length for rectangle " << i << ": ";
                cin >> length[i];
            } while(length[i] < 0);

            do {
                cout << "Enter width for rectangle " << i << ": ";
                cin >> width[i];
            } while(width[i] < 0);
        }
    }

    void recPerimeter() {
        for(int i = 0; i < n; i++) {
            perimeter[i] = 2 * (length[i] + width[i]);
        }
    }

    void recArea() {
        for(int i = 0; i < n; i++) {
            area[i] = length[i] * width[i];
        }
    }

    void updateRec() {
        char ch;
        cout << "Any update? (Y/N): ";
        cin >> ch;

        if(ch == 'Y') {
            int index;
            cout << "Enter rectangle number: ";
            cin >> index;

            char op;
            cout << "Update Length or Width (L/W): ";
            cin >> op;

            if(op == 'L') {
                cout << "Enter new length: ";
                cin >> length[index];
            }
            else {
                cout << "Enter new width: ";
                cin >> width[index];
            }
        }
    }

    void display() {
        for(int i = 0; i < n; i++) {
            cout << "\nRectangle " << i << endl;
            cout << "Length = " << length[i] << endl;
            cout << "Width = " << width[i] << endl;
            cout << "Area = " << area[i] << endl;
            cout << "Perimeter = " << perimeter[i] << endl;
        }
    }
};

int main() {
    Rectangle r;
    r.recPerimeter();
    r.recArea();
    r.updateRec();
    r.display();
}
