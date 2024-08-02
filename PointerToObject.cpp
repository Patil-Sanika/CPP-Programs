#include<iostream>
using namespace std;
class student
{
public:
    int empid;
    float salary;
    void getdata(int a,float b)
    {
        empid=a;
        salary=b;
    }
    void disp(){
        cout<<"Emp Id :"<<empid<<endl;
        cout<<"Salary :"<<salary<<endl;
    }
};

int main(){
    student s;
    student *ptrs;
    ptrs=&s;
    ptrs->getdata(10,42000);
    ptrs->disp();
    return 0;
}

