#include<iostream>
using namespace std;

// Display array
template <class T>
void display(T a[], int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

// Find maximum element
template <class T>
T findMax(T a[], int n)
{
    T max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}

// Reverse array
template <class T>
void reverseArray(T a[], int n)
{
    for(int i=0;i<n/2;i++)
    {
        T temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
}

// Leader elements
template <class T>
void leader(T a[], int n)
{
    cout<<"Leader elements: ";
    
    for(int i=0;i<n;i++)
    {
        bool flag=true;

        for(int j=i+1;j<n;j++)
        {
            if(a[i]<=a[j])
            {
                flag=false;
                break;
            }
        }

        if(flag)
            cout<<a[i]<<" ";
    }

    cout<<endl;
}

int main()
{
    int n=6;

    int a[6];
    cout<<"Enter integer array:\n";
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"Array: ";
    display(a,n);

    cout<<"Maximum element: "<<findMax(a,n)<<endl;

    reverseArray(a,n);

    cout<<"Reversed array: ";
    display(a,n);

    leader(a,n);

    return 0;
}
