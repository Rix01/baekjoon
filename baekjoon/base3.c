// 2739
/*
#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", N, i, N * i);
	}
	return 0;
}
*/

// 10950
/*
#include <stdio.h>
int main(void)
{
	int n, a, b;
	int nums[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		nums[i] = a + b;
	}
	for (int j = 0; j < n; j++)
	{
		printf("%d\n", nums[j]);
	}
	return 0;
}
*/

// 8393
/*
#include <stdio.h>

int main(void)
{
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	return 0;
}
*/

// 15552
/*
#include <stdio.h>

int main(void)
{
	int t,a,b;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}
*/

// 2741
/*
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}
*/

// 2742
/*
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = n; i >=1; i--)
	{
		printf("%d\n", i);
	}
	return 0;
}
*/

// 11021
/*
#include <stdio.h>
int main(void)
{
	int n, a, b;
	int nums[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		nums[i] = a + b;
	}
	for (int j = 0; j < n; j++)
	{
		printf("Case #%d: %d\n", j+1, nums[j]);
	}
	return 0;
}
*/

// 11022
/*
#include <stdio.h>
int main(void)
{
	int n, a, b;
	int nums[1000];
	int as[1000];
	int bs[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		as[i] = a;
		bs[i] = b;
		nums[i] = a + b;
	}
	for (int j = 0; j < n; j++)
	{
		printf("Case #%d: %d + %d = %d\n", j + 1, as[j], bs[j],nums[j]);
	}
	return 0;
}
*/

// 2438
/*
*#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

// 2439
/*
* #include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = n-1; j >= i; j--)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

// 10871
/*
#include <stdio.h>

int main(void)
{
	int n,x, input;
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &input);

		if (input < x)
		{
			printf("%d ", input);
		}
	}
	return 0;
}*/

// 10952
/*
* #include <stdio.h>

int main(void)
{
	int a, b;
	while (1)
	{
		scanf("%d %d", &a, &b);

		if ((a == 0) && (b == 0)) break;
		else 
		{
			printf("%d\n", a + b);
		}
	}
	return 0;
}
*/

// 10951
/*
#include <stdio.h>

int main(void)
{
	int a, b;
	while (scanf("%d %d", &a, &b)!=EOF) //EOF : End Of File의 약자로 파일의 끝을 표현하기 위해 -1로 정의된 상수
	{
		printf("%d\n", a + b);
	}
	return 0;
}
*/

// 1110
/*
#include <stdio.h>

int main(void)
{
	int num, sib, il, sum, cycle=0;
	scanf("%d", &num);
	int first = num; // 첫 값을 first 변수에 저장
	while (1)
	{
		sib = num / 10;
		il = num % 10;
		sum = sib + il;
		int newnum = il*10 +  (sum % 10);
		cycle ++;

		if (newnum == first)
		{
			printf("%d", cycle);
			break;
		}
		else num = newnum;
	}
	return 0;
}
*/