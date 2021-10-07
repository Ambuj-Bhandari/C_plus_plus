// Task 2: Palindrome String check
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	string s , v;
	cout<<"Enter a String"<<endl;
	getline(cin,s);
	int a=s.length(); 
	
	v=s;
	reverse(v.begin(),v.end()); 
	if(v==s)
	cout<<"Palindrome String"<<endl;
	else
	cout<<"Not a palindrome String"<<endl;
	return 0;
}
