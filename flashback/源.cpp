#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int x[100];
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> x[i];
	}
	for (int i = n - 1; i >= 0; --i)
	{
		cout << x[i] << ' ';
	}
	cout << endl;
	getchar();
	return 0;
}