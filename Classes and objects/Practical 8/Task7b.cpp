#include<iostream>
#define info "Ambuj Bhandari\n20011932\nB\n"
using namespace std ;
void swap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
    cout<<"Values after swap: "<<a<<"\t"<<b<<endl;
}

int main()
{
  cout<<info;
  int a=10,b=20;
  cout<<"Values before swap: "<<a<<"\t"<<b<<endl;
  swap(a,b);
  return 0;
}

