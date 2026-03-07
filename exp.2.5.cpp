#include<iostream>
#include<cmath>

using namespace std;

class bank{

 private:
    int ID;
    string name;
    double p;
    int r;
    int t;



 public:
       float EMI;

    bank(){

       ID=0;
       name="Unknown";
       p=0;
       r=0;
       t=0;
    }
    bank(int id,string n,double amt,int rate,int m){
       ID=id;
       name=n;
       p=amt;
       r=rate;
       t=m;
    }
    void emi(){

       cout<<"Value of Loan ID:"<<endl;
       cin>>ID;
       cout<<"Applicant name:"<<endl;
       cin>>name;
       cout<<"Total loan amount:"<<endl;
       cin>>p;
       cout<<"Annual interest rate:"<<endl;
       cin>>r;
       cout<<"Loan tenure(months):"<<endl;
       cin>>t;

       EMI=(p*r*pow((1+r),t))/(pow((1+r),t)-1);
    }
    void display(){
        cout<<"Loan id is:"<<ID<<endl;
        cout<<"Applicant name is:"<<name<<endl;
        cout<<"Total loan amount is:"<<p<<endl;
        cout<<"Annual interest rate is:"<<r<<endl;
        cout<<"Loan tenure is:"<<t<<endl;
        cout<<"Final EMI is:"<<EMI<<endl;
    }

};
int main(){
    bank l1;
    bank l2(23,"yana",20000,3,6);
    l1.emi();
    l1.display();
}
