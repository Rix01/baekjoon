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

// 2908
/*
#include <stdio.h>

int main(void)
{
	char num1[4]; // 문자열 배열의 경우, 마지막 null자리가 있어야 함.
	char num2[4];

	scanf("%s %s", num1, num2);

	// num1 재배열
	char temp = num1[0];
	num1[0] = num1[2];
	num1[2] = temp;

	// num2 재배열
	temp = num2[0];
	num2[0] = num2[2];
	num2[2] = temp;

	int n1 = ((num1[0] - 48) * 100) + ((num1[1] - 48) * 10) + (num1[2] - 48);
	int n2 = ((num2[0] - 48) * 100) + ((num2[1] - 48) * 10) + (num2[2] - 48);

	if (n1 > n2) printf("%d", n1);
	else printf("%d", n2);
}
*/

// 5622
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char num[16];
	scanf("%s", num);
	int len = strlen(num);
	int cho, sum=0;

	for (int i = 0; i < len; i++)
	{
		if ((num[i] == 'A') || (num[i] == 'B') || (num[i] == 'C'))
		{
			cho = 3;
			sum += cho;
		}
		else if ((num[i] == 'D') || (num[i] == 'E') || (num[i] == 'F'))
		{
			cho = 4;
			sum += cho;
		}
		else if ((num[i] == 'G') || (num[i] == 'H') || (num[i] == 'I'))
		{
			cho = 5;
			sum += cho;
		}
		else if ((num[i] == 'J') || (num[i] == 'K') || (num[i] == 'L'))
		{
			cho = 6;
			sum += cho;
		}
		else if ((num[i] == 'M') || (num[i] == 'N') || (num[i] == 'O'))
		{
			cho = 7;
			sum += cho;
		}
		else if ((num[i] == 'P') || (num[i] == 'Q') || (num[i] == 'R')|| (num[i] == 'S'))
		{
			cho = 8;
			sum += cho;
		}
		else if ((num[i] == 'T') || (num[i] == 'U') || (num[i] == 'V'))
		{
			cho = 9;
			sum += cho;
		}
		else if ((num[i] == 'W') || (num[i] == 'X') || (num[i] == 'Y')|| (num[i] == 'Z'))
		{
			cho = 10;
			sum += cho;
		}
	}
	printf("%d", sum);
	return 0;
}
*/

// 2941
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char croa[101];
	scanf("%s", croa);
	int len = strlen(croa);
	int count = 0;

	for (int i = 0; i < len; i++)
	{
		if (croa[i] == 'c' && croa[i + 1] == '=')
		{
			count++;
			i++;
		}
		else if (croa[i] == 'c' && croa[i + 1] == '-')
		{
			count++;
			i++;
		}
		else if (croa[i] == 'd' && croa[i + 1] == 'z' && croa[i + 2] == '=')
		{
			count++;
			i += 2;
		}
		else if (croa[i] == 'd' && croa[i + 1] == '-')
		{
			count++;
			i++;
		}
		else if (croa[i] == 'l' && croa[i + 1] == 'j')
		{
			count++;
			i++;
		}
		else if (croa[i] == 'n' && croa[i + 1] == 'j')
		{
			count++;
			i++;
		}
		else if (croa[i] == 's' && croa[i + 1] == '=')
		{
			count++;
			i++;
		}
		else if (croa[i] == 'z' && croa[i + 1] == '=')
		{
			count++;
			i++;
		}
		else count++;
	}
	printf("%d", count);

	return 0;
}
*/