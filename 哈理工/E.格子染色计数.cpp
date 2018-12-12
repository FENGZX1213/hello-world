#include<iostream>
#include<cstdio>
using namespace std;
long long a1[1000009], a2[1000009], num[1000009];
const long long mod = 1e9+7;
long long Pow(long long a, long long b)	
{
	long long s = 1, t = a;
	while (b != 0)
	{
		if(b & 1 != 0)
			s = (s * t) % mod;
		t = (t * t) % mod;
		b >>= 1;
	}
	return s;
}
int main()
{
	a1[0] = 1;
    for (int i = 1; i <= 1000008; i++) a1[i] = a1[i - 1] * i % mod;
    a2[1000008] = Pow(a1[1000008], mod-2);
    for (int i = 1000008 - 1; i >= 0; i--) a2[i] = a2[i + 1] * (i + 1) % mod;
	int T, c;
	scanf("%d", &T);
	for (c = 1; c <= T; c++)
	{
		long long n, m, k, s = 0, t = 1;
		scanf("%lld %lld %lld", &n, &m, &k);
		for (int i = k; i > 0; i--, t = (-1) * t)
		s = (s + t * (a1[k] * a2[i] % mod * a2[k - i] % mod) % mod * i % mod * Pow(i - 1, n - 1) % mod + mod) % mod;
		for (int i = m; i >= m - k + 1; i--)
			s = s * i % mod;
		s = s * a2[k] % mod;
		printf("%lld\n", s);
	}
	return 0;
}

