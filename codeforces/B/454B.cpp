#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, count = 0;
	cin >> n;
	deque<int> a;
	int x;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		a.push_back(x);
	}
	
	int flag = 0, sorted = 1;
	for(deque<int>::iterator it = a.begin() +1; it != a.end(); it++)
	{
		if(*(it-1) > *(it))
			sorted = 0;
	}
	//for(deque<int>::iterator it = a.begin(); it != a.end(); it++)
	//	cout << *it << "\t";
	if(sorted == 0)
	{
	for(int i = 0; i<n; i++)
	{
		if(a.front() >= a.back())
		{
			count ++;
			int temp = a.back();
			a.push_front(temp);
			a.pop_back();
		}
		else
			break;
	}
	}
	for(deque<int>::iterator it = a.begin() +1; it != a.end(); it++)
	{
		if(*(it-1) > *(it))
			flag = 1;
	}
	if(flag)
		cout <<"-1\n";
	else
		cout << count << endl;
	return 0;	
}