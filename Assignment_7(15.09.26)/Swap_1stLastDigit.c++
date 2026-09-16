/*Write a c++ program to swap the first and last digits of any number*/
#include<iostream>
using namespace std;
int main(){
    int num, firstDigit, lastDigit, digits=0, tempNum;
    cout<<"Enter a number: ";
    cin>>num;
    tempNum = num;
    lastDigit = num % 10;
    while (tempNum >= 10) {
        tempNum /= 10;
    }
    firstDigit = tempNum;
    cout << "Original number: " << num << endl;
    cout << "Number after swapping first and last digits: " << lastDigit;
    for (int i = 0; i < digits - 2; i++) {
        cout << "0";
    }
    cout << firstDigit << endl;
    return 0;
}