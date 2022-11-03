#include<iostream>
using namespace std;
int main()
{
    float wt_lb,ht_in,BMI;
	cout<<"enter weight in pounds and height in inches"<<endl;
	cin>>wt_lb>>ht_in;
	BMI=703*wt_lb/(ht_in*ht_in);
	cout<<BMI<<endl;
	if(BMI<18.5)
	{
		cout<<"underweight";
	}
	 else if(BMI>=18.5 && BMI<24.9)
	{
		cout<<"Normal";
	}
	 else if(BMI>=25 && BMI<29.9)
	{
		cout<<"Overweight";
	}
	 else if(BMI>=30)
	{
		cout<<"Obese";
	}
}
