#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	char arr[200001];
	cin >> arr;
	int pos = 1, max = 1, min = 1, count = 0;
	for (int i = 0; arr[i] != '\0'; i++){
		if (arr[i] == '>'){
			pos += 1;
			if(pos > max){
				max = pos;
				count++;
			}
		}
		else {
			pos -= 1;
			if(pos < min) {
				min = pos;
				count++;
			}
		}
	}
	//cout << max << '\t' << min << '\t' << pos << endl;
	if (pos == 1 && min == 1)
		cout << '0' << endl;
	else if (pos == 1 && min != 1)
		cout << abs(min) + 1 << endl;
	else
		cout << count << endl;
	return 0;
}