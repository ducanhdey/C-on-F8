/*
 Bài 2: Nhập 1 số nguyên dương n. 
 In ra màn hình giá trị của S = 1^2 + 2^2 + 3^2 + ... + n^2.
*/
#include <iostream>
using namespace std;
int main (){
    int n ;
    cout<<"Nhap vao so n = ";
    cin >> n;
    int S = 0;
    int i = 1;
    while (i <= n ){
        S += (i * i); 
        i++;
    }
    cout<<"S = " << S ;
    return 0;
}