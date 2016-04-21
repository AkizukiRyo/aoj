#include <iostream>
using namespace std;

#define Max 1000000
int Prime[Max] = {};

int main()
{
	//初期化
	for (int i = 2; i < Max; i++)
	{
		Prime[i] = 1;
	}
	//エラトステネスのふるい
	for (int i = 2; i*i < Max; i++)
	{
		if (Prime[i] == 1)
		{
			for (int j = i * 2; j < Max; j += i)
			{
				Prime[j] = 0;
			}
		}
	}
	//累積和を計算
	for (int i = 2; i < Max; i++)
	{
		Prime[i] += Prime[i - 1];
	}

	int n;
	while (cin >> n)
	{
		cout << Prime[n] << endl;
	}

	return 0;
}