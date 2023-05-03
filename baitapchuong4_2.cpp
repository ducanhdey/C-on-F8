//Bài 2: Viết chương trình nhập vào 1 số nguyên n (2 <= n <= 10). Nhập mảng có n số nguyên và nhập số nguyên k. Hãy kiểm tra xem trong mảng có xuất hiện 2 phần tử có tổng bằng k hay không, nếu có hãy in ra màn hình vị trí của 2 phần tử đó (lấy 2 vị trí đầu tiên tìm được).

#include <iostream>
using namespace std ;
int main () 
{
    int n ;
    cout <<"nhap vao so phan tu cua mang : " ;
    cin >> n ;
    cout << endl;
    int arr[n];
  
        for (int i = 0 ; i < n ; i++)
        {
            cout << "arr[" << i <<"] ";
            cin >> arr[i];
        }
    
        for (int i = 0 ; i < n ; i++)
        {
            cout << arr[i] <<" ";
        }
    int k ;
    cout << endl << "k = ";
    cin >> k ;
    int x = -1 , y = -1 ; // gán bằng -1 để thể hiện x và y chưa thể hiện một index nào vì index >= 0 
    for (int i = 0 ; i < n ; i++)
        {
            for (int j = 0 ; j < n ; j++)
        {
            if (arr[i] + arr[j] == k  && i != j) 
            {
               x = i ;
               y = j ;
               break ;
            }
        }
        if ( x != -1 && y != -1)
        {
            break;
        }
        }
        if (x != -1 && y != -1)
    {
        cout << x <<","<< y ;

    }
    else {
        cout << "khong co" ;
    }
}