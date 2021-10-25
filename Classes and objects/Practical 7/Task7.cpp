/*Task 7:     *
            * *
          * * *
        * * * *    */
#include<iostream>
#define info "Ambuj Bhandari\n20011932\nB\n"
using namespace std ;

int main()
{
    cout<<info;
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for( int i = n-1; i >= 0; i-- ){
        int j ;
        
        for( j = 1; j <= i; j++ ){
        
            cout << "  " ;
        }
        for( ; j <= n; j++ ){
            cout << "* " ;
        }
        
        cout << endl ;
    }

    return 0 ;
}
