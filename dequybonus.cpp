#include <iostream>
using namespace std ;
int gcd(int a ,int b) // tim uoc chung lon nhat bang de quy qua giai thuat o-clit 
{
    if (b == 0)
    return a ;
   else
    return gcd( b , a % b);
}
int binpow(int a , int b) // tinhs luy thua a mu b 
{
    if (b == 0)
    return 1 ;
    int x = binpow(a , b / 2);
    if ( b % 2 == 1)
    return a * x * x ;
    else 
    return x * x ;
}
int nCk(int n, int k) // tinh to hop chap k cua n
{
    if (k == n || k == 0)
    return 1 ;
    else 
    return nCk(n - 1 , k) + nCk(n - 1 , k - 1);
}
int count(int a) // dem co bn chu so trong so
{
    if (a < 10)
    return 1 ;
    else 
    return 1 + count(a / 10);
}
int palin(int a[] , int l , int r) // kiem tra mang doi xung voi l la chi so ben trai va r la chi so ben phai 
{
    if ( l >= r)
    return 1 ;
    if (a[l] != a[r])
    return 0 ;
    else 
    return palin(a ,l +1 , r - 1);
}
int main ()
{
    int a , b , c ;

    cin >> a >> b >> c  ;
   
    cout << gcd(a,b)<< endl;
    cout << binpow(a,b) << endl ;
    cout << count(c);
   

}