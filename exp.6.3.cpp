#include<iostream>
using namespace std;

class fuel{
          protected:
          string fueltype;
          public:
            void getdatafuel(){
                cout<<"Enter fuel type for car:"<<endl;
                cin>>fueltype;
            }
            void displayfuel(){
                cout<<"Fuel Type is:"<<fueltype<<endl;
            }

};

class brand{
          protected:
          string brandname;
          public:
              void getdatabrand(){
                  cout<<"Enter Brand name of car:"<<endl;
                  cin>>brandname;
              }
              void displaybrand(){
                  cout<<"Brand Name is:"<<brandname<<endl;
              }
};

class car:public fuel,public brand{

          public:
              void getdata(){
                  getdatafuel();
                  getdatabrand();
              }
              void display(){

                  displayfuel();
                  displaybrand();
              }

};
int main(){

    car c;
    c.getdata();
    c.display();
}
