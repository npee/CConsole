#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// 1. 입력받은 10개 정수에 대한 최대, 최소, 합, 평균
int arithmetics_p() {
	int* inputs = (int*)malloc(sizeof(int) * 10);
	int max, min, sum;
	max = 0;
	min = 2147483647;
	sum = 0;

	for (int i = 0; i < 10; i++) {
		printf("%d번째 수 입력->", i + 1);
		scanf_s("%d", inputs + i);
		sum += *(inputs + i);
		if (*inputs + i > max) {
			max = *(inputs + i);
		}
		if (*inputs + i < min) {
			min = *(inputs + i);
		}
	}
	double avg = (double)sum / 10;

	printf("최대: %d\n", max);
	printf("최소: %d\n", min);
	printf("총합: %d\n", sum);
	printf("평균: %.2f\n", avg);

	return 0;
}

// 2. 대문자는 소문자로, 소문자는 대문자로
int upper_to_lower_p() {
	char* str = (char*)malloc(100);
	printf("문자열 입력->");
	scanf_s("%s", str, strlen(str));

	for (int i = 0; i < (signed)strlen(str); i++) {
		if (*(str + i) <= 'Z' && *(str + i) >= 'A') {
			*(str + i) += 32;
		}
		else if (*(str + i) <= 'z' && *(str + i) >= 'a') {
			*(str + i) -= 32;
		}
	}
	printf("최종 문자열: %s\n", str);

	return 0;
}

// 3. 초를 입력받은 후 시, 분 초로 변환 후 출력
int sec_to_time_p(int sec) {
	// printf("초 입력->");

	printf("%d시간 %d분 %d초\n", sec / 60 / 60, sec / 60 % 60, sec % 60);

	return 0;
}

// 4. 시, 분, 초를 입력받은 후 초로 변환 후 출력
int time_to_sec_p(int* time) {

	printf("%d시간 %d분 %d초는 %d초\n", *time, *(time + 1), *(time + 2), *time * 60 * 60 + *(time + 1) * 60 + *(time + 2));

	return 0;
}

// 5. 키와 몸무게 입력 함수

typedef struct _inbody {
	int height;
	int weight;
} inbody;

int set_h_and_w(int height, int weight) {

	inbody *client = malloc(sizeof(inbody));
	client->height = height;
	client->weight = weight;
	printf("키: %d, 몸무게: %d\n", client->height, client->weight);
	free(client);
	return 0;
}

// 6. A를 이용하여 B값 채우기 (2*4 -> 4*2)
int reverse_matrix_p() {
	int arrA[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int** arrB = (int**)malloc(sizeof(int*) * 4);

	for (int i = 0; i < 4; i++) {
		arrB[i] = (int*)malloc(sizeof(int) * 2);
		for (int j = 0; j < 2; j++) {
			*(*(arrB + i) + j) = *(*(arrA + j) + i);
			printf("%d ", *(*(arrB + i) + j));
		}
		printf("\n");
	}

	for (int i = 0; i < 4; i++) {
		free(arrB[i]);
	}
	free(arrB);

	return 0;
}


int main(void) {
	// arithmetics_p();
	// upper_to_lower_p();
	// sec_to_time_p(1000000);
	/*
	int time[3] = { 2, 46, 40 };
	time_to_sec_p(time);
	*/
	// set_h_and_w(190, 80);
	reverse_matrix_p();
}