#include<iostream>
using namespace std ;
int main ()
{   
    int n , x;
    cin >> n ;
    int *a = new int[n];
    cout <<"Nhap mang" << endl ;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int *new_array = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        new_array[i] = a[i] ;
    }
    cin >> x ;
    new_array[n] = x ; 
    delete[] a;
    a = new_array ;
    cout <<"Mang sau khi them la" << endl;
    for (int i = 0; i < n + 1; i++)
    {
        cout << a[i] <<" ";
    }
    cout << endl;
    system("pause");
}