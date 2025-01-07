#include <iostream>
using namespace std;

int main() {
    int remainder[42] = {0}; // 42로 나눈 나머지를 저장할 배열 (0으로 초기화)
    int a, count = 0;

    // 입력받은 숫자를 42로 나눈 나머지를 배열에 기록
    for (int i = 0; i < 10; i++) {
        cin >> a;
        int r = a % 42; // 42로 나눈 나머지
        if (remainder[r] == 0) { // 처음 등장한 나머지라면
            remainder[r] = 1; // 해당 나머지를 기록
            count++;          // 서로 다른 나머지의 개수 증가
        }
    }

    // 서로 다른 나머지의 개수 출력
    cout << count << endl;

    return 0;
}