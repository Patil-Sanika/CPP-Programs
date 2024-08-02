#include<iostream>
using namespace std;
#include<conio.h>

int main(){
    int a=14;
    int*ptr_1;
    ptr_1=&a;

    int**ptr_2;
    ptr_2=&ptr_1;
    cout<<"Address of var[&var]: "<<&a<<endl;
    cout<<"value of var[var]: "<<a<<endl;
    cout<<"\n";
    cout<<"Address of Pointer[pt]: "<<ptr_1<<endl;
    cout<<"Variable value by pointer[*pt]: "<<*ptr_1<<endl;
    cout<<"\n";
    cout<<"Address of Doublepointer[dp]: "<<ptr_2<<endl;
    cout<<"value of DoublePointer[*dp]: "<<*ptr_2<<endl;
    cout<<"Variable value of DoublePointer[**dp]: "<<**ptr_2<<endl;
    cout<<"\n";
    return 0;
}