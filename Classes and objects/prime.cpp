#include<iostream> 
#include<math.h>
using namespace std;
void isprime(int n)
{
int c=0;
for(int i=2;i<=sqrt(n);i++)
{
if(n%i==0)
c++;
}
if(c==0)
cout<<"Prime"<<endl;
else
cout<<"Not Prime"<<endl;
}
int main()
{
int n;
cout<<"Enter a number"<<endl;
cin>>n;
isprime(n);
return 0;
}
