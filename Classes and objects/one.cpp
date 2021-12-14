#include<bits/stdc++.h>
using namespace std;
class company
{
	int rev;
	string name;
	public: 
		void get(int a,string s)
		{
			rev=a;
			name=s;
		} 
		friend string operator >=(company &c1,company &c2)
		{
			if(c1.rev>=c2.rev)
			return (c1.name);
			else
			return (c2.name);
		} 
};
int main()
{
	company A,B;
	A.get(100,"ABC");
	B.get(2000,"XYZ"); 
	cout<<(A>=B)<<endl;
	return 0;
}
