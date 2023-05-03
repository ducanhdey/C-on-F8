#include <iostream>
using namespace std;
int main () {
    int n , x ;
    int dayso[20] ;
    cout << "nhap vao n : " ;
    cin >> n ;

    cout << endl << "Nhap mang : " ;
    for (int i = 0 ; i < n ; i++) {
        cout <<"" ; cin >> dayso[i];
    } 
    cout << endl << "x = " ;
    cin >> x  ; 
    dayso[n] = x ;
    n++;
    cout << "mang sau khi duoc them : ";
    for (int i = 0 ; i < n ; i++) {
        cout <<" " << dayso[i] ;
    } 
     system("pause");
}  