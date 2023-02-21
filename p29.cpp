#include<iostream>
using namespace std;
struct date
{
	int day,month,year;
};
int main()
{
 date d1;
 char dummychar;
 cout<<"enter date (DD/MM/YY): "<<endl;
 cin>>d1.day>>d1.month>>d1.year;
 cout<<"The Date is "<<d1.day<<"/"<<d1.month<<"/"<<d1.year;	
}
