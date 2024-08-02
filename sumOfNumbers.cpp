//------Sum of Integers till the Nth using Control Structure.-----------------------------------------*/

#include<iostream>
using namespace std;
#include<conio.h>
int main(){
    cout<<"Hello";
    int n, i, sum=0;
    cout<<"\n Enter a number : ";
    cin>>n;
    for(i=1;i<=n;i++)
        
        sum=sum+i;
        cout<<sum;
    return 0;
}