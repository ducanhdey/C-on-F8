//Bài 1: Viết chương trình nhập vào 1 chuỗi gồm các ký tự từ a -> z và có thể chứa khoảng trắng. Hãy loại bỏ các khoảng trắng ở đầu và cuối chuỗi.
#include <iostream>
#include <string>
using namespace std ;
int main ()
{
    //bai1 
    string str1 ;

    cout <<"nhap chuoi : " ;
    getline(cin,str1);
   
    while (str1[0] == ' '){
        str1.erase(0,1);
    }
    while (str1[str1.length() - 1 ] == ' '){
        str1.erase(str1.length() - 1 , 1);
    }
    cout << endl << str1 ;
   
    //bai 2
      string str2 ;

    cout<< endl <<"nhap chuoi : " ;
    getline(cin,str2);
    int i = 0 ;
      while  (i < str2.length())	
{
	if (str2[i]==' ' && str2[i+1]==' ') 
	{
		str2.erase(i,1);
	}
	else
	{
		i++;
	}
}
    cout << endl << str2 ;
    //bai 3 
    string str3 ;

    cout <<"nhap chuoi : " ;
    getline(cin,str3);

    for (int i = 0 ; i < str3.length(); i++)
    {
        if (str3[i] >= 65 && str3[i] <= 90) 
        {
            str3[i] += 32 ;
        }
    }
   
    
    if (str3[0] != ' ' )
    {
        str3[0] -= 32 ;
    }
    for (int i = 0 ; i < str3.length(); i++)
    {
        if (str3[i] ==' ' && str3[i + 1] != ' ')
        {
            str3[i + 1] -= 32 ;
        }
    }
     cout << endl << str3 ;
     // bai 4 
     string str4 ;
     cout << "nhap chuoi 4 ";
     getline(cin, str4) ;
     cout << endl ;
     //xoa bo khoang trnag o dau 
     while (str4[0] == ' ')
     {
        str4.erase(0,1);
     }
     //xoa bo khoang trang o cuoi
     while (str4[str4.length() - 1] == ' ')
     {
        str4.erase(str4.length() - 1 , 1) ;
     }
     // xoa bo khoang trang tua o giua 
     int i = 0 ;
     while  (i < str4.length())	
{
	if (str4[i]==' ' && str4[i+1]==' ') 
	{
		str4.erase(i,1);
	}
	else
	{
		i++;
	}
}
// viet thuong tat ca cac ki tu
    for(int i = 0 ; i < str4.length(); i++)
    {
        if (str4[i] >= 65 && str4[i] <= 90 )
        {
            str4[i] += 32 ;
        }
    }
    // viet hoa chu cai dau 
    if (str4[0] != ' ')
    {
        str4[0] -= 32 ;
    }
    for(int i = 0 ; i < str4.length(); i++)
    {
        if (str4[i] == ' ' && str4[i + 1] != ' ')
        {
            str4[i + 1] -= 32 ;
        }
    }
    cout << endl << str4 ;
}