// 1330
/*#include <stdio.h>
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);

	if (a > b) printf(">");
	else if (a < b) printf("<");
	else printf("==");
	return 0;
}*/

// 9498
/*#include <stdio.h>
int main(void)
{
	int score;
	scanf("%d", &score);
	if (score >= 90) printf("A");
	else if (score >= 80) printf("B");
	else if (score >= 70) printf("C");
	else if (score >= 60) printf("D");
	else printf("F");
	return 0;
}*/

// 2753
/*
#include <stdio.h>

int main(void)
{
	int year;
	scanf("%d", &year);

	if ((year % 4 == 0) && (year % 100 != 0))
	{
		printf("1");
	}
	else if (year % 400 == 0)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}
*/

// 14681
/*
#include <stdio.h>

int main(void)
{
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);

	if (x > 0)
	{
		if (y > 0) printf("1");
		else printf("4");
	}
	else
	{
		if (y > 0) printf("2");
		else printf("3");
	}
	return 0;
}
*/

//2884
/*
#include <stdio.h>

int main(void)
{
	int H, M;
	scanf("%d %d", &H, &M);
	if (M >= 45)
	{
		printf("%d %d", H, M - 45);
	}
	else
	{
		if (H == 0)
		{
			printf("%d %d", 23, (60 + M) - 45);
		}
		else
		{
			printf("%d %d", H - 1, (60 + M) - 45);
		}
	}
	return 0;
}
*/

// 2525
/*
#include <stdio.h>

int main(void)
{
	int A, B, T;
	scanf("%d %d", &A, &B);
	scanf("%d", &T);
	int a = T / 60;
	int b = T % 60;

	if ((B + b) > 59)
	{
		a += 1;
		if ((A + a) > 23) printf("%d %d", (A + a) - 24, (B + b) - 60);
		else printf("%d %d", (A + a), (B + b) - 60);
	}
	else
	{
		if ((A + a) > 23) printf("%d %d", (A + a) - 24, B + b);
		else printf("%d %d", (A + a), B + b);
	}
	return 0;
}
*/

// 2480
/*
#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b)
	{
		if (b == c)
		{
			printf("%d", 10000 + a * 1000);
		}
		else printf("%d", 1000 + a * 100);
	}
	else
	{
		if (a == c) printf("%d", 1000 + a * 100);
		else if (b == c) printf("%d", 1000 + b * 100);
		else
		{
			int max = a > b ? a : b;
			if (max < c) max = c;
			printf("%d", max * 100);
		}
	}
	return 0;
}
*/