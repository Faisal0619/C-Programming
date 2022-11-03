#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	float angle,s,c,t;
	cout<<"Enter value of an angle"<<endl;
	cin>>angle;
	angle=angle*3.144/180;
	s=sin(angle);
	c=cos(angle);
	t=tan(angle);
	cout<<"sin value of given angle is   "<<s<<endl;
	cout<<"cos value of given angle is   "<<c<<endl;
	cout<<"tan value of given angle is   "<<t<<endl;
}

