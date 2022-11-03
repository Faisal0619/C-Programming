#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	float x,y,r,theta;
	cout<<"Enter the cartesian co-ordinates(x,y):"<<endl;
	cin>>x>>y;
	//formula to convert cartesian co_ordinates into polar co-odinates(r,theta)
	r=sqrt(x*x+y*y);
	theta=atan(y/x);
	theta=theta*180/3.14;
	cout<<"polar co-ordinates are "<<endl;
	cout<<"r="<<r<<endl;
	cout<<"theta="<<theta;
	
}
