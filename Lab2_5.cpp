//Use inline function to display the net payment to the employee by the company.
#include<iostream>
using namespace std;

inline void display(float a)
{
   cout<<"The net payment to the employee by the company:"<<a;
}

int main()
{
    float salary;
    cout<<"Enter your salary::"<<endl;
    cin>>salary;

    float net_payment=salary-0.1*salary;//income tax is 10%
    display(net_payment);

    return 0;
}
