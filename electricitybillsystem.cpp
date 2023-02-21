#include<iostream>
using namespace std;
int main()
{
	float units,billamount;
	double cno,pmr,cmr,type;
	char cname[20];
	cout<<"enter consumer number:"<<endl;
	cin>>cno;
	cout<<"enter consumer name:"<<endl;
	cin>>cname;
	cout<<"enter pervious month reading:"<<endl;
	cin>>pmr;
	cout<<"enter current month reading:"<<endl;
	cin>>cmr;
	units=cmr-pmr;
	cout<<"units consumed = "<<units<<endl;
	cout<<"enter type of EB connection(for DOMESTIC enter 1 and for  COMMERCIAL enter 2):"<<endl;
	cin>>type;
	if(type==1)
	{
		if(units<=100)
		{
			billamount=100*1;
		}
		else if(units>101 && units<=200)
		billamount=100*1+(units-100)*2.50;
		else if(units>201 && units <=500)
		billamount=100*1+100*2.50+(units-200)*4;
		else (units>500);
       billamount=100*1+100*2.50+300*4+(units-500)*6;
      cout<<"you have to paid Rs ="<<billamount<<endl;
    }
    if(type==2)
	{
		if(units<=100)
		{
			billamount=100*2;
		}
		else if(units>101 && units<=200)
		billamount=100*2+(units-100)*4.50;
		else if(units>201 && units <=500)
		billamount=100*2+100*4.50+(units-200)*6;
		else (units>500);
       billamount=100*2+100*4.50+300*6+(units-500)*7;
      cout<<"you have to paid Rs ="<<billamount<<endl;
    }
	
}
