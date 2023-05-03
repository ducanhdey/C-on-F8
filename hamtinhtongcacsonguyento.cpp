/*
Hàm tính tổng các số nguyên tố
Tạo hàm is_prime và total_prime thỏa mãn các yêu cầu sau:

Hàm is_prime nhận vào số nguyên n và kiểm tra xem n có phải số nguyên tố hay không.
Hàm total_prime nhận vào 1 mảng số nguyên, số lượng phần tử của mảng và trả về tổng của các số nguyên tố có trong mảng, nếu không có số nguyên tố nào thì trả về 0
*/
#include <iostream>
using namespace std;

bool is_prime(int n)
{
    // Hãy hoàn thành hàm 
    // theo yêu cầu đề bài nhé
    for (int i = 2 ; i < n ; i++)
    {
        if (n % i == 0)
        {
            return 0 ;
        }
        else 
        {
            return 1 ;
        }
    }
}

int total_prime(int numbers[], int n)
{
    int sum = 0 ;
    
  for (int i = 0 ; i < n ; i++)
  { 
      if(is_prime(numbers[i]))
      {
          sum += numbers[i];
      }
    
  }
  return sum ;
}

int main()
{
    int n;
    int numbers[10];

    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    std::cout << total_prime(numbers, n);

    return 0;
}

