#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int minPari = 7;
    int maxDispari = -1;

    if (a % 2 == 0 && a < minPari) minPari = a;
    if (a % 2 != 0 && a > maxDispari) maxDispari = a;

    if (b % 2 == 0 && b < minPari) minPari = b;
    if (b % 2 != 0 && b > maxDispari) maxDispari = b;

    if (c % 2 == 0 && c < minPari) minPari = c;
    if (c % 2 != 0 && c > maxDispari) maxDispari = c;


    if (minPari <= 6) {
        printf("%d\n", minPari);
    } else {
        printf("NO\n");
    }

    if (maxDispari >= 0) {
        printf("%d\n", maxDispari);
    } else {
        printf("NO\n");
    }

    return 0;
}

