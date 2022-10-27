//i428: 1. 巴士站牌
#include <stdio.h>
#include <math.h> // abs()
#include <limits.h> // defined: INT_MAX, INT_MIN

int main(int argc, char const *argv[]) {
    int max = INT_MIN;
    int min = INT_MAX;

    int stopNum = 0;
    scanf("%d", &stopNum);

    int x, y;
    scanf("%d %d", &x, &y);
    for (int i = 0; i < stopNum - 1; i++) {
        int x2, y2;
        scanf("%d %d", &x2, &y2);

        // Cal
        int result = abs(x - x2) + abs(y - y2);
        max = (result >= max) ? result : max;
        min = (result <= min) ? result : min;

        // Move
        x = x2;
        y = y2;
    }
    
    printf("%d %d", max, min);

    return 0;
}