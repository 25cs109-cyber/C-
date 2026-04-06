#include<iostream>
using namespace std;

class dynamicarray{
    private:
    int *arr;
    int s;//s for size
    int capacity=0;

    public:

    dynamicarray(){

        s=0;
        capacity=1;
        arr=new int[capacity];
    }
    void resizelimit(){

          if(s==capacity){
                if(capacity==0){
                        capacity=1;}else{

            capacity=capacity*2;}
            int *newarr=new int[capacity];//new stake of capacity double

            for(int i=0;i<s;i++){//move that previous data into newarr
                newarr[i]=arr[i];
            }
            delete[] arr;//delete old memory
            arr=newarr;//recognize as arr which was previous
            }
          }

    void insertarr(int val){

        if(s==capacity){
            resizelimit();
        }
        arr[s]=val;
        s++;
    }
    void display(){
        for(int i=0;i<s;i++){
            cout<<" "<<arr[i]<<endl;
        }
    }
    ~dynamicarray(){

        delete[] arr;

    }
};
int main(){

         dynamicarray arr;
         arr.insertarr(10);
         arr.insertarr(20);
         arr.insertarr(30);
         arr.insertarr(50);
         arr.display();

}

