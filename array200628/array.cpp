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
	// 3. 영단어를 입력받고 영단어를 역순으로 뒤집으세요.
	// 단, 널값은 그대로여야 합니다.
	char tempStr[100];

	cout << "단어 입력: ";
	cin >> tempStr;

	cout << "단어: " << tempStr << endl;

	char* str = custom_strrev(tempStr);
	cout << "역순: " << str << endl;
}

void q4() {
	// 4. 길이가 5인 int형 배열 arr을 선언하고
	// 1, 2, 3, 4, 5로 초기화한다.
	int arr[5] = { 1,2,3,4,5 };
	// 마지막 요소를 가리키는 ptr을 선언하고
	int* ptr = arr;
	ptr += sizeof(arr) / sizeof(int) - 1; // 배열의 길이와 상관없이 마지막 값을 가리키도록 일반화(ptr += 4)
	
	// ptr을 감소하는 연산으로 배열의 요소를 모두 더하여 결과를
	// 출력한다.
	int sum = 0;
	while (ptr >= arr) {
		cout << "현재 포인터가 가리키는 값: " << *ptr << endl;
		sum += *ptr;
		*ptr--;
		// 또는 ptr--;
		// (*ptr)--; 는 불가
	}
	cout << "합: " << sum << endl;
}

void q5() {
	// 5. 길이가 6인 배열 arr 1, 2, 3, 4, 5, 6 으로 초기화한 다음
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	// 배열에 저장된 값의 순서를 6, 5, 4, 3, 2, 1로 변경한다.
	int arr_length = sizeof(arr) / sizeof(int); // 배열 길이 일반화
	// 배열의 앞과 뒤를 가리키는 포인터 변수 2개를 선언해서
	int *start = arr;
	int *end = arr + (arr_length - 1);
	// 이를 활용하여 저장된 값의 순서를 바꿔야 한다.
	while (start < end) {
		int temp = *start;
		*start++ = *end;
		*end-- = temp;
	}
	// 배열 출력
	for (int i = 0; i < arr_length; i++) {
		cout << "arr[" << i << "]: " << arr[i] << endl;
	}
}

void q6() {
	// 6. 숫자를 포함한 문자열을 입력받아서 그 안에 존재하는 숫자의 총합을
	// 구하세요.
	// 예를 들어 q1df3kf9lj3의 경우는
	// 1 + 3 + 9 + 3을 출력해야 합니다.
	char str[50];
	cout << "문자열 입력: ";
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

	cout << "문자열: " << str << endl;
	cout << "합 : " << sum << endl;

}

void q7() {
	// 7. 20byte char 배열 3개를 만듭니다.
	char arr1[20], arr2[20], arr3[20];
	// 배열에 문자열을 두개를 입력받습니다.
	cout << "문자열 1: ";
	cin >> arr1;
	cout << "문자열 2: ";
	cin >> arr2;
	// 나머지배열에 두개의 문자열을 연결하여 붙여넣습니다.
	// 즉 korea, student를 입력받았다면
	// 세번째 배열에는 koreastudent가 저장되어 출력하여야 합니다.

	int len1 = 0;
	// arr3으로 arr1 문자열 복사
	while(true) {
		arr3[len1] = arr1[len1];
		len1++;
		if (arr1[len1] == 0) {
			// arr3[len] = '\0';
			break;
		}
		cout << "1복사" << endl;
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
		cout << "2복사" << endl;
	}

	cout << "len1: " << len1 << endl;
	cout << "len2: " << len2 << endl;

	cout << "문자열 1: " << arr1 << endl;
	cout << "문자열 2: " << arr2 << endl;
	cout << "문자열 3: " << arr3 << endl;
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
	// 8. 사용자로부터 이름과 나이를 다음의 형식에 맞춰서 하나의 문자열로
	// 입력받습니다.
	// 홍길동 32
	// 임꺽정 17
	// 그래서 이름과 나이 사이에는 공백이 삽입되어야 합니다.
	char user1[20], user2[20];
	cout << "사용자 1 입력: ";
	fgets(user1, 20, stdin);
	setvbuf(stdin, NULL, _IOLBF, 20);
	cout << "사용자 2 입력: ";
	fgets(user2, 20, stdin);
	setvbuf(stdin, NULL, _IOLBF, 20);
	// 이름과 나이가 같은지 다른지 판단하여 출력하는 프로그램을 작성하세요.
	char **user1_info = strsplit(user1);
	char **user2_info = strsplit(user2);

	cout << "사용자 1 이름: " << user1_info[0] << endl;
	cout << "사용자 1 나이: " << user1_info[1] << endl;

	cout << "사용자 2 이름: " << user2_info[0] << endl;
	cout << "사용자 2 나이: " << user2_info[1] << endl;
	
	int len = 0;
	while (len < 10) {
		if (user1_info[0][len] == 0 && user2_info[0][len] == 0) {
			cout << "사용자 1과 사용자 2의 이름이 같습니다." << endl;
			break;
		}
		len++;
		if (user1_info[0][len] != user2_info[0][len]) {
			cout << "사용자 1과 사용자 2의 이름은 다릅니다." << endl;
			break;
		}
	}

	len = 0;
	while (len < 10) {
		if (user1_info[1][len] == 0 && user2_info[1][len] == 0) {
			cout << "사용자 1과 사용자 2의 나이가 같습니다." << endl;
			break;
		}
		len++;
		if (user1_info[1][len] != user2_info[1][len]) {
			cout << "사용자 1과 사용자 2의 나이는 다릅니다." << endl;
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