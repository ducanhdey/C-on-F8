//Bài 2: Viết chương trình nhập vào số nguyên dương n (n <= 100). Tính và hiển thị tổng các số tự nhiên lẻ từ 1 đến n.
#include <iostream>
using namespace std;
int main (){
    int n ;
    cout<<"Nhap vao so n = ";
    cin >> n;
    int S = 0;
    for(int i = 1 ; i <= n; i++){
        if (i % 2 == 1){
            S += i;
        }
    }
    cout <<"tong cac so le tu 1 den n la : "<< S;
}