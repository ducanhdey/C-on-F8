#include<iostream>
using namespace std;
int main()

{   
    int n  ;
   cout << "Nhap n : "; cin >> n ;
   int *numbers = new int[n];
   cout << endl << "Nhap mang :" ;
    for (int i = 0;i< n ;i++)
    {
        
        
            cin>> numbers[i] ;

        
    }
    for (int i = n - 1;i> 0;i--)
    {
        for (int j = 0 ;j<i;j++)
        {
            if(numbers[j] > numbers[j + 1])
            {   int tmp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = tmp;
         
            }

        }
    }
    cout << "mang sau khi sap xep" ;
 for (int i = 0;i< n ;i++)
    {
        
        
            cout<< numbers[i]<<" " ;

        
    }
   
   cout << endl;
   system("pause");
   return 0 ;
}