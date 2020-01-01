//program  that passes two temperatures by reference and sets the larger of the two numbers to 100 by using return by reference.
#include<iostream>
using namespace std;

int& tempr(int &,int &);

int main()
{
   int t1,t2;
   cout<<"Enter two values of temperature in Celsius:"<<endl;
   cin>>t1>>t2;
   tempr(t1,t2);

   cout<<"Value of temperatures:"<<t1<<" and "<<t2<<endl;
    return 0;
}

int& tempr(int &t1,int &t2)
{
    if (t1>t2) return t1=100;
    if (t2>=t1) return t2=100;
}
