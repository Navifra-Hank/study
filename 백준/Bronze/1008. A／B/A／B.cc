#include <iostream>
#include <cstdio> // printf를 사용하기 위해 필요

int main() {
    double A, B;
    std::cin >> A >> B;

    // A / B 결과를 소수점 15자리까지 출력
    printf("%.15f\n", A / B);

    return 0;
}
