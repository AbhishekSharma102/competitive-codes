#include <bits/stdc++.h>

using namespace std;

int compare(const void *a, const void *b)
{
	return (*(int *)a) - (*(int *)b);
}

int main()
{
	int n, m, x, flag = 0;
	cin >> n >> m;
	int arr[3005];
	for(int i = 0; i < m; i++)
		cin >> arr[i];
	qsort(arr, m, sizeof(int), compare);
	
	if(arr[0] == 1)
		flag = 1;
	else if(arr[m-1] == n)
		flag = 1;
	else
	{
		for(int i = m-1; i > 0; i--)
		{
			arr[i] = arr[i] - arr[i-1];
		}
		/*for(int i = 0; i < m; i++)
			cout << arr[i] << "\t";
		cout << endl;*/
		int counter = 0;
		for(int i = 1; i < m; i++)
		{
			if(arr[i] == 1)
				counter ++;
			else
				counter = 0;
			if(counter >= 2)
			{
				flag = 1;
				break;
			}
		}
	}
	if(flag == 0)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
