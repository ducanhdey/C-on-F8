#include <iostream>
using namespace std ;
int main(){
    int n, m ;
    cout << "n = " ;
     cin >> n ;
    cout << endl << "m = " ;
     cin >> m ;

    // n la so hang m la so cot

    int mang2chieu[n][m];
// nhap mang
    for (int i = 0 ; i < n ; i++ ) 
    {
        for (int j = 0 ; j <  m ; j++)
        {
            cout << endl << "mang2chieu [" << i << "]" <<"[" << j <<"]" ;
            cin >> mang2chieu[i][j];
        }
    }
// xuat mang 
for (int i = 0 ; i < n ; i++ ) 
    {
        for (int j = 0 ; j <  m ; j++)
        {
            cout << mang2chieu[i][j] << " " ; 
        }
        cout << endl ;
    }
}