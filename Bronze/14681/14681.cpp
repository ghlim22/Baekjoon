// https://www.acmicpc.net/problem/14681
// 14681번 

#include <iostream>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
signed main() {
	fastio;
	int x, y;

	cin >> x >> y;
	if (x > 0)
	{
		if (y > 0)
			cout << 1;
		else
			cout << 4;
	}
	else if (y > 0)
		cout << 2;
	else 
		cout << 3;

	return (0);
}