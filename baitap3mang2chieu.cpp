//Bài 3: Viết chương trình nhập vào 2 số nguyên dương n và m (0 < n <= 10, 0 < m <= 10). Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột. In ra màn hình các phần tử lớn nhất của các hàng.
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
            cout << endl << "mang2chieu [" << i << "]" <<"[" << j <<"]" <<" " ;
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
 

for (int i = 0 ; i < n ; i++ ) 
    {
           int MAX = mang2chieu[i][0] ;
    for (int j = 0 ; j <  m ; j++) 
    {
        if (MAX < mang2chieu[i][j])
            {
                MAX = mang2chieu[i][j];
            }
    }
    cout << endl << "phan tu lon nhat trong hang thu " << i + 1  << " cua mang la : " << MAX <<" " ; 
    }
      

    }

