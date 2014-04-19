#include <iostream>
#include <string>

using namespace std;

bool isprime(long long num)
{
  for (int i = 2; i <= sqrt(num); ++i)
  {
	if (num%i == 0)
	  return true;
  }
  return false;
}

int main()
{
  long long num = 600851475143;
  long long ans = 0;
  for (long long i = sqrt(600851475143); i > 2; --i)
  {
	if (num%i == 0)
	{
	  if (!isprime(i))
	  {
		ans = i;
		break;
	  }
	}
  }
  cout << ans << endl;
  system("pause");
}