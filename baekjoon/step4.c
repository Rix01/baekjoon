// 10818
/*
#include <stdio.h>

int main(void)
{
	int N, max = -1000000, min = 1000000, num;
	scanf("%d ", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		if (min > num) min = num;
		if (max < num) max = num;
	}
	printf("%d %d", min, max);
	return 0;
}

*/

// 2562
/*
#include <stdio.h>

int main(void)
{
	int nums[9];
	int max = 0, n;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &nums[i]);
		if (nums[i] > max)
		{
			max = nums[i];
			n = i+1;
		}
	}
	printf("%d\n", max);
	printf("%d", n);
	return 0;
}
*/

// 2577
/*
#include <stdio.h>

int main(void)
{
	int a, b, c, num, i = 0, count =0;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int gop = a * b * c;

	int nums[10];
	// 일단 배열 값 -1로 초기화
	for (int i = 0; i < 10; i++)
	{
		nums[i] = -1;
	}

	// 배열에 값 대입
	while (gop > 0)
	{
		nums[i] = gop % 10;
		gop = gop / 10;
		i++;
	}

	for (int j = 0; j < 10; j++)
	{
		count = 0;
		for (int i = 0; i < 10; i++)
		{
			if (nums[i] == j)
			{
				count++;
			}
		}
		printf("%d\n", count);
	}
}
*/

// 3052
/*
#include <stdio.h>

int main(void)
{
	int nums[10];
	int rest[10];
	int count = 0, n=-1;

	// 입력 받는 숫자 배열
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &nums[i]);
	}

	// 나머지 배열
	for (int i = 0; i < 10; i++)
	{
		rest[i] = nums[i] % 42;
	}

	int js[43];
	// js 배열 -1로 초기화
	for (int j = 0; j < 43; j++)
	{
		js[j] = -1;
	}


	for (int i= 0; i < 10; i++)
	{
		for (int j = 0; j < 43; j++)
		{
			if (rest[i] == j) js[j] = 1;
		}
	}

	for (int j = 0; j < 43; j++)
	{
		if (js[j] != -1) count++;
	}
	printf("%d", count);
	return 0;
}
*/

// 1546
/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	// 시험 본 과목 수 n
	int n;
	float max = 0, sum = 0;
	scanf("%d", &n);
	float* score = (float*)malloc(sizeof(float) * n);
	for (int i = 0; i < n; i++) // 과목 입력 받고 최댓값 구하기
	{
		scanf("%f", &score[i]);
		if (score[i] > max) max = score[i];
	}

	for (int i = 0; i < n; i++)
	{
		sum += (score[i] / max) * 100;
	}

	float avg = sum / n;
	printf("%f", avg);
	free(score);
	return 0;
}
*/

// 8958... my
/*
#include <stdio.h>

int main(void)
{
	int score[30];
	// score 배열 0으로 초기화
	for (int i = 0; i < 30; i++)
	{
		score[i] = 0;
	}

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		// OX 입력받기
		char ox[30];
		for (int i = 0; i < 30; i++)
		{
			scanf("%[^\n]s", &ox[i]);
		}

		// 점수 score배열에 대입
		for (int i = 0; i < 30; i++)
		{
			int point = 0;
			if (ox[i] == 'O')
			{
				point += 1;
				ox[i] = point;
				int j = 1;
				while (ox[i + j] == 'O')
				{
					point += 1;
					ox[i + j] = point;
					j++;
				}
			}
		}
		int sum = 0;
		for (int i = 0; i < 30; i++)
		{
			sum += score[i];
		}
		printf("%d", sum);
	}
}
*/

// 8958
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, point, sum;
	char ox[100];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		point = 1;
		sum = 0;
		scanf("%s", ox);
		for (int i = 0; i < strlen(ox); i++)
		{
			if (ox[i] == 'O')
			{
				sum += point;
				point++;
			}
			else if (ox[i] == 'X') point = 1;
		}
		printf("%d\n", sum);
	}
	return 0;
}
*/

// 4344
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int c, std, count;
	float score[1000], sum, avg, percent;

	scanf("%d", &c);
	for (int i = 0; i < c; i++) // c번 반복
	{
		sum = 0;
		count = 0;
		scanf("%d", &std);
		for (int j = 0; j < std; j++)
		{
			scanf("%f", &score[j]);
			sum += score[j];
		}
		avg = sum / std;
		for (int i = 0; i < std; i++)
		{
			if (avg < score[i]) count += 1;
		}
		percent = ((float)count * 100) / std;
		printf("%.3f%%\n", percent);
	}
	return 0;
}
*/
