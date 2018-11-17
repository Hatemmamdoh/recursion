#include <iostream>

using namespace std;

int sumofdigit (int n)
{
  int sum = 0 ;
  if (n == 0)
    return 0 ;
  sum = (n % 10 + sumofdigit(n / 10)) ;
  return sum ;
}

int main()
{

int number ;
cout << "please enter the number :" ;
cin >> number ;
cout << "The sum is: " << sumofdigit (number) << endl;
return 0;
}
