#include <stdio.h>

class InfinitySequence2{
    public:
    long long calc(long n, int p, int q, int x, int y) {
        if(n <= 0) return 1;
        return calc(n/p - x, p, q, x, y) + calc(n/q - y, p, q, x, y);
    }
};

int main() {
    InfinitySequence2 infinitySequence;
    // long long answer = infinitySequence.calc(10000000, 2, 3, 10000000, 10000000);
    // long long answer = infinitySequence.calc(12, 2, 3, 1, 0);
    // long long answer = infinitySequence.calc(0, 2, 2, 0, 0);
    long long answer = infinitySequence.calc(124, 45, 67, 8, 9);
    printf("%lld\n", answer);
    return 0;
}