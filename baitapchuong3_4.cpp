//Bài 4: Viết chương trình nhập vào một số n từ bàn phím. Hãy kiểm tra xem n có phải số nguyên tố hay không.
#include <iostream>
using namespace std;
int main (){
    int n ;
    cout<<"nhap n = ";
    cin>> n; 
    bool is_nt = true ;
    for(int i = 2 ; i <= n - 1 ;i++){
        if ( n % i == 0){
            is_nt = false ;
            break;
        }
    }
    if (is_nt){
        cout<<"n la so nguyen to ";
    
    }
    else {
        cout<<"n khong la so nguyen to";
    }
}