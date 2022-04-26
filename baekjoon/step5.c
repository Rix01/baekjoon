// 15596
/*
long long sum(int* a, int n)
{
	long long ans = 0;
	for (int i = 0; i < n; i++) ans += a[i];
	return ans;
}
*/

// 4673
/*
#include <stdio.h>
void hansu(int n)
{
	if (n < 111) // 111보다 작을 때
	{
		if (n < 100)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d", 99);
		}
	}

	else
	{
		// 111 이상
		int count = 99;
		for (int i = 111; i <= n; i++)
		{
			int baek = i / 100;
			int sib = (i / 10) % 10;
			int il = i % 10;
			if ((baek - sib) == (sib - il)) count +=1;
		}
		printf("%d", count);
	}
}

int main(void)
{
	int N;
	scanf("%d", &N);
	hansu(N);
	return 0;
}
*/

