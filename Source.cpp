/*#include<iostream>
#include<conio.h>
using namespace std;
struct points
{
int x_co;
int y_cod;
};
int main()
{
	points p1,p2;
cout<<" \n Enter X-Co-Ordinates of The Two Points::: "<<endl;
cin>>p1.x_co>>p2.x_co;
cout<<" \n Enter Y-Co-Ordinates of The Two Points::: "<<endl;
cin>>p1.y_cod>>p2.y_cod;
cout<<" \n New Co-Ordinates Are::: "<<"("<<p1.x_co+p2.x_co<<","<<p1.y_cod+p2.y_cod<<")"<<endl;
getch();
}*/

/*#include <iostream>
#include <conio.h>
using namespace std;
struct time
{ 
	int hours,minutes,seconds;
	long totalsecs;
};
void main(void)
{
	time t1,t2,t3;
char colon;
cout<<" \n Enter Time In Hours, Minutes And Seconds With Colons: ";
cin>>t1.hours>>colon>>t1.minutes>>colon>>t1.seconds;
t1.totalsecs=(t1.hours*3600)+(t1.minutes*60)+t1.seconds;
cout<<" \n Time In Seconds Is: "<<t1.totalsecs;
getch();
}*/


#include <iostream>
#include <conio.h>
using namespace std;
struct time
{ int hours,minutes,seconds;
long totalsecs;
char colon;
};
void main(void)
{
	time t1,t2,t3;
cout<<"\n Enter Time 1 In Hours, Minutes And Seconds With Colons:";
cin>>t1.hours>>t1.colon>>t1.minutes>>t1.colon>>t1.seconds;
t1.totalsecs=(t1.hours*3600)+(t1.minutes*60)+t1.seconds;
cout<<"\n Enter Time 2 In Hours, Minutes And Seconds With Colons:";
cin>>t2.hours>>t2.colon>>t2.minutes>>t2.colon>>t2.seconds;
t2.totalsecs=(t2.hours*3600)+(t2.minutes*60)+t2.seconds;
t3.seconds=t1.totalsecs+t2.totalsecs;
t3.hours=t3.seconds/3600;
t3.seconds=t3.seconds%3600;
t3.minutes=t3.seconds/60;
t3.seconds=t3.seconds%60;
cout<<"\n New Time After Summation Is:"<<t3.hours<<":"<<t3.minutes<<":"<<t3.seconds;
getch();
}

