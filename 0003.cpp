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
		//a‚ªˆê”Ô‘å‚«‚­‚È‚é‚æ‚¤“ü‚ê‘Ö‚¦
		if (a < b) swap(a, b);
		if (a < c) swap(a, c);
		//ŽO•½•û‚Ì’è—‚æ‚è”»’è
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