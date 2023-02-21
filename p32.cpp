#include<iostream>
using namespace std;
struct fraction
{
	int numerator,denominator;
};
int main()
{
	fraction f1,f2,sum,n,d;
	char dummychar;
	cout<<"enter first fraction : "<<endl;
	cin>>f1.numerator>>dummychar>>f1.denominator;
	cout<<f1.numerator<<"/"<<f1.denominator<<endl;
	cout<<"enter second fraction : "<<endl;
	cin>>f2.numerator>>dummychar>>f2.denominator;
	cout<<f2.numerator<<"/"<<f2.denominator<<endl;
  n.numerator=f1.numerator * f2.denominator +  f1.denominator * f2.numerator;
  d.denominator=f1.denominator*f2.denominator;
	cout<<"sum is "<<n.numerator<<"/"<<d.denominator;
}
