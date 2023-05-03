#include<iostream>
using namespace std ;
int main(){
    /*
    toán tử 3 ngôi :
    <dieukien> ? <gia tri 1> : <gia tri 2>
    neu dieukien đúng thì in ra giá trị 1 và ngược lại
    */
   // bài toán nhập vào 2 số nguyên in ra số nhỏ hơn dùng toán tử 3 ngôi
   int a,b;
   cout << "Gia tri cua a la "; cin >> a ;
   cout << "Gia tri cua b la "; cin >> b;
   int y ;
    y = ((a - b) > 0) ? b : a ;
    cout << y ;
    /* cũng có thể viết như sau :
    int y = ((a - b) > 0) ? b : a ;
    cout << y ;
    */
    /*
    other solution :
    int ketqua = a < b ? a : b ;
    cout << ketqua ;

    */
    
    return 0;
   

}