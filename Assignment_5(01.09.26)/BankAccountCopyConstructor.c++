/*A bank wants to create a new account with initial balance. When a joint account is needed, it should copy details from existing account. 

a)Use parameterized constructor to initialize the account holder name and balance amount 

b)Implement copy constructor for joint account holder 

c)Implement a “deposit()” function to change the copied object*/
#include<iostream>
#include<string>
using namespace std;
class Account{
    private:
    string acc_name;
    float balance;
    public:
    Account(string name,float amount ){
acc_name=name;
balance=amount;
    }
Account(const Account &a){
acc_name=a.acc_name;
balance=a.balance;
}
void deposite(float amount){
    balance+=amount;
}
void display(){
    cout<<"Account holder:"<<acc_name<<endl;
    cout<<"Balance:"<<balance<<endl;

}

};
int main(){
    Account a1("Broti" ,5000);
    cout<<"Original Account "<<endl;
    a1.display();
    Account a2(a1);
    a2.deposite(70000);
    cout<<"Copied Account"<<endl;
    a2.display();
    return 0;
}
