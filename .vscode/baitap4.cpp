#include<iostream>
using namespace std;
int main () {
    int a , b;
    cout << "a = " ; cin >> a ;
    cout << "\nb = "; cin >> b ;
    cout << "\nso be hon la " << (a + b - abs (a - b) ) / 2 ;

}