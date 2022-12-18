#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;

    for (int i = 2; i <= N; i++) {
        int x = i;

        while (x % 5 == 0) {
            x /= 5;
            cnt++;
        }
    }

    cout << cnt << '\n';
    
    return 0;
}