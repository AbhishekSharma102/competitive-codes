#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	map<string,string> keys;
	cin >> n >> m;
	for(int i = 0; i<m; i++)
	{
		string a, b;
		cin >> a >> b;
		keys.insert(pair<string,string>(a, b));
	}
	vector<string> lecture;
	for(int i = 0; i<n; i++)
	{
		string s;
		cin >> s;
		lecture.push_back(s);
	}
	for(vector<string>::iterator it = lecture.begin(); it!=lecture.end(); it++)
	{
		map<string,string>::iterator sit = keys.find(*it);
		if((sit->first).length() <= (sit->second).length())
			cout << *it << " ";
		else
			cout << sit->second << " ";
	}
	cout << endl;
	return 0;
}
