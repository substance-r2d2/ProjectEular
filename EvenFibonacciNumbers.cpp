#include <iostream>
#include <string>

using namespace std;


int main()
{
  unsigned long sum = 0;
  unsigned long num1= 1;
  unsigned long num2 = 2;
  unsigned long temp = 0;
  while (num2 < 4000000) 
  {
	temp = num2;
	num2 = num1 + num2;
	num1 = temp;
	if (num1 % 2 == 0)
	  sum += num1;
  }
  cout << sum  << endl;
  system("pause");
}