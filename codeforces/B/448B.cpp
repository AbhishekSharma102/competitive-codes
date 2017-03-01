#include <bits/stdc++.h>

using namespace std;

char s[105], t[105];
int schars[26], tchars[26];

int automaton()
{
	int flag2= 0, j = 0;
	for(int i = 0; i < strlen(s); i++)
	{
		if(s[i] == t[j])
			j++;
	}
	if(j == strlen(t))
		flag2 = 1;
	return flag2;
}

int suffixarray()
{
	for(int i = 0; i < strlen(s); i++)
		schars[s[i] - 'a'] += 1;
	for(int i = 0; i < strlen(t); i++)
		tchars[t[i] - 'a'] += 1;
	int flag = 1;
	for(int i = 0; i < 26; i++)
	{
		if(tchars[i] != schars[i])
			flag = 0;
	}
	return flag;
}

int both()
{
	for(int i = 0; i < strlen(s); i++)
		schars[s[i] - 'a'] += 1;
	for(int i = 0; i < strlen(t); i++)
		tchars[t[i] - 'a'] += 1;
	int flag = 1;
	for(int i = 0; i < 26; i++)
	{
		if(tchars[i] > schars[i])
			flag = 0;
	}
	return flag;
}

int main()
{
	cin >> s;
	cin >> t;
	int flag1 = automaton();
	int flag2 = suffixarray();
	if(flag1)
		cout << "automaton\n";
	else if(flag2)
		cout << "array\n";
	else
	{
		int flag3 = both();
		if(flag3)
			cout << "both\n";
		else
			cout << "need tree\n";
	}
	return 0;
}