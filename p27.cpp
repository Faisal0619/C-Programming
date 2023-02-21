#include<iostream>
using namespace std;
struct Distance
{
	int feet;
	float  inch;
};
 struct volume
 {
 	Distance length, width, height;
 };
 int main()
 {
 	float t,l,w,h;
 	volume room1 ={{13,2.5},{11,5.5},{5,5.2}};
 	l=room1.length.feet+room1.length.inch/12;
 	w=room1.width.feet+room1.width.inch/12;
 	h=room1.height.feet+room1.height.inch/12;
 	t=l*w*h;
 	cout<<t<<" cubic feet";
 }
