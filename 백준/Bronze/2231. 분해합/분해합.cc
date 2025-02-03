#include <iostream>
#include <algorithm>  

using namespace std;


int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;

    int min_constructor = 0;

    
    int start = max(1, N - 54); 

    for (int i = start; i < N; i++) {
        if (i + digitSum(i) == N) { 
            min_constructor = i;
            break;
        }
    }

    cout << min_constructor << endl;
    return 0;
}
