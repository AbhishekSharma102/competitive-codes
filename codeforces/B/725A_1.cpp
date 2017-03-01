#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n;
	cin >> n;
	char arr[200010];
	cin >> arr;
	long long int pos = 1, max = 1, min = 1, count = 0;
	for (int i = 0; arr[i] != '\0'; i++){
		if (arr[i] == '>'){
			count ++;
		}
		else {
			count --;
		}
	}
	cout << abs(count) << endl;
	return 0;
}