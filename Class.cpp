#include<iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
    void setter(int x, int y);
    void display();
    Complex add(Complex c);
    

};

void Complex::setter(int x, int y){
    a = x;
    b = y;

}

void Complex::display(){
    cout<<a<<" "<<b;

}

Complex Complex::add(Complex c){
    Complex temp;
    temp.a = a+c.a;
    temp.b = b+c.b;
    return temp;
}





int main(){

    Complex c1,c2,c3;
    c1.setter(10,15);
    c2.setter(5,10);

    c3 = c1.add(c2);

    c3.display();
   


    return 0;
}