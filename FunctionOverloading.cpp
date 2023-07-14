#include<conio.h>
#include<iostream>

using namespace std;

int area(int, int);

int area(int);

int main(){
    int r;
    cout<<"Enter radius"<<endl;
    cin>>r;

    float a1 = area(r);

    cout<<"Area of Circle is :"<<a1<<endl;

    int a,b;
    cout<<"Enter Length and Breath"<<endl;
    cin>>a>>b;

    float a2 = area(a,b);
    cout<<"Area of Rect is:"<<a2<<endl;

   return 0;
}

int area(int x, int y)
{
    return x*y;
}

int area(int r)
{
    return 3.14*r*r;
}
