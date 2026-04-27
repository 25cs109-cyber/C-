#include<iostream>
#include<math.h>
using namespace std;

int main(){

          float a;

          try{
          cout<<"Enter value of a:"<<endl;
          cin>>a;
          if(cin.fail()){

            throw "Invalid input for a";

          }
          if(a<0){

            throw "No negative number acceptable";
          }

          cout<<"Result:"<<sqrt(a)<<endl;

          }
          catch(const char* msg){

                 cout<<"Error:"<<msg;

          }

           return 0;
}
