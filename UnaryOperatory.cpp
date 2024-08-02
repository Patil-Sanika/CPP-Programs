#include<iostream>
using namespace std;
#include<conio.h>
class A{
    private:
    int x,y;
    public:
    A(){
    }
    void setdata(int a, int b){
        x=a;
        y=b;
    }
    void operator++(){
        x=++x;
        y=y+2;
    }
    void operator--(){
        x=--x;
        y=y-2;
    }
    void print(){
        cout<<x<<"\t"<<y<<endl;
    }
};

int main(){
    A op;
    op.setdata(20,25);
    ++op;
    cout<<"Incremented Number are : "<<endl;
    op.print();
    --op;
    cout<<"decremented Number are : "<<endl;
    op.print();
    return 0;
}