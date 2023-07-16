#include<iostream>

using namespace std;

class Complex{
    int a,b;

    public:

    void setData(int x, int y){
        a =x;
        b =y;
    }

    void getData(){
        cout<<"A: "<<a<<"  B: "<<b<<endl;
    }

    friend void sum(Complex c);
};

void sum(Complex c){
    cout<<"Sum is: "<<c.a + c.b<<endl;

}


int main(){
    Complex c1,c2,c3;
    c1.setData(2,3);
    c2.setData(1,2);

    sum(c1);


    return 0;
}