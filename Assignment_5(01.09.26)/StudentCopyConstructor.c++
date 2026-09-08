/*An exam department in a college wants to store student data. They want to create student object directly with marks, and also create a duplicate record for backup using copy. 

Create a class Student with roll, name, and marks 

Use parameterized constructor to initialize the data 

Use Copy constructor to clone a student */

#include<iostream>
#include<string>
using namespace std;
class Student{
    int roll;
    string name;
    float marks;
public:
Student(int r, string n, float m){
    roll=r;
    name=n;
    marks=m;
}
Student(const Student &s){
    roll=s.roll;
    name=s.name;
    marks=s.marks;
}
void display(){
    cout<<"Roll no:"<<roll<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Marks:"<<marks<<endl;
}
};
int main(){
    Student s1(23,"Broti",95.6);
    //copy the constructor
    Student s2(s1);
    cout<<"\n Original Details:\n";
    s1.display();
    cout<<"\n Copied details:";
    s2.display();
    return 0;
}