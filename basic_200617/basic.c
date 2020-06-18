#include <stdio.h>

// 1. �Է¹��� 10�� ������ ���� �ִ�, �ּ�, ��, ���
int arithmetics() {
	int inputs[10];
	int max, min, sum;
	max = 0;
	min = 2147483647;
	sum = 0;

	for (int i = 0; i < 10; i++) {
		printf("%d��° �� �Է�->", i + 1);
		scanf_s("%d", &inputs[i]);
		sum += inputs[i];
		if (inputs[i] > max) {
			max = inputs[i];
		}
		if (inputs[i] < min) {
			min = inputs[i];
		}
	}
	double avg = (double) sum / 10;

	printf("�ִ�: %d\n", max);
	printf("�ּ�: %d\n", min);
	printf("����: %d\n", sum);
	printf("���: %.2f\n", avg);

	return 0;
}

// 2. �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ�
int upper_to_lower() {
	char str[10];
	printf("���ڿ� �Է�->");
	scanf_s("%s", str, 10);

	for (int i = 0; i < 10; i++) {
		if (str[i] <= 'Z' && str[i] >= 'A') {
			str[i] += 32;
		} else if (str[i] <= 'z' && str[i] >= 'a') {
			str[i] -= 32;
		}
	}
	printf("���� ���ڿ�: %s\n", str);

	return 0;
}

// 3. �ʸ� �Է¹��� �� ��, �� �ʷ� ��ȯ �� ���
int sec_to_time(int sec) {
	// printf("�� �Է�->");
	int hour, minute, second;

	second = sec % 60;
	minute = sec / 60 % 60;
	hour = sec / 60 / 60;

	printf("%d�ð� %d�� %d��\n", hour, minute, second);

	return 0;
}

// 4. ��, ��, �ʸ� �Է¹��� �� �ʷ� ��ȯ �� ���
int time_to_sec(int hour, int minute, int second) {
	int sec;
	sec = hour * 60 * 60 + minute * 60 + second;
	printf("%d�ð� %d�� %d�ʴ� %d��\n", hour, minute, second, sec);

	return 0;
}

// 5. Ű�� ������ �Է� �Լ�
int h_and_w() {
	int height, weight;
	printf("Ű �Է�->");
	scanf_s("%d", &height);
	printf("������ �Է�->");
	scanf_s("%d", &weight);

	printf("Ű: %d, ������: %d\n", height, weight);

	return 0;
}

// 6. A�� �̿��Ͽ� B�� ä��� (2*4 -> 4*2)
int reverse_matrix() {
	int arrA[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arrB[4][2];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			arrB[i][j] = arrA[j][i];
			printf("%d ", arrB[i][j]);
		}
		printf("\n");
	}

	return 0;
}


int main(void) {
	// arithmetics();
	// upper_to_lower();
	// sec_to_time(10000);
	// time_to_sec(2, 46, 40);
	h_and_w();
	// reverse_matrix();

}