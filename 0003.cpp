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
		//a����ԑ傫���Ȃ�悤����ւ�
		if (a < b) swap(a, b);
		if (a < c) swap(a, c);
		//�O�����̒藝��蔻��
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