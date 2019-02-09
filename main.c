#include <stdio.h>

int main() {
    int iters = 0;
    int size;

    printf("Укажжите высоту треугольника(в количестве строк;)):\n");
    scanf("%d", &size);

    while (iters < size) {
        // если вкратце, то суть такая: в центре каждого ряда всегда рендерится ^, плюс по одному соседнему ^ справа и слева за каждую итерацию.
        for (int i = 0; i < (size * 4) + 1; i++) {
            if ((size * 4) / 2 == i) {
                printf("^");
            } else if (
                    ((((size * 4) / 2 - iters - 1) < i) && (i <= (size * 4) / 2)) ||
                    ((((size * 4) / 2 + iters + 1) > i) && (i >= (size * 4) / 2))
                    ) {
                printf("^");
            } else {
                printf(" ");
            }
        }

        printf("\n");

        iters++;
    }

    return 0;
}