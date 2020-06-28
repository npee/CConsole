#include <iostream>
using namespace std;

void q1() {
	// 1. 길이가 5인 int형 배열을 선언해서 5개의 정수를 입력받습니다.
	int n_array[5];
	double sum = 0;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "번째 정수 입력:";
		cin >> n_array[i];
		cout << endl;
		sum += n_array[i];
	}
	cout << "입력받은 배열: { ";
	for (int i = 0; i < 5; i++) {
		cout << n_array[i] << " ";
	}
	cout << "}" << endl;

	// Bubble sort - 실행할 때 마다 최대값을 뒤에서부터 쌓음
	for (int i = 4; i > 0; i--) {
		for (int j = 0; j < i; j++) { 
			if (n_array[j] > n_array[j + 1]) {
				int temp = n_array[j];
				n_array[j] = n_array[j + 1];
				n_array[j + 1] = temp;
			}
		}
	}
	cout << "버블 정렬: { ";
	for (int i = 0; i < 5; i++) {
		cout << n_array[i] << " ";
	}
	cout << "}" << endl;

	// 이중 최대값, 최소값, 총합, 평균을 구하세요.
	cout << "최대값: " << n_array[4] << endl;
	cout << "최소값: " << n_array[0] << endl;
	cout << "총합: " << sum << endl;
	cout << "평균: " << sum / 5 << endl;
}

void q2() {
	// 2. char형 1차원배열을 선언 후 "Good Morning"로 초기화 하세요.
	char str[] = "Good Morning";
	// 그리고 문장을 출력하세요.
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
	// 3. 영단어를 입력받고 영단어를 역순으로 뒤집으세요.
	// 단, 널값은 그대로여야 합니다.
	char tempStr[100];

	cout << "단어 입력: ";
	cin >> tempStr;

	cout << "단어: " << tempStr << endl;

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





// 4. 길이가 5인 int형 배열 arr을 선언하고
// 1, 2, 3, 4, 5로 초기화한다.
// 마지막 요소를 가리키는 ptr을 선언하고
// ptr을 감소하는 연산으로 배열의 요소를 모두 더하여 결과를
// 출력한다.

// 5. 길이가 6인 배열 arr 1, 2, 3, 4, 5, 6 으로 초기화한 다음
// 배열에 저장된 값의 순서를 6, 5, 4, 3, 2, 1로 변경한다.
// 배열의 앞과 뒤를 가리키는 포인터 변수 2개를 선언해서
// 이를 활용하여 저장된 값의 순서를 바꿔야 한다.

// 6. 숫자를 포함한 문자열을 입력받아서 그 안에 존재하는 숫자의 총합을
// 구하세요.

// 예를 들어 q1df3kf9lj3의 경우는
// 1 + 3 + 9 + 3을 출력해야 합니다.

// 7. 20byte char 배열 3개를 만듭니다.
// 배열에 문자열을 두개를 입력받습니다.
// 나머지배열에 두개의 문자열을 연결하여 붙여넣습니다.
// 즉 korea, student를 입력받았다면
// 세번째 배열에는 koreastudent가 저장되어 출력하여야 합니다.


// 8. 사용자로부터 이름과 나이를 다음의 형식에 맞춰서 하나의 문자열로
// 입력받습니다.
// 홍길동 32
// 임꺽정 17
// 
// 그래서 이름과 나이 사이에는 공백이 삽입되어야 합니다.
// 이름과 나이가 같은지 다른지 판단하여 출력하는 프로그램을 작성하세요.
