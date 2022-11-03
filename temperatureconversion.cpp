#include<iostream>
using namespace std;
int main()
{
	float f,C;
	cout<<"please enter temperature of any city(farenhiet)"<<endl;
	cin>>f;
	//formula to convert tempt into centigrade
	C=(f-32)*5/9;
	cout<<"the temperature (°C) is "<<C;
	return 0;
}
