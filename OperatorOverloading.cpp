#include<iostream>

using namespace std;


class Complex
{
    private:
    int a,b;

    public:

    void setData(int x, int y){
        a =x;
        b =y;

    }

    void showData(){
        cout<<"A = "<<a<<"  B = "<<b<<endl;
    }

    Complex operator +(Complex c){
        Complex temp;
        temp.a = a + c.a; // a is caller object data and c.a is data of object passed as argument 
        temp.b = b + c.b;
        return temp;
    }
    

    Complex operator -(){
        Complex temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }

    Complex operator ++(){
        Complex temp;
        temp.a = a+1;
        temp.b = b+1;
        return temp;
    }

};


int main(){
    Complex c1,c2,c3,c4,c5;

    c1.setData(6,3);
    c2.setData(3,4);
    c4 = c1 +c2;
    c3 = -c1;
    c5 = ++c1;

    c5.showData();
    return 0;
}

