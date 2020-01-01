//Convert feet into inches using function overloading
#include<iostream>
using namespace std;

    float funct();//entering the data
    float funct(float,float);//converter
    void funct(float &x);//displaying the data

float funct()
{
    float feet;
    cout<<"Enter the feet:"<<endl;
    cin>>feet;
    return feet;
}
float funct(float feet,float m)
{
    float inch;
    inch=feet*m;
    return inch;
}
void funct(float &inch)
{
    cout<<"Equivalent inches:"<<inch<<"inches"<<endl;
}

int main()
{
    float m=12.0;
    cout<<"Function overloading"<<endl;
    float feet=funct();
    float inch=funct(feet,m);
    funct(inch);

    return 0;
}
