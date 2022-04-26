// 10818
#include <stdio.h>

int main(void)
{
	int N, max=-1000000, min=1000000, num;
	scanf("%d ", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d ", &num);
		if (min > num) min = num;
		if (max < num) max = num;
	}
	printf("%d %d", min, max);
	return 0;
}