#include<iostream>
using namespace std;
int main()
{
	float enter, tpurchase,trsdiscount,disctdtotal,salestex,total;
	cout<<"enter total purchase"<<endl;
	cin>>tpurchase;
	cout<<"if you are teacher enter 1"<<endl;
	cin>>enter;
	if(1)
	{
		total=tpurchase-(0.12*tpurchase);
		total=total+(0.05*total);
		cout<<"you have to pay   "<<total;
		
	}
	else(0);
	{
		total=tpurchase+(tpurchase*0.05);
		cout<<"you have to pay   "<<total;
	}
}
