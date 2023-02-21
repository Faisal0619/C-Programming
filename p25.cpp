#include<iostream>
using namespace std;
 struct phone
 {
 	int ac;
 	int ec;
 	int number;
 	
 };
 int main()
 {
 	phone p1,p2;
 	p1.ac=212;
 	p1.ec=767;
 	p1.number=8900;
 	cout<<"My number is ";
 	cout<<"("<<p1.ac<<") "<<p1.ec<<"-"<<p1.number<<endl;
 	cout<<"enter your area code,exchange and number"<<endl;
 	
 	cin>>p2.ac>>p2.ec>>p2.number;
 	cout<<"Your number is ";
 	cout<<"("<<p2.ac<<") "<<p2.ec<<"-"<<p2.number;
 }
