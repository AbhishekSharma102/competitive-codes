#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long int a[3], maxMeal, missed;
	cin >> a[0] >> a[1] >> a[2];
	maxMeal = max(max(a[0], a[1]), a[2]);
	int flag = 0;
	for(int i = 0; i<3; i++)
	{
		if(maxMeal == a[i])
			flag ++;
	}
	if(flag == 1)
		missed = 3*maxMeal - a[0] - a[1] - a[2] - 2;
	else if(flag == 2)
		missed = 3*maxMeal - a[0] - a[1] - a[2] - 1;
	else
		missed = 3*maxMeal - a[0] - a[1] - a[2];
	cout << missed<<endl;
	return 0;
}