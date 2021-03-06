#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		//aが一番大きくなるよう入れ替え
		if (a < b) swap(a, b);
		if (a < c) swap(a, c);
		//三平方の定理より判定
		if (a*a == b*b + c*c)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}