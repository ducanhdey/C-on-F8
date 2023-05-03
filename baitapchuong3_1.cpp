//Bài 1: Viết chương trình giải phương trình bậc nhất một ẩn ax + b = 0, trong đó a và b là các hệ số nhập từ bàn phím.
#include<iostream>
using namespace std;
int main () {
    float a , b;
    cout << "a = " ; cin >> a ;
    cout << "\nb = "; cin >> b ;
    
    
    
    if (a == 0 && b == 0){
         cout <<"Phuong trinh co vo so nghiem";
        
    }
    else if (a == 0 && b != 0){
        cout <<"Phuong trinh vo nghiem";
        
    }
    else if (a != 0 ){
       cout <<"Phuong trinh co nghiem duy nhat x = " << (float)(-b /a);
    }
}