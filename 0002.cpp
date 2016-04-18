#include <iostream>
using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		int sum = a + b;
		int ans = 0;
		while (sum > 0)
		{
			ans++;
			sum /= 10;
		}
		cout << ans << endl;
	}

	return 0;
}