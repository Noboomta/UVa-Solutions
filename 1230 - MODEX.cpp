/*
*	User: Isanchez_Aguilar
*	Problem: UVA 1230 - MODEX
*/
#include <bits/stdc++.h>

using namespace std;

inline long long modPow(long long a, long long p, long long m)
{
	a %= m;
	long long result = 1;

	while (p > 0)
	{
		if (p & 1)
			result = result * a % m;

		p >>= 1;
		a = a * a % m;
	}

	return result % m;
}


int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long p;
	long long a;
	long long m;
	int testCases;

	cin >> testCases;

	while (testCases--)
	{
		cin >> a >> p >>  m;

		cout << modPow(a, p, m) << "\n";
	}
	
	return 0;
}
