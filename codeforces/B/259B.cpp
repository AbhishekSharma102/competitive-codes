#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x[3][3];
	long long int a = 0;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
		{
			int k;
			cin >> k;
			x[i][j] = k;
			a += k;
		}
	/*int sums[6];
	sums[0] = x[0][1] + x[0][2];
	sums[1] = x[1][0] + x[1][2];
	sums[2] = x[2][0] + x[2][1];
	sums[3] = x[1][0] + x[2][0];
	sums[4] = x[0][1] + x[2][1];
	sums[5] = x[0][2] + x[1][2];*/
	//for(int i = 0; i<6; i++)
	//	cout << sums[i] << "\t";
	//int max = 0;
	a /= 2;
	x[0][0] = a - x[0][1] - x[0][2];
	x[1][1] = a - x[1][0] - x[1][2];
	x[2][2] = a - x[2][0] - x[2][1];
	/*for(int i = 0; i < 6; i++)
		if(max < sums[i])
			max = sums[i];*/

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
			cout << x[i][j] << " ";
		cout << endl;
	}
	return 0;
}
