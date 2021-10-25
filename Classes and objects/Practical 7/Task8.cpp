/*Task 8: * * * *
          * * *
          * *
          *      */
#include<iostream>
#define info "Ambuj Bhandari\n20011932\nB\n"
using namespace std ;

int main()
{
    cout<<info;
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for( int i = n; i > 0; i-- ){
        int j ;
        
        for( j = 0; j < i; j++ ){
        
            cout << "* " ;
        }
        for( ; j <= n; j++ ){
            cout << "  " ;
        }
        
        cout << endl ;
    }

    return 0 ;
}
