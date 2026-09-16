#include<iostream>
using namespace std;
int main(){
    int angle1, angle2, angle3;
    cout<<"Enter the 1st angle:";
    cin>>angle1;
    cout<<"Enter the 2nd angle:";
    cin>>angle2;
    angle3 = 180 - (angle1 + angle2);
    cout<<"The 3rd angle is: " << angle3;
    return 0;
}