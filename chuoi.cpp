#include <iostream>
#include <string> 

using namespace std ;
int main () {
    string str = "abcdef" ;
    cout << str <<endl ; 
    // nhap chuoi 
    string str1 ;
    cout << endl << "nhap chuoi : " ;
    getline(cin,str1); 
    cout << endl << str1 ; 
    // cac thao tac voi chuoi 
    string str2 = str.substr (2 , 4 ); // xuat ra man hinh chuoi ki tu tu 2 den 4 treong chuoi str 
    cout << endl << str2 << endl;
    cout << str.find("cd") ;// tim ra vi tri cua ki tu cd trong chuoi str
    str.erase(2, 3); // xoa di 3 ki tu tu vi tri so 2 
    cout << endl << str ; 
    str.replace(3 , 2 , "asfrf"); // thay the 2 ki tu tu vij tri so 3 bang chuoi ki tu asfrf
    cout << endl << str;
    cout << endl << str1.compare(str2); 
    /*
    ket qua tra ve bang :
    0 - hai chuoi bang nhau
    1 - str1 lon hon str2 
    -1 - str1 nho hon str2
    */
   str1.insert(1, "**");
   cout <<endl << str1 << endl;

   cout << str.length(); // dem tong so luong byte cua chuoi 
   cout << endl << str.size() ;// size cung nhu length
} 