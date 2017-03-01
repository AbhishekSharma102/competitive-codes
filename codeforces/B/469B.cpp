#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int p, q, l, r, x, y, count = 0, set1 = 0, set2 = 0, flag = 0;
	cin >> p >> q >> l >> r;
	int arr[1005];
	int arr2[1005];
	for(int i = 0; i < 1005; i++)
	{
		arr[i] = 0;
		arr2[i] = 0;
	}
	for(int i = 0; i < p; i++)
	{
		cin >> x >> y;
		arr[x] += 1;
		//arr[y] += 1;
		arr[y+1] -= 1;
	}
	for(int i = 0; i < q; i++)
	{
		cin >> x >> y;
		arr2[x] += 1;
		//arr2[y] += 1;
		arr2[y+1] -= 1;
	}
	for(int i = l; i <= r; i++)
	{
		flag = 0;
		set1 = 0;
		set2 = 0;
		for(int j = 0; j < i; j++)
		{
			if(arr[j] != 0)
				set1 += arr[j];
		}
		for(int j = 0; j < 1001-i; j++)
		{
			if(arr2[j] != 0)
			{
				set2 += arr2[j];
			}
			if(arr[j+i] != 0)
			{
				/*if(arr[j+i] == -1 && set1 == 0 && set2 == 1)
				{
					count ++;
					break;
				}*/
				set1 += arr[j+i];
			}
			if(set1 == set2 && set1 == 1)
			{
				count ++;
				break;
			}
		}
	}
	cout << count << "\n";
	return 0;
}