#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	float v,t,wcf;
	cout<<"enter the wind velocity(v) and temperature"<<endl ;
	cin>>v>>t;
	wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
	cout<<"wind chill factor"<<wcf;
}
