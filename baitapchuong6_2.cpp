#include<iostream>
#include<math.h>
using namespace std;
bool is_prime(int n)  //hàm kiểm tra sô nguyên tố
{   
    if (n < 2 )
{ return false ;}
    for (int i = 2 ; i <=  sqrt(n) ; i++)
    {
        if (n % i == 0)
        {
            return false ;
        }
        
    } return true ;
}
int sumprime(int n ) // dùng đệ quy 
{   
    if(n < 2 ) return 0 ;
    if(n == 2 ) return 2 ;
    if(is_prime(n))
    {
        return n + sumprime(n - 1);
    }
    return sumprime(n - 1);
}
// tính tổng các số nguyên tố thuộc đoạn từ 2 đến n 
int main ()
{
    int n, sum = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            sum += i;
        }
    }
    cout << "Tong cac so nguyen to tu 2 den " << n << " la: " << sum << endl;
    
    cout << "Tong cac so nguyen to tu 2 den " << n << " la: " << sumprime(n)  ;
}
