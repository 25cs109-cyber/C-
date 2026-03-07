#include<iostream>
using namespace std;

class retail{

 private:

     int ID[50];
     string name[50];
     int price[50];
     int qty[50];
     int number[50];
     int m,uniqueid,countt;
 public:

     retail(){

        ID[0]=0;
        name[0]="Unknown";
        price[0]=0;
        qty[0]=0;
     }

     retail(int id,string n,int p,int q){

        ID[1]=id;
        name[1]=n;
        price[1]=p;
        qty[1]=q;
     }

     void neww(){

         cout<<"New shipment arrived!"<<endl;
         cout<<"How many items arrived?"<<endl;
         cin>>m;
         for(int i=2;i<m;i++){
         cout<<"Enter unique item ID:"<<endl;
         cin>>ID[i];
         cout<<"Enter Item name:"<<endl;
         cin>>name[i];
         cout<<"Enter price:"<<endl;
         cin>>price[i];
         cout<<"Enter quantity of item:"<<endl;
         cin>>qty[i];
         }
     }
     void sold(){

       cout<<"Enter item's id you want to buy:";
       cin>>uniqueid;
       for(int i=2;i<m;i++){

       if(uniqueid==ID[i]){

           cout<<"Enter number of item want to buy:"<<endl;
           cin>>countt;
           qty[i]=qty[i]-countt;
           cout<<"Stock remain is now :"<<qty[i]<<endl;
       }else{
           cout<<"No such item in stock right now!";
       }

     }}

     void sale(){
         for(int i=2;i<m;i++){
         if(qty[i]>=10){
            cout<<"Sufficient stock present"<<endl;
         }
         else{
            cout<<"Stock requirenement!"<<endl;
         }}}

    void display(){

        for(int i=2;i<m;i++){

        cout<<"Welcome to digital retail store:"<<endl;
        cout<<"Unique id for item is:"<<ID[i]<<endl;
        cout<<"Name of the item is:"<<name[i]<<endl;
        cout<<"Price of the item is:"<<price[i]<<endl;
        cout<<"Quantity present in stock now is:"<<qty[i]<<endl;
        }
    }
};
int main(){
    retail i1;
    retail i2(23,"fiber",40,11);
    i1.neww();
    i1.sold();
    i1.sale();
    i1.display();
}


