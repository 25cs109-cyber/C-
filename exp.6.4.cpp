#include<iostream>
using namespace std;

class account{

   protected:
    int accnumber;
    double balance;

   public:
    account(int acc,double bal){
          accnumber=acc;
          balance=bal;
    }
    void displayaccount(){
          cout<<"Account Number:"<<accnumber<<endl;
          cout<<"Balance:"<<balance<<endl;
    }
};

class saving:public account{
          double interestrate;

      public:
        saving(int acc,double bal,double rate):account(acc,bal){

            interestrate=rate;
        }
        void displaysaving(){
            cout<<"SAVING ACCOUNT DETAIL:"<<endl;
            displayaccount();
            cout<<"interest rate:"<<interestrate<<endl;

        }
};

class current:public account{

    double overdraftlimit;

public:
    current(int acc,double bal,double limit):account(acc,bal){

        overdraftlimit=limit;
    }
    void displaycurrent(){

        cout<<"CURRENT ACCOUNT DETAIL"<<endl;
        displayaccount();
        cout<<"Overdraft Limit:"<<overdraftlimit<<endl;
    }

};
int main(){

    int acc;
    double bal,rate,limit;

    cout<<"Saving account number:";
    cin>>acc;
    cout<<"Balance:";
    cin>>bal;
    cout<<"Interest rate:";
    cin>>rate;
    saving s(acc,bal,rate);

    cout<<"Enter current account number:";
    cin>>acc;
    cout<<"Enter balance:";
    cin>>bal;
    cout<<"Enter overdraft:";
    cin>>limit;

    current c(acc,bal,limit);
    s.displaysaving();
    cout<<endl;
    c.displaycurrent();

    return 0;
}
