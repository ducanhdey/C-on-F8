#include <iostream>
using namespace std;
int factor1( int n ) // vong lap
{   if (n == 0) 
    return 1 ;
    int f = 1 ;
    for (int i = 1 ; i <= n;i++ )
    {
        f *= i ;
    }
    return f ;
}
int factor2(int n) // de quy 
{
    if (n == 1 || n == 0)
    return 1 ;
    if ( n  > 1 )
    return n * factor2(n - 1);
}
int main () 
{
    int n ; 
    cout << "Nhap n " ;
    cin >> n ;
    cout << factor1(n) << endl ;
    cout << factor2(n) ;
}
