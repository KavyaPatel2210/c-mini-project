#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
struct carDetails
{
    string modelName,fuelType,transmission,airBags;
    float carPrice,carMileage;
    int seating,tank_capacity;
}c[7]={{"TIAGO","Petrol","Manual","Yes",8.2,19,5,20},{"PUNCH","Diesel","AMT","Yes",10.5,20,5,37},{"ALTROZ","CNG","AMT","Yes",10,20,5,37},{"TIGOR","Diesel","Manual","No",13,20,4,40},{"NEXON,","Electric","Manual","Yes",15.5,23,5,44},{"HARRIER","Diesel","AMT","Yes",26.4,14.6,5,50},{"SAFARI","Petrol","AMT","Yes",20,23,5,50}};

class car_d
{
    public:
    int priceRange;
    void modelName()
    {
        cout<<endl;
        cout<<"LIST OF TATA CARS"<<endl;
        cout<<"(1)TIAGO"<<endl<<"(2)PUNCH"<<endl<<"(3)ALTROZ"<<endl<<"(4)TIGOR"<<endl<<"(5)NEXON"<<endl<<"(6)HARRIER"<<endl<<"(7)SAFARI";
    }
    void fuelType()
    {
        cout<<endl;
        cout<<"TATA CARS ARE AVAILABEL WITH FUEL OPTIONS"<<endl;
        cout<<"(1)Petrol (2)Diesel (3)CNG (4)Electric"<<endl;
    }

};
int main()
{

    class car_d a;
    int option,carNumber,fuelpref;

    cout<<"WELCOME TO TATA MOTORS"<<endl;
    cout<<"GET THE CAR DETALIS AS PER YOUR PREFRENCE"<<endl;
    point:
    cout<<"(1)Model Name  (2)Fuel Type  (3)Price Range (4)Exit"<<endl;
    cout<<"ENTER YOUR OPTION:";
    cin>>option;
    cout<<endl;

    cout<<"----------------------";
    switch(option)
    {
    case 1:
     {
        a.modelName();
        break;
     }
    case 2:
     {
        a.fuelType();
        break;
     }
    case 3:
     {
        cout<<endl;
        cout<<"ENTER YOUR MAXIMUM AFFORDABEL RANGE IN LAKHS:";
        cin>>a.priceRange;
        break;
     }
    case 4:
        {
            return 0;
        }
    default:
     {
        cout<<"NOT VALID OPTION"<<endl;
        break;
     }
    }
    //for model details
   if(option==1)
   {
    cout<<endl;
    cout<<"CHOOSE YOUR CAR TO GET DETALIS:";
    cin>>carNumber;
    cout<<endl;
    cout<<"Model"<<setw(15)<<"Fuel"<<setw(15)<<"Price(Lakhs)"<<setw(15)<<"Mileage(km/L)"<<setw(15)<<"Transmission"<<setw(15)<<"Tank Capacity"<<setw(20)<<"SeatingCapacity"<<setw(15)<<"Airbags"<<endl;

    for(int i=0;i<7;i++)
    {
    if(carNumber==i+1)
    {
    cout<<c[i].modelName<<setw(15)<<c[i].fuelType<<setw(15)<<c[i].carPrice<<setw(15)<<c[i].carMileage<<setw(15)<<c[i].transmission<<setw(15)<<c[i].tank_capacity<<setw(20)<<c[i].seating<<setw(15)<<c[i].airBags<<endl;
    }
    }

   }
   //for fueltype
    else if(option==2)
    {
        cout<<endl;
        cout<<"ENTER YOUR FUEL PREFERENCE:";
        cin>>fuelpref;
        cout<<endl;
        cout<<"Model"<<setw(15)<<"Fuel"<<setw(15)<<"Price(Lakhs)"<<setw(15)<<"Mileage(km/L)"<<setw(15)<<"Transmission"<<setw(15)<<"Tank Capacity"<<setw(20)<<"SeatingCapacity"<<setw(15)<<"Airbags"<<endl;
        if(fuelpref==1)
        {
            for(int i=0;i<7;i++)
            {
                if(c[i].fuelType=="Petrol")
                {
                         cout<<c[i].modelName<<setw(15)<<c[i].fuelType<<setw(15)<<c[i].carPrice<<setw(15)<<c[i].carMileage<<setw(15)<<c[i].transmission<<setw(15)<<c[i].tank_capacity<<setw(20)<<c[i].seating<<setw(15)<<c[i].airBags<<endl;

                }

            }
        }
        else if(fuelpref==2)
        {
            for(int i=0;i<7;i++)
            {
                if(c[i].fuelType=="Diesel")
                {
                         cout<<c[i].modelName<<setw(15)<<c[i].fuelType<<setw(15)<<c[i].carPrice<<setw(15)<<c[i].carMileage<<setw(15)<<c[i].transmission<<setw(15)<<c[i].tank_capacity<<setw(20)<<c[i].seating<<setw(15)<<c[i].airBags<<endl;

                }

            }
        }
        else if(fuelpref==3)
        {
            for(int i=0;i<7;i++)
            {
                if(c[i].fuelType=="CNG")
                {
                         cout<<c[i].modelName<<setw(15)<<c[i].fuelType<<setw(15)<<c[i].carPrice<<setw(15)<<c[i].carMileage<<setw(15)<<c[i].transmission<<setw(15)<<c[i].tank_capacity<<setw(20)<<c[i].seating<<setw(15)<<c[i].airBags<<endl;
                }

            }
        }
        else if(fuelpref==4)
        {
            for(int i=0;i<7;i++)
            {
                if(c[i].fuelType=="Electric")
                {
                         cout<<c[i].modelName<<setw(15)<<c[i].fuelType<<setw(15)<<c[i].carPrice<<setw(15)<<c[i].carMileage<<setw(15)<<c[i].transmission<<setw(15)<<c[i].tank_capacity<<setw(20)<<c[i].seating<<setw(15)<<c[i].airBags<<endl;
                }

            }
        }

    }
    else if(option==3){
        cout<<"Model"<<setw(15)<<"Fuel"<<setw(15)<<"Price(Lakhs)"<<setw(15)<<"Mileage(km/L)"<<setw(15)<<"Transmission"<<setw(15)<<"Tank Capacity"<<setw(20)<<"SeatingCapacity"<<setw(15)<<"Airbags"<<endl;
        for(int i=0;i<7;i++)
        {
            if(c[i].carPrice<=a.priceRange)
            {
                 cout<<c[i].modelName<<setw(15)<<c[i].fuelType<<setw(15)<<c[i].carPrice<<setw(15)<<c[i].carMileage<<setw(15)<<c[i].transmission<<setw(15)<<c[i].tank_capacity<<setw(20)<<c[i].seating<<setw(15)<<c[i].airBags<<endl;
            }
        }
    }
    goto point;
}

