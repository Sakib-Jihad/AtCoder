#include <stdio.h>

int x(int n) {
    if (n % 3 == 0 || n % 10 == 3)
        return 0;
    return 1;
}

int y(int k) {
    int count = 0, num = 0;
    while (count < k) {
        num++;
        if (x(num)) {
            count++;
        }
    }
    return num;
}

int main() {
    int t, k;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &k);
        printf("%d\n", y(k));
    }
    return 0;
}

