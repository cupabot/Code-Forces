#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int t, n, *a;
	vector<string> res;
	cin >> t;
	for (register int i = 0; i < t; i++)
	{
		cin >> n;
		a = new int[n];
		for (register int j = 0; j < n; j++)
		{
			cin >> a[j];
			if (a[j] % 2 == 0)
				res.push_back("1" + to_string(j));
		}
	}
	return 0;
}