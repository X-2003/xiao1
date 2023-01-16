#include <stdio.h>
#include <string.h>
int main()
{
	int input = 0;
	printf("加入莱茵有限公司\n");
	printf("你是否要加入？（1/0)>:");
	scanf_s("%d", &input);
	if(input == 1)
	printf("欢迎光临\n");
	else

		printf("你失业了\n");
	return 0;
}