#include<iostream>
#include<string>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--) {
		string str,player1="",player2 = "";
		cin >> str;
		int len = str.length();
		if (len == 1) {
			player1 = str;
			player2 = str;
		}
		else {
			if (len % 2 == 0) {
				for (int i = 0; i < len; i+=2) {
					player1 += str[i];
					player2 += str[i + 1];
				}
			}
			else {
				for (int i = 0; i < len;) {
					if (player1.length() == len) { break; }
					player1 += str[i++];
					if (i == len) { i = 0; }
					player2 += str[i++];
				}
			}
		}
		cout << player1 << endl << player2 << endl;
	}

	return 0;
}
