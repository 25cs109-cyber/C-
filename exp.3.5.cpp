//super digit...(only one digit)
#include<iostream>
using namespace std;

class superdigit{
    
    
    private:
    long int number,newnumber,sum=0,k;

    public:
    long long digitsum(){
     cout<<"Enter number:";
     cin>>number;

    cout<<"Value of k:";
    cin>>k;

    
        while(number>0){

        sum=sum+number%10;
        number=number/10;
        }
        sum=sum*k;

        newnumber=sum;
        sum=0;
        while(newnumber>=10){
            while(newnumber>0){
                sum=sum+newnumber%10;
                newnumber=newnumber/10;
            }
        }
        cout<<"final superdigit is:"<<sum;
    
       return sum;
    }
    
};
int main(){

int  a;
    superdigit n1;
    a=n1.digitsum();
    cout<< "Sum is:"<<a;
}
