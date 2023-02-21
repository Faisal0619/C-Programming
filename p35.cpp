#include<iostream>
using namespace std;
struct time 
{
	int hrs,mints,secs;
};
int main()
{
	time t1 ,totalsecs;
	cout<<"enter time (HH/MM/SS):"<<endl;
	cin>>t1.hrs>>t1.mints>>t1.secs;
	cout<<"The Time is "<<t1.hrs<<":"<<t1.mints<<":"<<t1.secs<<endl;
	totalsecs.secs=t1.hrs*3600 + t1.mints*60 + t1.secs;
	cout<<"Total number of seconds represented by this time value is "<<totalsecs.secs<<endl;
/*	t1.hrs=totalsecs.secs-t1.mints*60-t1.secs ;
	t1.hrs=t1.hrs/3600;
    t1.mints=totalsecs.secs-t1.hrs*3600-t1.secs;
    t1.mints=t1.mints/60;*/
	    cout<<"The Time is "<<t1.hrs<<":"<<t1.mints<<":"<<t1.secs<<endl;
	
}
