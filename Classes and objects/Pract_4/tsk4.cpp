#include<iostream>
using namespace std;
namespace one
{
int add(int a, int b)
{
return (a+b);
}

}
namespace two
{
float add (float a,float b)
{
return (a+b);
}

}
using namespace one;
using namespace two;

int main(void)
{
cout<<add(1,2)<<endl;
cout<<add(6,9.3f);
cout<<add(69,65.2f)<<endl;
}
