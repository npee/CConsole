#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {
	printf("숫자 입력: ");
	int input;
	scanf("%d", &input);
	display(input);

	printf("\n");
	int arr[][5] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

}

int display(int n) {

	int digitNumber[10][15] = {
		{
			1, 1, 1,
			1, 0, 1,
			1, 0, 1,
			1, 0, 1,
			1, 1, 1 }, // 0
		{
			0, 1, 0,
			1, 1, 0,
			0, 1, 0,
			0, 1, 0,
			1, 1, 1 }, // 1
		{
			0, 1, 0,
			1, 0, 1,
			0, 0, 1,
			0, 1, 0,
			1, 1, 1 }, // 2
		{
			1, 1, 1,
			0, 0, 1,
			1, 1, 1,
			0, 0, 1,
			1, 1, 1 }, // 3
		{
			1, 0, 1,
			1, 0, 1,
			1, 1, 1,
			0, 0, 1,
			0, 0, 1 }, // 4
		{
			1, 1, 1,
			1, 0, 0,
			1, 1, 1,
			0, 0, 1,
			1, 1, 1 }, // 5
		{
			1, 1, 1,
			1, 0, 0,
			1, 1, 1,
			1, 0, 1,
			1, 1, 1 }, // 6
		{
			1, 1, 1,
			0, 0, 1,
			0, 1, 0,
			0, 1, 0,
			0, 1, 1 }, // 7
		{
			1, 1, 1,
			1, 0, 1,
			1, 1, 1,
			1, 0, 1,
			1, 1, 1 }, // 8
		{
			1, 1, 1,
			1, 0, 1,
			1, 1, 1,
			0, 0, 1,
			1, 1, 1 }	// 9
	};

	int k = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++, k++) {
			digitNumber[n][k] ? printf("[0]") : printf("[ ]");
		}
		printf("\n");
	}

	return 0;
}