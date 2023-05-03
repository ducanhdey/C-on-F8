#include <iostream>
using namespace std;
int main () 
{
    // vòng lặp for 
    for(int i = 0 ; i <= 10 ; i++){
        cout << i << endl;

    }
    cout <<"Ket thuc vong lap \n";
    // vòng lặp while
    int a = 0 ;

    while ( a <= 10){
        cout << a << endl;
        a++;
    }
    // vòng lặp do while 
    int b = 0 ;
    do {
        cout << b << endl;
        b++;
    } while (b <= 10 );

    // ví dụ in ra các số lẻ từ 1 đến 9 
    for (int c = 0; c <= 10 ; c++){
        if (c % 2 == 1 ){
            cout <<" "<< c ;

        }
    // cach khac 
    /*
    for(int c = 1 ; c <= 9 ; c += 2){
        cout << c << endl ;
    }
    int c = 1;
    OR :  
    while (i <= 9){
        cout << c << endl;
        c += 2 ;
    }

    */
    }
    
}