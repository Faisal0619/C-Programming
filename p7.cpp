#include<iostream>
using namespace std;
int main()
{   
    int type;
	float c,f;
	cout<<"type 1 to convert Fahrenheit to celsius,"<<endl;
	cout<<"     2 to convert celsius to Fahrenheit": ;
	cin>>type;
	if(type==1)
	{
	cout<<"enter temperature in fahrenheit"<<endl;
	cin>>f;
	c=5/9*(f-32);
	cout<<c<<"in celsius="<<f<<" degree fahrenheit";
   }
   else
   cout<<"enter temperature in Celsius"<<endl;
	cin>>c;
	f=9/5*(c+32);
	cout<<c<<"in celsius="<<f<<" degree fahrenheit";
   }
   
   
