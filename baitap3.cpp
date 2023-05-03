#include<iostream>
using namespace std ;
int gcd(int a, int b)
{
    if(a < 0)
        a = -a ;
    if(b < 0)
        b = -b ;
    if( b == 0 )
        return a ;
    return gcd(b , a % b);
}
int main ()
{
    int a , b ;
    cin  >> a >> b ;
    if(b == 0)
    { cout <<"INVALID";
     return 0 ; }
    
    if(a < 0 && b < 0 || a > 0  && b < 0)
    {
        b = -b;
        a  =-a;
    }
 	
    if(gcd(a,b) == 1)
    {
        cout << a <<" "<<b;
    }
 	
    else 
    {
        cout << a  / gcd(a,b)   <<" "<< b / gcd(a,b);
    }
    
}