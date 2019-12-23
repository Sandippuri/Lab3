#include<iostream>
using namespace std;
class carpark
{
public:
    int carId,cph;
    float time;
    setData()
    {
        cout<<"Car Id: ";
        cin>>carId;
        cout<<"Car is parked for(hr):";
        cin>>time;
        cout<<"Charge per hour: Rs.";
        cin>>cph;

    }

    displayData(float carid,float cph,float time)
    {
        float tCharge=cph*time;
        cout<<"Total parking charge for your car "<<carid<<": Rs."<<tCharge;
    }
};


int main()
{
    carpark redcar;
    redcar.setData();
    redcar.displayData(redcar.carId,redcar.cph,redcar.time);
    return 0;
}
