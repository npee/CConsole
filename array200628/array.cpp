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

	while (*str++);
	str--;

	while (iterator < str) {
		tempChar = *iterator;
		*iterator++ = *str;
		*str-- = tempChar;
	}

	return origin;
}

void q3() {
	// _strrev(str);
	// 3. ���ܾ �Է¹ް� ���ܾ �������� ����������.
	// ��, �ΰ��� �״�ο��� �մϴ�.
	char tempStr[100];

	cout << "�ܾ� �Է�: ";
	cin >> tempStr;

	cout << "�ܾ�: " << tempStr << endl;

	char* str = custom_strrev(tempStr);
	cout << str << endl;
}

void q4() {

}

int main() {
	// q1();
	// q2();
	// q3();
	q4();
}





// 4. ���̰� 5�� int�� �迭 arr�� �����ϰ�
// 1, 2, 3, 4, 5�� �ʱ�ȭ�Ѵ�.
// ������ ��Ҹ� ����Ű�� ptr�� �����ϰ�
// ptr�� �����ϴ� �������� �迭�� ��Ҹ� ��� ���Ͽ� �����
// ����Ѵ�.

// 5. ���̰� 6�� �迭 arr 1, 2, 3, 4, 5, 6 ���� �ʱ�ȭ�� ����
// �迭�� ����� ���� ������ 6, 5, 4, 3, 2, 1�� �����Ѵ�.
// �迭�� �հ� �ڸ� ����Ű�� ������ ���� 2���� �����ؼ�
// �̸� Ȱ���Ͽ� ����� ���� ������ �ٲ�� �Ѵ�.

// 6. ���ڸ� ������ ���ڿ��� �Է¹޾Ƽ� �� �ȿ� �����ϴ� ������ ������
// ���ϼ���.

// ���� ��� q1df3kf9lj3�� ����
// 1 + 3 + 9 + 3�� ����ؾ� �մϴ�.

// 7. 20byte char �迭 3���� ����ϴ�.
// �迭�� ���ڿ��� �ΰ��� �Է¹޽��ϴ�.
// �������迭�� �ΰ��� ���ڿ��� �����Ͽ� �ٿ��ֽ��ϴ�.
// �� korea, student�� �Է¹޾Ҵٸ�
// ����° �迭���� koreastudent�� ����Ǿ� ����Ͽ��� �մϴ�.


// 8. ����ڷκ��� �̸��� ���̸� ������ ���Ŀ� ���缭 �ϳ��� ���ڿ���
// �Է¹޽��ϴ�.
// ȫ�浿 32
// �Ӳ��� 17
// 
// �׷��� �̸��� ���� ���̿��� ������ ���ԵǾ�� �մϴ�.
// �̸��� ���̰� ������ �ٸ��� �Ǵ��Ͽ� ����ϴ� ���α׷��� �ۼ��ϼ���.
