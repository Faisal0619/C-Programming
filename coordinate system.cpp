#include<iostream>
using namespace std;
int main()
{
	float x,y;
	cout<<"enter  x coordinate :"<<endl;
	cin>>x;
	cout<<"enter y coordinate :"<<endl;
	cin>>y;
	if(x>0 && y>0 )
	cout<<"("<<x<<","<<y<<")"<<" is in quadrent I";
	else if(x<0 && y>0 )
	cout<<"("<<x<<","<<y<<")"<<" is in quadrent II";
	else if(x<0 && y<0 )
	cout<<"("<<x<<","<<y<<")"<<" is in quadrent III";
	else if(x>0 && y<0 )
	cout<<"("<<x<<","<<y<<")"<<" is in quadrent IV";
	else if(x==0 && y==0 )
	cout<<"("<<x<<","<<y<<")"<<" is at origin";
	else if(x!=0 && y==0 )
	cout<<"("<<x<<","<<y<<")"<<" lies on x axis";
	else if(x==0 && y!=0 )
	cout<<"("<<x<<","<<y<<")"<<" lies on y axis";
}
