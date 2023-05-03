#include <iostream>
using namespace std;
int main () {
    int n , x , y;
    int dayso[20] ;
    cout << "nhap vao n : " ;
    cin >> n ;

    cout << endl << "Nhap mang : " ;
    for (int i = 0 ; i < n ; i++) {
        cout <<"" ; cin >> dayso[i];
    } 
    cout << endl << "x = " ;
    cin >> x  ;
     cout << endl << "y = " ;
    cin >> y  ;
    // vòng lặp bên dưới dùng để dịch mỗi phần tử bên phải x sang phải 1 đơn vị 
    for (int i = n ; i >= x ; i--){
        dayso[i] = dayso[i - 1] ;
    } 
    dayso[x] = y ; // gán giá trị của phần tử tại vị trí x bẳng y 
    n++ ; // khi thêm y vào mảng phải tăng giá trị của n nên vì tăng lên 1 phần tử
    cout << endl << "Mang sau khi them la : " ;

    for(int i = 0 ; i < n ; i++){
        cout <<" " << dayso[i] ;
    }

}