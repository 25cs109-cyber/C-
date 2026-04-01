#include<iostream>
using namespace std;

class bankaccount{

    private:
    long int accountnumber;
    string name;
    long int balance;
    static int totalaccount;

    public:

    bankaccount(){ //constructor
            
            accountnumber=13;
            name="ABC";
            balance=3811;
            
    }

    //prameterized constructor
    bankaccount(int accno,string n,long int bal){
            accountnumber=accno;
            name=n;
            balance=bal;
            totalaccount++;
    }

    void transfer(bankaccount &receiver){

           int amount;
           cout<<"Enter amount want to transfer:";
           cin>>amount;
           if(amount>balance){
            cout<<"No tranfer possible !,as no sufficient amount";
            return ;
           }
           balance=balance-amount;
           receiver.balance = receiver.balance + amount; 
   }

    void display(){
        
        cout<<"===Digital account system==="<<endl;
         cout<<"Name:"<<name<<endl;
         cout<<"Account number:"<<accountnumber<<endl;
         cout<<"your current balance:"<<balance<<endl;
         cout<<"Total accounts:"<<totalaccount<<endl;

    }

    static int gettotalaccount(){
           
        return totalaccount;
    }

};
int bankaccount::totalaccount = 0; 


int main(){
 
    bankaccount c1;
    bankaccount c2(13,"Meera",3200);
    c1.transfer(c2);
    c1.display();
    c2.display();

}