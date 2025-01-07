#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; // 시험 본 과목 수
    cin >> n;

    vector<double> scores(n); // 성적을 저장할 벡터
    double max_score = 0;     // 최대 점수

    // 성적 입력 및 최대 점수 찾기
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
    }

    // 새로운 점수 계산 및 합 구하기
    double sum = 0;
    for (int i = 0; i < n; i++) {
        scores[i] = (scores[i] / max_score) * 100;
        sum += scores[i];
    }

    // 새로운 평균 출력
    cout << fixed;
    cout.precision(6); // 소수점 6자리까지 출력
    cout << sum / n << endl;

    return 0;
}
