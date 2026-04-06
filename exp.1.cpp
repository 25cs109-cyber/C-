/*A digital payment company wants to develop a simple account management module for its 
users. Each user maintains a digital wallet that allows loading money, transferring money to 
another user, and checking the current wallet balance. 
*/
class Libraryy{

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

void display(Libraryy b[]){

    for(int i=0;i<3;i++)
    {

        total+=b[i].copies;
    }
 }


};
int main()
{

    Libraryy b[3];
    for(int i=0;i<3;i++)
    {

        b[i].addBook();

    }
    Libraryy b1;
    b1.display(b);
}
