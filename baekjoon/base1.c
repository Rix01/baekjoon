/*
백준 10171
#include <stdio.h>
int main(void)
{
	printf("\\    /\\\n"); // \이것을 출력하기 위해서는 두번 써줘야 함
	printf(" )  ( ')\n");
	printf("(  /  )\n");
	printf(" \\(__)|");
	return 0;
}
*/

//백준 10172
/*
#include <stdio.h>
int main(void)
{
	printf("|\\_/|\n");
	printf("|q p|   /}\n");
	printf("( 0 )\"\"\"\\\n");
	printf("|\"^\"`    |\n");
	printf("||_/=\\\\__|");
	return 0;
}
*/
//1000, 1001, 10998, 
/*#include <stdio.h>
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a * b);
	return 0;
}*/

//1008
/*#include <stdio.h>
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.9lf", (double)a/b); //double(a/b) 하면 괄호 먼저 계산되므로 안 됨.
	return 0;
}*/

// 10869
/*#include <stdio.h>
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a+b);
	printf("%d\n", a-b);
	printf("%d\n", a*b);
	printf("%d\n", a/b);
	printf("%d\n", a%b);
	return 0;
}*/

//10926
/*#include <stdio.h>
int main(void)
{
	char id[50];
	scanf("%s", id);
	printf("%s??!", id);
	return 0;
}*/

//18108
/*#include <stdio.h>
int main(void)
{
	int y;
	scanf("%d", &y);
	printf("%d", y - 543);
	return 0;
}*/

//10430
/*#include <stdio.h>
int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", (a+b)%c);
	printf("%d\n", ((a % c) + (b % c)) % c);
	printf("%d\n", (a*b) % c);
	printf("%d\n", ((a % c) *(b % c)) % c);
	return 0;
}*/

//2588
/*#include <stdio.h>
int main(void)
{
	int n1, n2, n3, n4, n5, n6;
	scanf("%d", &n1);
	scanf("%d", &n2);
	n3 = n1 * (n2 % 10);
	n4 = n1 * ((n2 % 100) / 10);
	n5 = n1 * (n2 / 100);
	n6 = n3 + 10 * n4 + 100 * n5;

	printf("%d\n%d\n%d\n%d", n3, n4, n5, n6);
	return 0;
}*/