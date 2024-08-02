#include<iostream>
using namespace std;
#include<conio.h>
int main(){
    int a=33;
    int *ptr;
    
    ptr=&a;

    cout<<"Value of variable(a)= "<<a<<endl;
    cout<<"Address of variable(&a)= "<<&a<<endl;
    cout<<endl;
    cout<<"Value of Pointer variable(*ptr)= "<<*ptr<<endl;
    cout<<"Address of ptr= "<<ptr<<endl;
    return 0;
}