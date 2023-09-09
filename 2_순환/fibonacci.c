#include <stdio.h>

int fibo(int n);
int fibo_iter(int n);

int main() {
    printf("%d\n", fibo(30));
    printf("%d\n", fibo_iter(30));
}

int fibo(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibo(n - 2) + fibo(n - 1);
    }
}
int fibo_iter(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    int i;
    int pp, p;
    int res;
    res = 0;
    for (i = 2; i < n; i++) {
        res += pp + p;
        pp = p;
        p = res;
    }
    return res;
}