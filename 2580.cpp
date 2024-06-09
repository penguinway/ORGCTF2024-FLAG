#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <string>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int N = 150;
map<string , int > mp;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a;
		cin >> a;
		mp[a] = 1;
	}
	cin >> t;
	while (t--)
	{
		string a;
		cin >> a;
		if (mp[a] == 1)
		{
			mp[a] = 2;
			cout << "OK" << endl;
		}
		else if (mp[a] == 2)
			cout << "REPEAT" << endl;
		else
			cout << "WRONG" << endl;
	}
	return 0;
}
