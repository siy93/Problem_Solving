#include<iostream>
#include<algorithm>

using namespace std;

int DP[1001][1001];
char str1[1001], str2[1001];

int main()
{
	int len1,len2;
	cin >> str1 >> str2;
	
	for (int i = 0; str1[i]; i++) {
		for (int j = 0; str2[j]; j++) {							
			if (str1[i] == str2[j]) {
				DP[i + 1][j + 1] = DP[i][j] + 1;
			}
			else {
				DP[i + 1][j + 1] = max(DP[i + 1][j], DP[i][j + 1]);
			}
			len2 = j;
		}
		len1 = i;
	}

	cout << DP[len1+1][len2+1];
	return 0;
}
