#include<iostream>
using namespace std;

class accSystem{

       private:
        string name;
        int ID;
        double balance;

       public:

        accSystem(){

                name="Unknown";
                ID=0;
                balance=0.0;

        }
        public:
        accSystem(string n,int id,double bal)
        {
            name=n;
            ID=id;
            balance=bal;
        }

        

        void deposite(){

                     double amount;
                    cout<<"Enter amount want to deposite:"<<endl;
                    cin>>amount;
                    balance+=amount;
        }
        void withdraw(){
                    double amount;
                    cout<<"Enter amount want to withdraw:"<<endl;
                    cin>>amount;
                    if(amount>balance){

                        cout<<"Not sufficient balance..!No withdrawl possible";
                    }
                    else if(amount<0){

                        cout<<"Enter valid amount!!";
                    }
                    else{

                        balance-=amount;
                    }
        }
        void display(){

                cout<<"Account summary:"<<endl;
                cout<<"Customer name:"<<name<<endl;
                cout<<"Customer ID:"<<ID<<endl;
                cout<<"Current balance:"<<balance<<endl;
        }
};

int main(){

      accSystem *c=new accSystem[3];
      string name;
      int ID;
      double balance;
      for(int i=0;i<3;i++){

        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter ID:";
        cin>>ID;
        cout<<"Enter balance:";
        cin>>balance;

        c[i]=accSystem(name,ID,balance);

      }

      accSystem c1;

      accSystem c2("Misari",109,7000);
      c2.deposite();
      c2.withdraw();
      c2.display();

}
