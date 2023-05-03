/*
Bài 3: Nhập 1 số nguyên dương n.
 In ra màn hình giai thừa n!.
*/
#include <iostream>
using namespace std;
int main (){
    int n ;
    cout<<"Nhap vao so n = ";
    cin >> n;
    int i = 1;
    int S = 1;
    do {
        S *= i;
        i++;
    } while (i <= n);
    cout <<"n! = "<< S ;
    return 0;
}