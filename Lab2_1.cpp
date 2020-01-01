//Using structure and function to display the date

#include<iostream>
using namespace std;

struct date{
int year,month,day;
}d;//defining structure

void display(date);//function prototype

int main()
{
    cout<<"Enter the year month and day"<<endl;
    cin>>d.year>>d.month>>d.day;

    display(d);

    return 0;
}
void display(date d)
{
    cout<<"\n Date in formatted output:"<<d.month<<"/"<<d.day<<"/"<<d.year;
}
