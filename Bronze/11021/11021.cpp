// <https://www.acmicpc.net/problem/11021>
// 11021번 

#include <iostream>
using namespace std;
signed main()
{
	int	test_cnt;
	int	a;
	int	b;
	int	i;

	scanf("%d", &test_cnt);
	i = 1;
	while (i <= test_cnt)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i++, a + b);
	}
	return (0);
}