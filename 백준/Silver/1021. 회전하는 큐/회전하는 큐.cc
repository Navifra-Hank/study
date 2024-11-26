#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n, find, num;
    cin >> n >> find;

    deque<int> d;
    for (int i = 1; i <= n; ++i) {
        d.push_back(i);
    }

    int count = 0;

    while (find--) {
        cin >> num;

        int index = 0;
        for (int i = 0; i < d.size(); ++i) {
            if (d[i] == num) {
                index = i;
                break;
            }
        }

        if (index < d.size() - index) {
            while (d.front() != num) {
                d.push_back(d.front());
                d.pop_front();
                ++count;
            }
        } else {
            while (d.front() != num) {
                d.push_front(d.back());
                d.pop_back();
                ++count;
            }
        }

        d.pop_front();
    }

    cout << count << endl;

    return 0;
}
