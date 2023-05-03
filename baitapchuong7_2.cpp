#include<iostream>
using namespace std;
int main()

{
    int n , x ;
   cout << "Nhap n : "; cin >> n ;
   int *a = new int[n];
   cout << endl << "Nhap mang :" ;
   for (int i = 0; i < n; i++)
   {
    /* code */
    cin >> a[i];
   }
   cout << endl <<"x = " ; cin >> x ;
   int *b = new int[n - 1];
   for (int j = 0; j < x; j++)
   {
    /* code */
    b[j] = a[j];
   }
   for(int i = x ; i < n - 1;i++)
   {
    b[i] = a[i + 1];
   }   
   delete[] a ;
   a = b ;
   cout << endl << "Mang sau khi xoa :";
   for (int  i = 0; i < n - 1; i++)
   {
    /* code */
    cout << a[i] <<" ";
   }
   cout << endl;
   system("pause");
   return 0 ;
}