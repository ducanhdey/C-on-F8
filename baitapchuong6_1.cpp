//Viết chương trình nhập vào 1 số nguyên dương n. Kiểm tra xem số n có phải là số nguyên tố hay không

#include <iostream>
using namespace std ;

// ham kiem tra so nguyen to 
void is_primme(int n)
{   
    if (n <= 2 )
{
    cout << n << " la so nguyen to.";
    return ;
}
    for(int i = 2 ; i*i <= n ; i++)
    {
        if ( n % i == 0)
        {
            cout << n << " khong phai so nguyen to.";
            return;
        }
        else 
        {
            cout << n << " la so nguyen to.";
            return ;
        }
    }
}
int main ()
{
    int x ;
    cin >> x ;
    is_primme(x);
    return 0 ;
}
