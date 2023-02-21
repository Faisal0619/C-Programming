#include<iostream>
using namespace std;
struct point
{
	int x,y;
};
int main()
{

point p1,p2,p3;
 cout<<"enter coordinates for p1(x,y):"<<endl;
 cin>>p1.x>>p1.y;
 cout<<"(x1,y1)= "<<"("<<p1.x <<","<<p1.y<<")";
 cout<<endl<<"enter coordinates for p2(x,y):";
 cin>>p2.x>>p2.y;
 cout<<"(x2,y2) = "<<"("<<p2.x<<","<<p2.y<<")"<<endl;
 p3.x = p1.x + p2.x;
 p3.y = p1.y + p2.y;
 cout<<"coordinates of p1 + p2 are : " <<"("<<p3.x<<","<<p3.y<<")";
}
 
