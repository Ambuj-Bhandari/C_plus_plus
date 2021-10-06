// Task 2: Palindrome String check
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
int c=0;
string s; 
cout<<"Enter a String"<<endl;
getline(cin,s);
int a=s.length();

for(int i=0;i<a/2;i++)
{
  if(s[i]==s[a-i-1])
  c++;
}
if(c==a/2)
cout<<"Palindrome String"<<endl;
else
cout<<"Not a palindrome String"<<endl;
return 0;
}
