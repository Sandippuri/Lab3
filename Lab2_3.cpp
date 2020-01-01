//defining namespace
#include<iostream>
using namespace std;

namespace square
{
   int num;
   int fun(int a)
   {
     return a*a;
   }
}
namespace cube
{
   int num;
   int fun(int b)
   {
     return b*b*b;
   }
}

int main()
{
    int a=square::num=3;
    int b=cube::num=4;
    cout<<"the square of the integer variable num of the cube namespace:"<<square::fun(b)<<endl;
    cout<<"the cube of the integer variable num of the Square namespace:"<<cube::fun(a)<<endl;
    return 0;
}
