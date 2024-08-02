
#include<iostream>
using namespace std;
#include<conio.h>
int main(){
    int i,n=2,prime=0;
    cout<<"\n Enter the number : ";
    cin>>i;
    while(n<i){
        if(i%n==0){
            prime++;
        }
        n++;
    }
    if(prime==0){
        cout<<"\n this number is Prime.";
    }else{
        cout<<"\n This number is Composite.";
    }
    return 0;
}