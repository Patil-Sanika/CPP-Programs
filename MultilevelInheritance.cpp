#include<iostream>
using namespace std;
#include<conio.h>
class shape{
    public:
    virtual void displayMsg(){
        cout<<"This is generic shape."<<endl;
    }
};
class rectangle : public shape{
    public:
    void displayMsg(){
        cout<<"This is rectangle."<<endl;
    }
};
class circle : public shape{
    public:
    void displayMsg(){
        cout<<"This is circle."<<endl;
    }

};

int main(){
    shape S;
    rectangle R;
    circle C;
    shape *sPtr;
    sPtr=&S;
    sPtr->displayMsg();
    sPtr=&R;
    sPtr->displayMsg();
    sPtr=&C;
    sPtr->displayMsg();

    return 0;
}