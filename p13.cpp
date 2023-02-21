#include<iostream>
using namespace std;
int main()
{   
    int type;
	float c,f;
	cout<<"type 1 to convert Fahrenheit to celsius,"<<endl;
	cout<<"     2 to convert celsius to Fahrenheit:" ;
	cin>>type;
	if(type==1)
	{
	cout<<"enter temperature in fahrenheit"<<endl;
	cin>>f;
	c=(f-32)/1.8;
	cout<<" in celsius that's  "<<c;
   }
   else
   {
   cout<<"enter temperature in Celsius"<<endl;
	cin>>c;
	f=c*1.8+32;
	cout<<"in fahrenheit that's  "<<f;
   }
   
}
   
