#include<iostream>
using namespace std;
#include<conio.h>
class complex{
    int x,y;
    public:
    complex(){
        x=25;
        y=67;
    }
    void show(){
        cout<<"The real parameter :"<<x<<endl;
        cout<<"The imaginary parameter :"<<y<<endl;
    }
};
int main(){
    complex a,m;
    a.show();
    m.show();
    return 0;
}