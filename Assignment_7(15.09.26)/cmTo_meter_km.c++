#include<iostream>
using namespace std;
int main(){
    int cm, meter,km;
    cout<<"Enter length in cm:";
    cin>>cm;
    meter = cm / 100;
    km = cm / 100000;
    cout<<"Length in meters: " << meter << endl;
    cout<<"Length in kilometers: " << km << endl;
    return 0;
}