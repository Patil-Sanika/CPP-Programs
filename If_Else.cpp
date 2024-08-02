//-------Demonstrate odd Or Even Number Using If...Else Control Structure-----------------------------**/

#include<iostream>
using namespace std;
#include<conio.h>
int main(){
    int n;
    cout<<"Enter an inter:";
    cin>>n;
    if(n%2==0)
      cout<<n<<" zis even";
    else
      cout<<n<<" is odd";

      return 0;
}