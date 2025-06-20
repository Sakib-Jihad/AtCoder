#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);
    while (N % 2 == 0) {
        N /= 2;
    }
    while (N % 3 == 0) {
        N /= 3;
    }

    if (N == 1)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

