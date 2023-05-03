#include <iostream>
#include <cmath>
using namespace std ;
void toh(int n , char nguon , char trunggian , char dich)
{
    if ( n == 1){
    cout << nguon << "-->"<< dich <<endl ;
    }
    else {
    toh(n - 1 , nguon , dich , trunggian); // chuyển n - 1 đĩa từ cột nguồn sang cột trung gian lấy cột đích làm cột trung gian 
    cout << nguon << "-->"<< dich << endl ; ;
    toh(n - 1 , trunggian , nguon , dich ); // chuyển n - 1 đĩa từ cột trung gian sang cột đích lấy cột nguồn làm cột trung gian 
}
}
int main ()
{
    int n ;
    cout <<"nhap vao so dia : " ;
    cin >> n ;
    char a = 'A', b = 'B', c = 'C' ;
    cout << "so buoc giai la " << pow(2 , n) - 1 << " buoc : " << endl ;
    toh(n,a,b,c);
}