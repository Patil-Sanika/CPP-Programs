//---Average of 5 numbers using control structure---------------*/

#include<iostream>
using namespace std;
#include<conio.h>
int main(){
    int sum, n,i,av;
    cout<<"\n Enter the value of N : ";
    cin>>n;
    sum=0;
    i=1;
    do{
        sum=sum+i;
        i=i+1;
    }
    while(i<=n);
     cout<<"\n sum is : "<<sum;
     av=sum/n;
     cout<<"\n Average is : "<<av;
    return 0;
}