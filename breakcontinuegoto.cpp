#include <iostream>
using namespace std;
int main (){
    int n = 1;
    while (n <= 10)
   {
    cout << n << endl;
    if (n == 5 ){
        break;
    }
    n++;
   }
       int i = 1;
    while (i <= 10)
   {
    
    if (i == 5 ){
        i++;
        continue;
    }
    cout << i << endl;
    i++;
   }
   
   for (int a = 1; a <= 10 ; a++){
    if (a == 5){
        continue;
    }
    cout << a << endl;
   }
   int c ;
  
   
   try_again:
   cout <<"c = ";
   cin >> c;

   if (c <= 0 || c % 2 == 0){
    goto try_again;
   }
   cout << "gia tri cua c :  "<< c;

}