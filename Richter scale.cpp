#include<iostream>
using namespace std;
int main()
{
	float n;
	cout<<"enter Richter scale nymber(n):"<<endl;
	cin>>n;
	if(n<5)
	cout<<"LITTLE OR NO DAMAGE";
	else if(n>=5 && n<5.5)
	cout<<"SOME DAMAGE";
	else if(n>=5.5 && n<6.5)
	cout<<"SERIOUS DAMAGE:WALLS MAY CRACK OR FALL";
	else if(n>=6.5 && n<7.5)
	cout<<"DISASTER:HOUSES AND BUILDINGS MAY COLLAPSE";
	else if(n>7.5)
	cout<<"CATASTROPHE:MOST BUILDINGS DESTROYED";
}
