#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t, n, k;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		cin >> k;
		int b[k];
		for (int i = 0; i < k; i++)
		{
			cin >> b[i];
		}
		int d = n + k;
		int c[d];
		for (int i = 0; i < n; i++)
		{
			c[i] = a[i];
		}
		for (int i = n + 1; i < d; i++)
		{
			c[i] = b[i];
		}
		for (int i = 0; i < d; i++)
		{
			for (int j = i + 1; j < d; j++)
			{
				if (c[i] == c[j])
				{
					for (int k = j; k < d; k++)
					{
						c[k] = c[k + 1];
					}
					d--;
					j--;
				}
			}
		}
		for (int i = 0; i < d; i++)
		{
			cout << c[d] << endl;
		}

		return 0;
	}