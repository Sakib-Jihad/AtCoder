#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int N, K;
        scanf("%d %d", &N, &K);

        int x = N / (K + 1);
        int y = x * K;
        int z = N -y;

        printf("%d\n", z);
    }

    return 0;
}

