#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i,n,t;
	cout<<"enter the number that you want to generate a table "<<endl;
	cin>>n;
	for(i=1;i<=30;i++)
	{
		t=n*i;
		cout<<t<<setw(5)<<" ";
		if(i%10==0)
		cout<<endl;
	 } 
}
