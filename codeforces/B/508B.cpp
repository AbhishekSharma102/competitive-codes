#include <bits/stdc++.h>

using namespace std;

int main()
{
	char ch[100005];
	cin >> ch;
	int len = strlen(ch);
	int num = ch[len-1] - '0';
	int lasteven = -1, flag = 0;
	for(int i = 0; i < len - 1; i++)
	{
		int x = ch[i] - '0';
		if(x%2 == 0)
		{
			lasteven = i;
			if(x < num)
			{
				ch[i] = num + '0';
				ch[len - 1] = x + '0';
				flag = 1;
				break;
			}
		}
	}
	if(flag == 0 && lasteven != -1)
	{
		ch[len - 1] = ch[lasteven];
		ch[lasteven] = num + '0';
		flag = 1;
	}
	if(flag == 1)
		cout << ch << endl;
	else
		cout << "-1\n";
	return 0;
}
