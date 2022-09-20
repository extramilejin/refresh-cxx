#include<iostream>
using namespace std;

// 01 - 1: printf와 scanf를 대신하는 입출력 방식
// stdio.h, printf, scanf -> iostream, cout, cin, endl;

// 왜 c++에서는 헤더파일의 확장자가 없나요? -> c++에서는 프로그래머가 정의하는 헤더파일의 선언이 아닌 표준 헤더파일의 선언은 확장자를 생략하기로 약속

// cout 뒤에 위치하는 출력 대상에는 정수와 실수를 비롯해서 문자열, 변수가 올 수 있다.

// << 도 연산자 이다.  둘 이상의 데이터 출력에 사용한다

// c++ 데이터의 입력도 데이터의 출력과 마찬가지로 별도의 포맷지정이 필요 없다.

// cin >> 변수1 >> 변수2; 의 형태의 입력은 탭, 스페이스바, 엔터키의 입력, 공백에 의해서 니눠진다. 

void p1() {
    const int MAX_SIZE = 5;
    int arr[MAX_SIZE];
    int sum = 0;
    for(int i = 0; i < MAX_SIZE; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    for(int i = 0; i < MAX_SIZE; ++i) {
        cout << arr[i] << endl;
    }
}

void p2() {
    char name[100];
    char phoneNumber[100];
    cout << "이름 입력:";
    cin >> name;
    cout << "전화번호 입력:";
    cin >> phoneNumber;

    cout << name << " " << phoneNumber << endl;
}

void p3() {
    int num = 0;
    cout << "구구단을 출력할 숫자를 입력하시오:";
    cin >> num;

    if(num < 1 || num > 9) {
        cout << "잘못된 입력입니다." << endl;
        return;
    } 

    for(int mul = 1; mul <= 9; ++mul) {
        cout << num << " x " << mul << " = " << num * mul << endl;
    }
}

void p4() {
    int revenue = 0;
    const int baseSalary = 50;
    while(true) {
        cout << "판내 금액을 만원 단위로 입력(-1 to end): ";
        cin >> revenue;
        if(revenue == -1) {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }
        int totalSalary = baseSalary + revenue * 0.12;
        cout << "이번 달 급여: " << totalSalary << "만원" << endl;
    }
}

int main() {
    p4();

    return 0;
}

