/*An online store wants to create products with ID, name, price. For creating similar product variants, it wants to copy an existing product and just change the price. 

a)Create class Product with both constructors 

b)Display the ID, name and price of the copied object before and after changing the price.*/
#include<iostream>
#include<string>
using namespace std;
class Product{
    private:
int ID;
string name;
float price;
public:
Product(int i, string n,float p){
    ID=i;
    name=n;
    price=p;
}
Product(const Product &p){
     ID=p.ID;
    name=p.name;
    price=p.price;
}
void changePrice(float newPrice){
    price=newPrice;
}
void display(){
cout<<"ID:"<<ID<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Price:"<<price<<endl;
}
};
int main(){
    Product p1(230,"Broti",950);
    //copy the constructor
    Product p2(p1);
    cout<<"\n Copied details:";
    p2.display();
    p2.changePrice(1000);
    cout<<"After changing price"<<endl;
    p2.display();
    return 0;
}
