#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    int y = 0;
    for (int i = 0; i < N; i++) {
        int z;
        scanf("%d", &z);

        if (z <= X) {
            y =y+z;
        }
    }

    printf("%d\n", y);
    return 0;
}

