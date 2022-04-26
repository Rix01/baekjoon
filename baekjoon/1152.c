/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char sent[1000000];
	int count=0;
	scanf("%[^\n]s", sent);
	int len = strlen(sent);

	for (int i = 0; i < len; i++)
	{
		if (sent[i] == ' ') count++;
	}

	if (sent[0] == ' ') count -= 1;
	if (sent[len - 1] == ' ') count -= 1;
	printf("%d", count+1);
	return 0;
}
*/