#include<iostream>
using namespace std;
int main()
{
	float d, bp,ff,gd,jy;   // d=dollar ,bp=british pound 1.487$,ff=french franc=0.172$,gd=german deutschmark=0.584$,jy=japanese yen=0.00955$
	cout<<"enter an amount in dollars"<<endl;
	cin>>d;
	bp=d/1.487;
	ff=d/0.172;
	gd=d/0.584;
	jy=d/0.00955;
	cout<<d <<"$ is equal to  "<<bp<<"  of british pounds"<<endl;
	cout<<d <<"$ is equal to  "<<ff<<"  of french franc"<<endl;
	cout<<d <<"$ is equal to  "<<gd<<"  of  german deutschmark"<<endl;
	cout<<d <<"$ is equal to  "<<jy<<"  of japanese yen"<<endl;
}
