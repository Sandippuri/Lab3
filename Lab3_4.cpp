#include <iostream>
#include<math.h>
using namespace std;

class Rectangle
{
public:
    float l,b;
    perimeter(float l,float b)
    {
        cout<<"l="<<l<<" b="<<b;
        return 2*(l+b);
    }
    area(float l,float b)
    {
        return l*b;
    }


};

class Circle
{
public:
    float radius;
    const float pi=3.14;
    perimeter(float r)
    {return 2*pi*r; }
    area(float r)
    {return pi*r*r;}
};

class Triangle
{
public:
    float s1,s2,s3;
    perimeter(float a,float b,float c)
    {return a+b+c;}
    area(float a,float b,float c)
    {
        float s=(a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));

    }

};


int main()
{
    Rectangle four;
    Circle zero;
    Triangle three;
    cout<<"Properties of Rectangle:"<<endl<<"length and breadth:"<<endl;
    cin>>four.l>>four.b;
    cout<<endl<<"Area:"<<four.area(four.l,four.b)<<endl<<"Perimeter:"<<four.perimeter(four.l,four.b)<<endl;
    cout<<"Properties of Circle:"<<endl<<"Radius:"<<endl;
    cin>>zero.radius;
    cout<<endl<<"Area:"<<zero.area(zero.radius)<<endl<<"Perimeter:"<<zero.perimeter(zero.radius)<<endl;
    cout<<"Properties of Triangle:"<<endl<<"Sides:"<<endl;
    cin>>three.s1>>three.s2>>three.s3;
    cout<<endl<<"Area:"<<three.area(three.s1,three.s2,three.s3)<<endl<<"Perimeter:"<<three.perimeter(three.s1,three.s2,three.s3)<<endl;


    return 0;
}
