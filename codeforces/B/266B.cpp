#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, t;
	char ch[100];
	cin >> n >> t;
	cin >> ch;
	for(int i = 0; i<t; i++)
	{
		for(int j = 0; j<n-1; j++)
		{
			if(ch[j] == 'B' && ch[j+1] == 'G')
			{
				ch[j] = 'G';
				ch[j+1] = 'B';
				j ++;
			}
		}
	}
	cout << ch <<endl;
	return 0;
}