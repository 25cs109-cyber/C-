#include<iostream>
using namespace std;

class person{
protected:

    string name;
    int age;
public:
    void adddata(){
          cout<<"Enter name:"<<endl;
          cin>>name;
          cout<<"Enter age:"<<endl;
          cin>>age;
    }
    void display(){
          cout<<"Name :"<<name<<endl;
          cout<<"Age:"<<age<<endl;
    }
};

class employee:public person{
          protected:
          int employeeid;

          public:
          void getemployee(){
              adddata();
              cout<<"Enter employee ID:"<<endl;
              cin>>employeeid;
          }
          void showemployee(){

              display();
              cout<<"Employee ID is:"<<employeeid<<endl;
          }
};
class manager:public employee{
          protected:
          long int salary;
          string department;

          public:
          void getmanager(){
              getemployee();
              cout<<"Enter salary:"<<endl;
              cin>>salary;
          }
          void showmanager(){
              showemployee();
              cout<<"Salary is:"<<salary<<endl;
          }
};

int main(){

    manager m;
    m.getmanager();
    m.showmanager();
}
