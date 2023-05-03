#include <iostream>
using namespace std;
int main (){
    // nhap 1 so nguyen duong tinh tong s = 1 + 2 + 3 + ... + n
    int a ;
    cout << "Nhap vao so n = " ;
    cin >> a ;
    int S = 0;
    for(int i = 1 ; i <= a ; i++){
        S += i ;
    }
    cout <<"S = "<< S;
    return 0;
}