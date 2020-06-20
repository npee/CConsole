#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
	int a, b;
	int play = 1;

	srand((unsigned)time(NULL));
	a = rand() % 100 + 1;

	while (play == 1)
	{
		printf("1~100사이의 수를 입력해주세요\n");
		scanf_s("%d", &b);

		if (b <= 100 && b >= 1)
		{
			if (b > a)
			{
				printf("다운\n");
			}
			else if (b < a)
			{
				printf("업\n");
			}
			else if (a == b)
			{
				printf("정답입니다\n");
				play = 0;
			}
		}
		else {
			continue;
		}
	}
}