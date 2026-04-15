#include<iostream>
using namespace std;

class shape{

    private:
    float radius;

    public:
        void setradius(float r){
               radius=r;
        }

        float getradius(){
              return radius;
        }

};
class circle:public shape{

    public:
        float area(){
             float r=getradius();
             return r*r*3.14;

        }
};
int main(){

       int n;
       cout<<"Enter number of circle:"<<endl;
       cin>>n;

       circle c[100];

       for(int i=0;i<n;i++){

                 float r;
                 cout<<"Enter the radius for circle"<<i+1<<":"<<endl;
                 cin>>r;
                 c[i].setradius(r);
       }
       for(int i=0;i<n;i++){

                cout<<"Area of the circle"<<i+1<<"is:"<<c[i].area()<<endl;

       }

}
