

#include <iostream>
using namespace std;

class Centigrade
{
private:
    float temp;
public:
    toFahrenheit()
    {
    cout<<"Enter the temperature:"<<endl;
    cin>>temp;
    return ((9*temp/5)+32);
    }
};


class Fahrenheit
{
private:
    float temp;
public:
    toCelsius()
    {
    cout<<"Enter the temperature:"<<endl;
    cin>>temp;
    return (5*(temp-32)/9);
    }
};


int main()
{
    Centigrade temp1;
    Fahrenheit temp2;
    int ans;
    cout<<"Conversion:"<<endl<<"1.Fahrenheit to Centigrade \t 2.Centigrade to Fahrenheit"<<endl;
    cin>>ans;
    if (ans==1)
    {
        cout<<"Converted Temperature:"<<temp2.toCelsius()<<" Celsius";
    }
    else
    {
        cout<<"Converted temperature:"<<temp1.toFahrenheit()<<" Fahrenheit";
    }

  return 0;
}
