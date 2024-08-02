#include<iostream>
using namespace std;
inline int Max(int x,int y){
    return (x>y)?x:y;
}

int main(){
    cout<<"Max(20,30) : "<<Max(20,30)<<endl;
    cout<<"Max(20,30) : "<<Max(100,5)<<endl;
    cout<<"Max(20,30) : "<<Max(70,10)<<endl;
    return 0;
}