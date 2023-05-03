/*
Bài 4: Nhập vào 1 số nguyên dương n. In ra màn hình các số chia hết cho 5 từ 1 đến n.
*/
#include <iostream>
using namespace std;
int main (){
    int n ;
    cout<<"Nhap vao so n = ";
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        if (i % 5 == 0 ){
            cout << i << endl ;
        }
    }
    return 0;
}