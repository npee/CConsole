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
		printf("1~100������ ���� �Է����ּ���\n");
		scanf_s("%d", &b);

		if (b <= 100 && b >= 1)
		{
			if (b > a)
			{
				printf("�ٿ�\n");
			}
			else if (b < a)
			{
				printf("��\n");
			}
			else if (a == b)
			{
				printf("�����Դϴ�\n");
				play = 0;
			}
		}
		else {
			continue;
		}
	}
}