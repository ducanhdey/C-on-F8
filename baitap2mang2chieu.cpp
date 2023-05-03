// Bài 2: Viết chương trình nhập vào số nguyên dương n (0 < n <= 10). Tạo mảng 1 chiều có n phần tử là số nguyên và in ra màn hình phần tử có giá trị lớn nhất.
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
    int MAX = mang2chieu[0][0] ;

for (int i = 0 ; i < n ; i++ ) 
    {
    for (int j = 0 ; j <  m ; j++) 
    {
        if (MAX < mang2chieu[i][j])
            {
                MAX = mang2chieu[i][j];
            }
    }
    }
        cout << endl << "phan tu lon nhat trong mang la : " << MAX ;

    }

