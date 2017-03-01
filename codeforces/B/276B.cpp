#include <bits/stdc++.h>

using namespace std;

int main()
{
	char ch[1005];
	cin >> ch;
	int num[26];
	for(int i = 0; i < 26; i++)
		num[i] = 0;
	for(int i = 0; ch[i] != '\0'; i++)
		num[ch[i] - 'a'] ++;
	int total = 0, len = strlen(ch), flag = 0;
	for(int i = 0; i < 26; i++)
	{
		if(num[i]%2)
			total ++;
	}
	if(total == 0 || (total & 1))
		cout << "First\n";
	else
		cout << "Second\n";
	return 0;
}