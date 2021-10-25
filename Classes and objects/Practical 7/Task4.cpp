/*Task 4: To reverse the array 
1 2 3      9 8 7
4 5 6  as  6 5 4 
7 8 9      3 2 1*/
#include<bits/stdc++.h>
using namespace std;
#define info "Ambuj Bhandari\nB\n20011932\n"
int main()
{ 
    cout<<info;
    int a[3][3];
    cout<<"Enter the elements\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        cin>>a[i][j];
    } 
    cout<<"The Array :\n";
    for(int i=2;i>=0;i--)
    {
        for(int j=2;j>=0;j--)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
