#include <iostream>

using namespace std;

bool isprime(long num)
{
  for (long i = 2; i <= sqrt(num); ++i)
  {
	if (num%i == 0)
	  return true;
  }
  return false;
}

int main()
{
  long long sum = 0;
  for (long i = 2; i < 2000000; ++i)
  {
	if (!isprime(i))
	  sum += i;
  }
  cout << sum << endl;
  system("pause");
}