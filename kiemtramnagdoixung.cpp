 #include <iostream>
using namespace std ;
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
 int n  ;
 cin >> n ;
 int a[n] ;
for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
 
 
 
 if(palin(a, 0 ,n - 1))
    cout << "Yes\n";
    else cout << "No\n";
}