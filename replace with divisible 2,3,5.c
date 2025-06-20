#include <stdio.h>

int x(long long n) {
    int steps = 0;

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
            steps++;
        } else if (n % 3 == 0) {
            n = (2 * n) / 3;
            steps++;
        } else if (n % 5 == 0) {
            n = (4 * n) / 5;
            steps++;
        } else {
            return -1;
        }
    }

    return steps;
}

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        long long n;
        scanf("%lld", &n);
        int result = x(n);
        if (result == -1)
            printf("-1\n");
        else
            printf("%d\n", result);
    }

    return 0;
}

