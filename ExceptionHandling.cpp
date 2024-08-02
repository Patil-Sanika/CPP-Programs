#include<iostream>
using namespace std;
#include<conio.h>

int main(){
    int a,b;
    cout<<"Enter the value of a & b : "<<endl;
    cin>>a>>b;
    try{
        if(b!=0){
            cout<<"Result(a/b):"<<a/b<<endl;
        }
        else
        throw(b);
    }
    catch(int b){
        cout<<"Exception caughter : b="<<0<<"\n";
    }
    cout<<"END"<<"\n";
    return 0;
}