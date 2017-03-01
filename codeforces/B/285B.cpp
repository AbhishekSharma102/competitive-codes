#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, s, t, x;
	cin >> n >> s >> t;
	vector<int> p;
	p.push_back(0);
	for(int i = 0; i<n; i++)
	{
		cin >> x;
		p.push_back(x);
	}
	int flag = 0, curr = s, passes = 0, count = 0;
	if(t == s)
		passes = 1;
	else
	for(int i = 0; i < n; i++)
	{
		if(p[curr] == t)
		{
			passes = 1;
			count += 1;
			break;
		}
		else if(p[curr] == s)
		{
			flag = 1;
			break;
		}
		else
		{
			curr = p[curr];
		}
		count += 1;
	}
	if(flag == 1)
		cout << "-1\n";
	else if(passes == 1)
		cout << count << endl;
	return 0;
}