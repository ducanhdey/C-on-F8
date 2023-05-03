//Bài 3: Viết chương trình nhập nhiệt độ F từ bàn phím rồi tính và hiển thị nhiệt độ đó ở độ C
#include<iostream>
using namespace std;
int main () {
    int degF;
    cout<<"degF = ";
    cin>> degF;
    float degC = (float)((degF - 32) / 1.8);
    cout << "degC = " << degC;
}