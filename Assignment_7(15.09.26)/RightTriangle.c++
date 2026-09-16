/*Write a c++program to check whether a given length of three sides forms a right triangle*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three sides";
    cin>>a>>b>>c;
    if(a*a + b*b ==c*c|| a*a +c*c==b*b||b*b + c*c==a*a)
    cout<<"Right Triangle";
    else
    cout<<"Not form right triangle";
}