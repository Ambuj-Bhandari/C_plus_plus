/*Task 6:To store: * * *
                    * * *
                      * *
                        *   */
#include <iostream>
#define info "AmbujBhandari\nB\n20011932\n"
using namespace std;

int main()
{
    cout<<info;
    char a[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i<=j)
            a[i][j]='*'; 
            else
            a[i][j]=' ';
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        cout<<a[i][j];
        cout<<endl;
    }

    return 0;
}
