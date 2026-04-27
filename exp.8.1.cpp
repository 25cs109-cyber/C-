//Exception Handling for Division with Direct User Input

#include<iostream>
using namespace std;

int main(){

        float a,b;

        try{
        cout<<"Enter value of a:"<<endl;  /*alter:cin.exceptions(ios::failbit/ios::badbit)
                                           so that no need to wrtie if condition everytime after cin...
                                          in catch=catch(io_base::failure &e)*/
        if(cin.fail()){
        cin>>a;

                throw "Invalid input for first number";
            }
        cout<<"Enter value of b:"<<endl;
        cin>>b;
        if(cin.fail()){

                throw "Invalid input for first number";
            }
        if(b==0){

                throw "Cannot divide by Zero";
        }

        cout<<"result:"<<a/b<<endl;

        }

        catch(const char* msg){

            cout<<"Error:"<<msg<<endl;
        }

        return 0;

}
