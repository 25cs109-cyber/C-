#include <iostream>
using namespace std;

class Library{


private:
    int bookID;
    string title, author;
    int copies;
    int total=0;

public:
    void addBook() {

        cout << "Enter Book ID: ";
        cin >> bookID;
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Author: ";
        cin >> author;
        cout << "copies: ";
        cin >> copies;

    }

  void issuebook(){
        if(copies>0)
        {

            cout<<"Book issued successfully";
            copies--;
            cout<<"now available copies:"<<copies;
        }

        else{
            cout<<"No copies available..check out for other books";
        }
  }
void returnbook()
{


        cout<<"book returned successfully";
        copies++;
}

void display(Library b[]){

    for(int i=0;i<3;i++)
    {

        total+=b[i].copies;
    }
 }


};
int main()
{

    Library b[3];
    for(int i=0;i<3;i++)
    {

        b[i].addBook();

    }
    Library b1;
    b1.display(b);
}
