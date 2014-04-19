#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isPalindrome(long x)
{
  string str = to_string(x);
  string rstr = string(str.rbegin(), str.rend());
  if (str == rstr)
	return true;
  return false;
}

int main()
{
  vector<long> ans;
  for (int i = 999; i >= 100; --i)
  {
	for (int j = 999; j >= 100; --j)
	{
	  if (isPalindrome(i*j))
		ans.push_back(i*j);
	}
  }
  sort(ans.rbegin(), ans.rend());
  cout << ans[0];
  system("pause");
}