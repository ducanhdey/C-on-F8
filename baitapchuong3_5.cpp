//Bài 5: Viết chương trình nhập vào một số nguyên dương n từ bàn phím. Tính tổng các chữ số tạo nên số đó.
#include<iostream>
using namespace std;
int main () {
    int n;
    cout <<"n =  ";
    cin >> n ;
    int sum = 0;
    while (n > 0 ) {
        sum = sum + (n % 10);
        n = n / 10 ;
    }
    cout << "ket qua la : " << sum ;
}