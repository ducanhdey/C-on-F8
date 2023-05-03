//Bài 1: Viết chương trình nhập vào 1 số nguyên n (2 <= n <= 10). Nhập mảng có n số nguyên. Hãy sắp xếp lại mảng đó theo thứ tự giảm dần và in ra màn hình.
#include <iostream>
using namespace std ;
int main () {
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
    
     for (int i = n - 1 ; i > 0 ; i--)
    {
        for (int j = 0 ; j < i  ; j++)
        {
            if ( arr[j] > arr[j + 1])
            {
                int tmp = arr[j] ;
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp ;
            }
        }
    }
    cout << endl << "mang sau khi sap xep bang thuat toan bubble sort la : ";
     for (int i = 0 ; i < n ; i++)
        {
            cout << arr[i] <<" ";
        }
}