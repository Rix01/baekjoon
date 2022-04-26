// 11654
/*
#include <stdio.h>

int main(void)
{
	char input;
	scanf("%c", &input);
	printf("%d", input);
	return 0;
}
*/

// 11720
/*
#include <stdio.h>

int main(void)
{
	int n, sum = 0;
	scanf("%d", &n);
	char num[101];
	scanf("%s", num);
	for (int i = 0; i < n; i++) sum += num[i] - '0';
	printf("%d", sum);
	return 0;
}
*/

// 10809
/*
// 10809
#include <stdio.h>
#include <string.h>
int main(void)
{
	char S[100];
	scanf("%s", S);
	int len = strlen(S);
	int alpha[26]; // 출력할 배열
	for (int i = 0; i < 26; i++) // 배열 값 -1로 초기화
	{
		alpha[i] = -1;
	}

	for (int i = 'a'; i <= 'z'; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if ((int)S[j] == i)
			{
				alpha[i - 97] = j; // 'a'가 97인데 alpha 배열에 0번째로 들어가기에
				break; // 같은 알파벳 1번 이상 나왔을 때 값 바뀜 방지
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", alpha[i]);
	}
	return 0;
}
*/

// 2675
/*
#include <stdio.h>
#include <string.h>
void repeat(int n, char* sent);

int main(void)
{
	int T, R;
	char S[20];
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %s", &R, S);
		repeat(R, S);
	}
}

void repeat(int n, char sent[])
{
	int len = strlen(sent);
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%c", sent[i]);
		}
	}
	printf("\n");
}
*/

// 1157
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[1000000];
	scanf("%s", word);
	int len = strlen(word);
	int alpha[26];
	int max = 0, count=0;
	char maxalpha;

	// alpha 배열값 0으로 초기화
	for (int i = 0; i < 26; i++)
	{
		alpha[i] = 0;
	}

	// 소문자
	for (int i = 'a'; i <= 'z'; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if ((int)word[j] == i)
			{
				alpha[i - 97] += 1;
			}
		}
	}

	// 대문자
	for (int i = 'A'; i <= 'Z'; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if ((int)word[j] == i)
			{
				alpha[i - 65] += 1;
			}
		}
	}

	// 가장 큰 값 찾기
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] >= max)
		{
			max = alpha[i];
			maxalpha = i+65;
		}
	}

	// max값에 중복이 있는지 확인
	for (int i = 0; i < 26; i++)
	{
		if (max == alpha[i])
		{
			count++;
		}
	}
	if (count > 1) printf("?"); // max가 여러개일 경우
	else printf("%c", maxalpha); // max가 하나일 경우

	return 0;
}
*/

