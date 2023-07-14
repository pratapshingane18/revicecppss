#include<iostream>

using namespace std;

struct book
{
    int bookid;
    char desc[30];
    int price;

};

book input(){
    book b;
    cout<<"Enter Book Details"<<endl;
    cin>>b.bookid>>b.desc>>b.price;
    return (b);
    
}

void display(book b){
    cout<<b.bookid<<" "<<b.desc<<" "<<b.price<<endl;

}

int main(){
    book b1;
    b1 = input();
    display(b1);
    return 0;
}

