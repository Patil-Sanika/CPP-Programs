#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int main(){
    int(*funcptr)(int, int);
    funcptr=add;
    int sum=funcptr(25,48);
    cout<<"Value of Sum is : "<<sum<<endl;
    return 0;
}