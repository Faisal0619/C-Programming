#include<iostream>
using namespace std;
int main(){
  float totalMoney;
int n;
  press:
	cout<<"1.DEPOSIT"<<endl;
	cout<<"2.WITHDRAW"<<endl;
	cout<<"3.CHECK BALANCE"<<endl;
	cout<<"4.QUIT"<<endl;
	cout<<"enter your choice"<<endl;
	cin>>n;
	switch(n)
	{
		case 1:
			int d;
			cout<<"enter the amount you want to deposit"<<endl;
			cin>>d;
			totalMoney=totalMoney+d;
			goto press;
			break;
			case 2:
				int w;
				cout<<"enter the amount you want to withdraw"<<endl;
				cin>>w;
				totalMoney=totalMoney-w;
				goto press;
				break;
				case 3:
				cout<<"Your total balance is "<<totalMoney<<endl;
				goto press;
				break;
				case 4:
					cout<<"closing the program";
					return 0;
					break;
				
						default:
						cout<<"invalid input";
					
	}
}
