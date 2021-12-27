#include <iostream>

using namespace std;

struct my
{
   int x;
   int y;
   int z;
};

class myclass
{
    public:
        int a;
        int b;
        int c; 
        myclass()
        {
            a=10;
            b=20;
            c=30;
        }
};

int main() 
{ 
    struct my st;
    st.x=1;
    st.y=2;
    st.z=3;
    myclass s;
    int total1=st.x+st.y+st.z;
    int total2=s.a+s.b+s.c;
    cout<<total1<<" "<<total2<<endl;
    return 0;
}
