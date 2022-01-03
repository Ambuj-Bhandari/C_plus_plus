#include<iostream>
using namespace std;
int main()
{
	try
	{
		throw 'a';
	} 
	catch(int x)
	{
		cout<<"Caught"<<endl;
	} 
	
	return 0;
}
