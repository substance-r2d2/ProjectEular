#include <iostream>
#include <string>

using namespace std;

bool isprime(int num)
{
  for (int i = 2; i <= sqrt(num); ++i)
  {
	if (num%i == 0)
	{
	  return true;
	}
  }
  return false;
}

int main()
{
  int primeCount = 1;
  int num = 2;
  do
  {
	++num;
	if (!isprime(num))
	{
	  ++primeCount;
	}
  } while (primeCount < 10001);
  cout << num << endl;
  system("pause");
}