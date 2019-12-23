#include <iostream>
using namespace std;

class prime
{
private:
    int num;
public:
checkPrime()
{
  bool isPrime = true;
  cout << "Enter a positive integer: ";
  cin >> num;
  for(int i = 2; i <= num / 2; ++i)
  {
      if(num % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  return isPrime;
}
};



int main()
{
   prime num1;
    if (num1.checkPrime())
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";


    return 0;
}
