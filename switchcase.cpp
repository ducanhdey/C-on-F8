// Nhập vào tháng để biết tháng có bao nhiêu ngày 
#include<iostream>
using namespace std;
int main (){
    int n;
    cout <<"Nhap thang ";
    cin >> n;
    switch(n) {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 :
            cout <<"31 ngay.";
            break;
        case 4 :
        case 6 :
        case 9 :
        case 11 :    
            cout <<"30 ngay";
            break;
        case 2 :
            cout <<"28 hoac 29 ngay neu nam nhuan" ;
    }
}