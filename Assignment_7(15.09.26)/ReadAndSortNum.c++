#include<iostream>
using namespace std;

int main() {
    int a[7],temp;
    cout<<"Enter  7 numbers: ";
    for(int i=0;i<7;i++)
        cin>>a[i];
    // Sorting the array
    for(int i=0;i<7-1;i++) {
        for(int j=0;j<7-1-i;j++) {
            if(a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Sorted numbers are: ";
    for(int i=0;i<7;i++)
       cout<<a[i]<<" ";
    return 0;}