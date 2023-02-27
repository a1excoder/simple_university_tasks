#include <iostream>

int main(void) {
    using namespace std;
    int sum = 0, n = 0;

add:
    cin >> n;

    if (n == 0) cout << sum;
    else {
        sum += n;
        goto add;
    }

    return 0;
}
