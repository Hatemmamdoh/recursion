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
int DigitalRoot (int n)
{
  int r = 0 ;
  if (n/10 == 0)
    return n ;
  r = DigitalRoot (sumofdigit (n)) ;
  return r ;
}
int main()
{
int number ;
cout << "please enter the number :" ;
cin >> number ;
cout << "The Digital Root is: " << DigitalRoot(number) << endl ;

    return 0;
}
