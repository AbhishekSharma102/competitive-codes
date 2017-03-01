#include <bits/stdc++.h>

using namespace std;

int main()
{
	int m, n;
	int a[100][100], b[100][100];
	for(int i = 0; i < 100; i++)
		for(int j = 0; j < 100; j++)
			a[i][j] = 1;
	cin >> m >> n;
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			cin >> b[i][j];
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(b[i][j] == 0)
			{
				for(int x = 0; x < n; x++)
					a[i][x] = 0;
				for(int x = 0; x < m; x++)
					a[x][j] = 0;
			}
		}
	}
	/*for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
				cout << a[i][j] << " ";
			cout << endl;
		}*/
	int flag = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			int res = 0;
			for(int x = 0; x < n; x++)
				res = res | a[i][x];
			for(int x = 0; x < m; x++)
				res = res | a[x][j];
			if(res != b[i][j])
				flag = 1;
		}
		if(flag == 1)
			break;
	}
	if(flag == 1)
		cout << "NO\n";
	else
	{
		cout << "YES\n";
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
				cout << a[i][j] << " ";
			cout << endl;
		}
	}
	return 0;
}
