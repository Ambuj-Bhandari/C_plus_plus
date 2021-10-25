#include<iostream>
#define info "Ambuj Bhandari\n20011932\nB\n"
using namespace std ;
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main()
{ 
  cout<<info;
  int a=10,b=20;
  cout<<"Values before swap: "<<a<<"\t"<<b<<endl;
  swap(a,b);
  cout<<"Values after swap: "<<a<<"\t"<<b;
  return 0;
}

