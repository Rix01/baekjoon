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
	int alpha[26]; // ����� �迭
	for (int i = 0; i < 26; i++) // �迭 �� -1�� �ʱ�ȭ
	{
		alpha[i] = -1;
	}

	for (int i = 'a'; i <= 'z'; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if ((int)S[j] == i)
			{
				alpha[i - 97] = j; // 'a'�� 97�ε� alpha �迭�� 0��°�� ���⿡
				break; // ���� ���ĺ� 1�� �̻� ������ �� �� �ٲ� ����
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
#include <stdio.h>

int main(void)
{

	return 0;
}