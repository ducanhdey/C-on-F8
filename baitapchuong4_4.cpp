//Viết chương trình nhập vào 1 ma trận có n hàng và m cột (0 < n <= 10, 0 < m <= 10). In ra màn hình tổng của các số lẻ xuất hiện trong ma trận.

#include <iostream>
using namespace std ;
int main(){
    int n, m ;
    cout << "n = " ;
     cin >> n ;
    cout << endl << "m = " ;
     cin >> m ;

    // n la so hang m la so cot

    int mang2chieu1[10][10];
// nhap mang
    for (int i = 0 ; i < n ; i++ ) 
    {
        for (int j = 0 ; j <  m ; j++)
        {
            cout << endl << "mang2chieu1[" << i << "]" <<"[" << j <<"] " ;
            cin >> mang2chieu1[i][j];
        }
    }
// xuat mang 
for (int i = 0 ; i < n ; i++ ) 
    {
        for (int j = 0 ; j <  m ; j++)
        {
            cout << mang2chieu1[i][j] << " " ; 
        }
        cout << endl ;
    }
int sum = 0 ;
for (int i = 0 ; i < n ; i++ ) 
    {
        for (int j = 0 ; j <  m ; j++)
        {
           if (mang2chieu1[i][j] % 2 == 1) 
           {
            sum += mang2chieu1[i][j];
           }
        }
        
    }
    cout << endl << "tong cac so le trong mang la : " << sum ;

}
