#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,numerator,denominator;                              //a/b+c/d=(a*d + c*b)/(b*d)
char dummychar;
cout<<"enter first fraction"<<endl;
cin>>a>>dummychar>>b;
cout<<"enter second fraction"<<endl;
cin>>c>>dummychar>>d;
   numerator=a*d + c*b;
   denominator=b*d;
	cout<<"sum is ="<<numerator<< "/"<<denominator;
}
