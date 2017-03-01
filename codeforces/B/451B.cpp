#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, a[100005], flag = 0, startpos, endpos, set = 1;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n-1; i++)
	{
		if(a[i] > a[i+1] && flag == 0)
		{
			flag += 1;
			startpos = i;
		}
		else if(a[i] < a[i+1] && flag == 1)
		{
			flag += 1;
			endpos = i;
		}
		else if(a[i] > a[i+1] && flag >= 2)
		{
			set = 0;
		}
	}
	if(flag == 2 && endpos + 1 < n && a[startpos] > a[endpos + 1])
	{
		set = 0;
	}
	else if(flag == 2 && startpos > 0 && a[startpos-1] > a[endpos])
		set = 0;
	else if(flag == 1 && startpos > 0 && a[startpos - 1] > a[n-1])
		set = 0;
	if(set == 0)
		cout << "no" << endl;
	else if(set == 1 && flag == 1)
		cout << "yes" << endl << startpos + 1 << " " << n << endl;
	else if(set == 1 && flag == 2)
		cout << "yes" << endl << startpos + 1 << " " << endpos + 1 << endl;
	else if(set == 1 && flag == 0)
		cout << "yes\n1 1\n";
	return 0;
}
