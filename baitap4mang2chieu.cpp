//Bài 4: Viết chương trình nhập vào 2 số nguyên dương n và m (2 <= n <= 10, 2 <= m <= 10). Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột. Tính tổng các giá trị biên của mảng vừa tạo.
#include <iostream>
using namespace std ;
int main(){
    int n, m ;
    cout << "n = " ;
     cin >> n ;
    cout << endl << "m = " ;
     cin >> m ;

    // n la so hang m la so cot

    int mang2chieu[n][m];
// nhap mang
    for (int i = 0 ; i < n ; i++ ) 
    {
        for (int j = 0 ; j <  m ; j++)
        {
            cout << endl << "mang2chieu [" << i << "]" <<"[" << j <<"]" ;
            cin >> mang2chieu[i][j];
        }
    }
// xuat mang 
for (int i = 0 ; i < n ; i++ ) 
    {
        for (int j = 0 ; j <  m ; j++)
        {
            cout << mang2chieu[i][j] << " " ; 
        }
        cout << endl ;
    }
int sum2 = 0 ;
for (int i = 0 ; i < n ; i++ ) 
    {
        for (int j = 0 ; j <  m ; j++)
        {
            sum2 = sum2 + mang2chieu[i][j];
        }
       
    }
int sum1 = 0 ;
for (int i = 1 ; i < n -1 ; i++){
    for (int j = 1 ; j < m - 1 ; j++){
        sum1 = sum1 + mang2chieu[i][j];
    }
}
    cout << endl << "tong cac phan bien tu trong mang la : " << sum2 - sum1 ;
/* cach khac 
int sum = 0 ;
for (int i = 0 ; i < n ; i++ ) 
    {
        for (int j = 0 ; j <  m ; j++)
        {
            if ( i == 0 || j == 0 || i == n - 1 || j == m - 1){
                sum = sum + mang2chieu[i][j];
            }
        }
    }
*/
}