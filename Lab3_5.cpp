#include <iostream>
using namespace std;

class employee
{
    public:
    int empId,year;
    float oT,bonus;

    setpara()
    {
        cout<<"Enter the year:";
        cin>>year;
        cout<<"Enter your id: ";
        cin>>empId;
        cout<<"Over time done in year: ";
        cin>>oT;
        cout<<"Total Bonus recieved: Rs.";
        cin>>bonus;
    }

    displayReport(int id,int year,float ot,float bonus)
    {
        cout<<"Employee with ID: "<<id<<" has recieved Rs."<<bonus<<"\n and \nhad worked "<<ot<<" hours as a overtime in the year "<<year<<endl;
    }
};


int main()
{
    employee emp[100];
    char ans; int count=0;
    cout<<"..........Setting the Data..........."<<endl;
    do
    {
        emp[count].setpara();
        count+=1;
        cout<<"Want to add records(y/n)?";
        cin>>ans;
    }while (ans=='y');
     cout<<"............Displaying the Reports........."<<endl;
    for(int i=0;i<count;i++)
    {
        emp[i].displayReport(emp[i].empId,emp[i].year,emp[i].oT,emp[i].bonus);
    }
    return 0;
}
