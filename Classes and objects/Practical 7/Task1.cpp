//Task 1: Check for the current D/M/Y 
#include<bits/stdc++.h>
using namespace std;
#define info "Ambuj Bhandari\nB\n20011932\n"
int main()
{
	
	cout<<info;
	int ch,f;
	
         time_t curr_time;
	curr_time = time(NULL);

	char *tm = ctime(&curr_time);
	cout<<"Enter\n1. To know the current year\n2. To know the current month\n3. To know the current day\n";
	cout<<"Enter your choice: ";	
	cin>>ch;

	switch(ch)
	{
		case 1:  
		         cout<<"The Current year(Manually) is: "<<2021<<endl; 
		         c=ctime(&rawtime);
		         f=c.find_last_of(" ");
		         cout<<"The Current year(Using ctime) Is: "<<c.substr(f+1); 
		         break; 
		case 2:  time_t rawtime;
			time(&rawtime);
		         cout<<"The Current month(Manually) is: "<<"Oct"<<endl; 
		         c=ctime(&rawtime);
		         f=c.find_first_of(" ");
		         cout<<"The Current year(Using ctime) Is: "<<c.substr(f+1," "); 
		         break; 
         }*/
         return 0;
}	
