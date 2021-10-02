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
cout<<add(69,22)<<endl;
cout<<add(8.1f,32.2f)<<endl;
}
