// ZJ j063 Cubes
// undone
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(int argc, char const *argv[]) {

    int N;
    while (scanf("%d", &N) && N != 0) {
        int x = 0, y = 0;
        
        while (1) {
            x++;
            if(N < pow(x, 3)) {
                break;
            }
            
        }

        while (1) {
            y++;
            if(N == (pow(x, 3) - pow(y, 3))){
                printf("%d %d\n", x, y);
                break;
            }
            printf("%d %d\n", x, y);
            if (x == y) {
                printf("No solution\n");
                break;
            }
        }

    }

    return 0;
}