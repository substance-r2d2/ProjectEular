#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
  long long sum = 0;
  string ans = to_string(powl(2, 1000));
  for (int i = 0; i < ans.length(); ++i)
	sum += (long long)(ans.at(i) - '0');
  cout << sum << endl;
  system("pause");
}