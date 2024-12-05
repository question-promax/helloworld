#include <stdio.h>

int sum(int x) {
    int sum = 0;
    while (x!= 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int result = sum(n);
    printf("%d\n", result);
    return 0;
}
