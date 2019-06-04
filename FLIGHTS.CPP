#include<iostream.h>
#include<conio.h>
class Flights
{
	private:
			int FlightNumber;
			char Destination[25];
			float Distance;
			float Fuel;
      float calfuel()
      {
       if(Distance<=1000)
       {
		return 500;
       }
       else if(Distance>1000 && Distance<=2000)
       {
	      return 1100;
       }
       else
       {
	return 2200;
       }
      }
    public:
	 void FEEDINFO()
	  {
	   cout<<"Enter Flight number,distination,distance";
	   cin>>FlightNumber>>Destination>>Distance;
	   Fuel=calfuel();
	  }
	 void SHOWINFO()
	  {
	   cout<<"flightnumber\tdestination\tdistance\tfuel"<<endl;
	   cout<<FlightNumber<<"\t\t"<<Destination<<"\t"<<Distance<<"\t\t"<<Fuel;
	  }
};
void main()
{
 clrscr();
 Flights f;
 f.FEEDINFO();
 f.SHOWINFO();
 getch();
}



































