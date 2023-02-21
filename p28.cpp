#include<iostream>
#include<iomanip>
using namespace std;
struct employee
{
	int en;   //employee number
	float ec;   //employee's compensation
	
};
int main()
{
  employee num1,num2 ,num3;
    cout<<"enter employee number and employee compensation"<<endl;
     cin>>num1.en>>num1.ec;
    cin>>num2.en>>num2.ec;
    cin>>num3.en>>num3.ec;
    cout<<setiosflags(ios::left)<<setw(22)<<"employee number"<<"employee compensation"<<endl; 
    cout<<setiosflags(ios::left)<<setw(22)<<num1.en<<num1.ec<<endl;
	cout<<setiosflags(ios::left)<<setw(22)<<num2.en<<num2.ec<<endl;
	cout<<setiosflags(ios::left)<<setw(22)<<num3.en<<num3.ec<<endl; 
}
