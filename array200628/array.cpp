#include <iostream>

using namespace std;

void q1() {
	// 1. ���̰� 5�� int�� �迭�� �����ؼ� 5���� ������ �Է¹޽��ϴ�.
	int n_array[5];
	double sum = 0;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "��° ���� �Է�:";
		cin >> n_array[i];
		cout << endl;
		sum += n_array[i];
	}
	cout << "�Է¹��� �迭: { ";
	for (int i = 0; i < 5; i++) {
		cout << n_array[i] << " ";
	}
	cout << "}" << endl;

	// Bubble sort - ������ �� ���� �ִ밪�� �ڿ������� ����
	for (int i = 4; i > 0; i--) {
		for (int j = 0; j < i; j++) { 
			if (n_array[j] > n_array[j + 1]) {
				int temp = n_array[j];
				n_array[j] = n_array[j + 1];
				n_array[j + 1] = temp;
			}
		}
	}
	cout << "���� ����: { ";
	for (int i = 0; i < 5; i++) {
		cout << n_array[i] << " ";
	}
	cout << "}" << endl;

	// ���� �ִ밪, �ּҰ�, ����, ����� ���ϼ���.
	cout << "�ִ밪: " << n_array[4] << endl;
	cout << "�ּҰ�: " << n_array[0] << endl;
	cout << "����: " << sum << endl;
	cout << "���: " << sum / 5 << endl;
}

void q2() {
	// 2. char�� 1�����迭�� ���� �� "Good Morning"�� �ʱ�ȭ �ϼ���.
	char str[] = "Good Morning";
	// �׸��� ������ ����ϼ���.
	cout << str << endl;
}

char* custom_strrev(char* str) {
	char* origin = str;
	char* iterator = str;
	char tempChar;

	while (*str) {
		*str++;
	}
	str--;
	
	while (iterator < str) {
		tempChar = *iterator;
		*iterator++ = *str;
		*str-- = tempChar;
	}
	return origin;
}

void q3() {
	// 3. ���ܾ �Է¹ް� ���ܾ �������� ����������.
	// ��, �ΰ��� �״�ο��� �մϴ�.
	char tempStr[100];

	cout << "�ܾ� �Է�: ";
	cin >> tempStr;

	cout << "�ܾ�: " << tempStr << endl;

	char* str = custom_strrev(tempStr);
	cout << "����: " << str << endl;
}

void q4() {
	// 4. ���̰� 5�� int�� �迭 arr�� �����ϰ�
	// 1, 2, 3, 4, 5�� �ʱ�ȭ�Ѵ�.
	int arr[5] = { 1,2,3,4,5 };
	// ������ ��Ҹ� ����Ű�� ptr�� �����ϰ�
	int* ptr = arr;
	ptr += sizeof(arr) / sizeof(int) - 1; // �迭�� ���̿� ������� ������ ���� ����Ű���� �Ϲ�ȭ(ptr += 4)
	
	// ptr�� �����ϴ� �������� �迭�� ��Ҹ� ��� ���Ͽ� �����
	// ����Ѵ�.
	int sum = 0;
	while (ptr >= arr) {
		cout << "���� �����Ͱ� ����Ű�� ��: " << *ptr << endl;
		sum += *ptr;
		*ptr--;
		// �Ǵ� ptr--;
		// (*ptr)--; �� �Ұ�
	}
	cout << "��: " << sum << endl;
}

void q5() {
	// 5. ���̰� 6�� �迭 arr 1, 2, 3, 4, 5, 6 ���� �ʱ�ȭ�� ����
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	// �迭�� ����� ���� ������ 6, 5, 4, 3, 2, 1�� �����Ѵ�.
	int arr_length = sizeof(arr) / sizeof(int); // �迭 ���� �Ϲ�ȭ
	// �迭�� �հ� �ڸ� ����Ű�� ������ ���� 2���� �����ؼ�
	int *start = arr;
	int *end = arr + (arr_length - 1);
	// �̸� Ȱ���Ͽ� ����� ���� ������ �ٲ�� �Ѵ�.
	while (start < end) {
		int temp = *start;
		*start++ = *end;
		*end-- = temp;
	}
	// �迭 ���
	for (int i = 0; i < arr_length; i++) {
		cout << "arr[" << i << "]: " << arr[i] << endl;
	}
}

void q6() {
	// 6. ���ڸ� ������ ���ڿ��� �Է¹޾Ƽ� �� �ȿ� �����ϴ� ������ ������
	// ���ϼ���.
	// ���� ��� q1df3kf9lj3�� ����
	// 1 + 3 + 9 + 3�� ����ؾ� �մϴ�.
	char str[50];
	cout << "���ڿ� �Է�: ";
	cin >> str;
	int sum = 0;
	
	char* ptr = str;
	while (*ptr) {
		char currChar = *ptr;
		// '0'~'9' ==  48 ~ 57
		if (currChar >= '0' && currChar <= '9') {
			sum += currChar - 48;
		}
		*ptr++;
	}

	cout << "���ڿ�: " << str << endl;
	cout << "�� : " << sum << endl;

}

void q7() {
	// 7. 20byte char �迭 3���� ����ϴ�.
	char arr1[20], arr2[20], arr3[20];
	// �迭�� ���ڿ��� �ΰ��� �Է¹޽��ϴ�.
	cout << "���ڿ� 1: ";
	cin >> arr1;
	cout << "���ڿ� 2: ";
	cin >> arr2;
	// �������迭�� �ΰ��� ���ڿ��� �����Ͽ� �ٿ��ֽ��ϴ�.
	// �� korea, student�� �Է¹޾Ҵٸ�
	// ����° �迭���� koreastudent�� ����Ǿ� ����Ͽ��� �մϴ�.

	int len1 = 0;
	// arr3���� arr1 ���ڿ� ����
	while(true) {
		arr3[len1] = arr1[len1];
		len1++;
		if (arr1[len1] == 0) {
			// arr3[len] = '\0';
			break;
		}
		cout << "1����" << endl;
	}
	int len2 = 0;
	while (true) {
		arr3[len1] = arr2[len2];
		len1++;
		len2++;
		if (arr2[len2] == 0) {
			arr3[len1] = '\0';
			break;
		}
		cout << "2����" << endl;
	}

	cout << "len1: " << len1 << endl;
	cout << "len2: " << len2 << endl;

	cout << "���ڿ� 1: " << arr1 << endl;
	cout << "���ڿ� 2: " << arr2 << endl;
	cout << "���ڿ� 3: " << arr3 << endl;
}

char** strsplit(char* user) {
	char** user_info = (char**)malloc(sizeof(int) * 2);
	user_info[0] = (char*)malloc(sizeof(char) * 10);
	user_info[1] = (char*)malloc(sizeof(char) * 10);
	// char user_info[2][10];

	int toggle = 0;
	int len = 0;
	for (int i = 0; i < 20; i++) {
		// cout << (int)user1[i] << endl;
		if (toggle == 0) {
			if (user[i] == ' ') {
				user_info[0][i] = 0;
				toggle = 1;
				continue;
			}
			user_info[0][i] = user[i];
			len++;
		}
		else {
			// cout << "i: " << i << endl;
			// cout << "len: " << len << endl;
			user_info[1][i - len - 1] = user[i];
			if (user[i] == 0) {
				user_info[1][i - len] = 0;
				toggle = 0;
				break;
			}
		}
	}
	return user_info;
}

void q8() {
	// 8. ����ڷκ��� �̸��� ���̸� ������ ���Ŀ� ���缭 �ϳ��� ���ڿ���
	// �Է¹޽��ϴ�.
	// ȫ�浿 32
	// �Ӳ��� 17
	// �׷��� �̸��� ���� ���̿��� ������ ���ԵǾ�� �մϴ�.
	char user1[20], user2[20];
	cout << "����� 1 �Է�: ";
	fgets(user1, 20, stdin);
	setvbuf(stdin, NULL, _IOLBF, 20);
	cout << "����� 2 �Է�: ";
	fgets(user2, 20, stdin);
	setvbuf(stdin, NULL, _IOLBF, 20);
	// �̸��� ���̰� ������ �ٸ��� �Ǵ��Ͽ� ����ϴ� ���α׷��� �ۼ��ϼ���.
	char **user1_info = strsplit(user1);
	char **user2_info = strsplit(user2);

	cout << "����� 1 �̸�: " << user1_info[0] << endl;
	cout << "����� 1 ����: " << user1_info[1] << endl;

	cout << "����� 2 �̸�: " << user2_info[0] << endl;
	cout << "����� 2 ����: " << user2_info[1] << endl;
	
	int len = 0;
	while (len < 10) {
		if (user1_info[0][len] == 0 && user2_info[0][len] == 0) {
			cout << "����� 1�� ����� 2�� �̸��� �����ϴ�." << endl;
			break;
		}
		len++;
		if (user1_info[0][len] != user2_info[0][len]) {
			cout << "����� 1�� ����� 2�� �̸��� �ٸ��ϴ�." << endl;
			break;
		}
	}

	len = 0;
	while (len < 10) {
		if (user1_info[1][len] == 0 && user2_info[1][len] == 0) {
			cout << "����� 1�� ����� 2�� ���̰� �����ϴ�." << endl;
			break;
		}
		len++;
		if (user1_info[1][len] != user2_info[1][len]) {
			cout << "����� 1�� ����� 2�� ���̴� �ٸ��ϴ�." << endl;
			break;
		}
	}

	free(user2_info[1]);
	free(user2_info[0]);
	free(user2_info);

	free(user1_info[1]);
	free(user1_info[0]);
	free(user1_info);
}


int main() {
	// q1();
	// q2();
	// q3();
	// q4();
	// q5();
	// q6();
	// q7();
	q8();
}