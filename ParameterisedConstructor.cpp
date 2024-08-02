#include<iostream>
using namespace std;
#include<conio.h>
class worker{
    public:
    int id;
  
    float salary;
    worker(int i,float s){
        id=i;
        salary=s;
    }
    void display(){
        cout<<"\n ID : "<<id<<endl;


        cout<<"\n Salary : "<<salary<<endl;
    }
};
int main(){
    worker w1=worker(101,500000);
    worker w2=worker(102,600000);
    w1.display();
    w2.display();
    return 0;
}