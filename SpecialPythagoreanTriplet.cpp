#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map<int, int> possibleAns;

void createMap()
{
  possibleAns.insert(pair<int, int>(-500, 499));
  possibleAns.insert(pair<int, int>(-250, 248));
  possibleAns.insert(pair<int, int>(-125, 121));
  possibleAns.insert(pair<int, int>(-100, 95));
  possibleAns.insert(pair<int, int>(-50, 40));
  possibleAns.insert(pair<int, int>(-25, 5));
  possibleAns.insert(pair<int, int>(-20, -5));
  possibleAns.insert(pair<int, int>(-10, -40));
  possibleAns.insert(pair<int, int>(-5, -95));
  possibleAns.insert(pair<int, int>(-4, -121));
  possibleAns.insert(pair<int, int>(-1, -499));
  possibleAns.insert(pair<int, int>(1, 499));
  possibleAns.insert(pair<int, int>(2, 248));
  possibleAns.insert(pair<int, int>(4, 121));
  possibleAns.insert(pair<int, int>(5, 95));
  possibleAns.insert(pair<int, int>(10, 40));
  possibleAns.insert(pair<int, int>(25, 5));
  possibleAns.insert(pair<int, int>(25, -5));
  possibleAns.insert(pair<int, int>(50, -40));
  possibleAns.insert(pair<int, int>(100, -95));
  possibleAns.insert(pair<int, int>(125, 121));
  possibleAns.insert(pair<int, int>(250, -248));
  possibleAns.insert(pair<int, int>(500, -499));
}

int checkAns(int m, int n)
{
  int x, y, z;
  x = pow(m, 2) - pow(n, 2);
  y = 2 * m*n;
  z = pow(m, 2) - pow(n, 2);
  cout << "m: " << m << "  n: " << n << endl;
  cout << "x: " << x << "  y:" << y << "  z: " << z << endl;
  cout << "sum: " << x + y + z << endl;
  cout << "-----------" << endl;
  return (x + y + z);
}

int main()
{
  createMap();
  string str;
  int m, n;
  int x, y, z;
  auto it = possibleAns.begin();
  while (it != possibleAns.end())
  {
	if (it->first > it->second)
	{
	  m = it->first; 
	  n = it->second;
	}
	else
	{
	  n = it->first; 
	  m = it->second;
	}
	if (checkAns(m,n) == 1000)
	  break;
	++it;
  }
  cout << m << " " << n;
  system("pause");
}