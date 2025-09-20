#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows for the top half: ");
    scanf("%d", &n);

    int nsp, nst;

    // ===== Top half of diamond =====
    for (int i = 1; i <= n; i++) {
        nsp = n - i;        // Leading spaces decrease
        nst = 2 * i - 1;    // Total positions increase

        // Print leading spaces
        for (int s = 1; s <= nsp; s++) printf(" ");

        // Print stars and hollow spaces
        for (int k = 1; k <= nst; k++) {
            if (k == 1 || k == nst) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    // ===== Bottom half of diamond =====
    for (int i = n-1; i >= 1; i--) {
        nsp = n - i;        // Leading spaces increase
        nst = 2 * i - 1;    // Total positions decrease

        // Print leading spaces
        for (int s = 1; s <= nsp; s++) printf(" ");

        // Print stars and hollow spaces
        for (int k = 1; k <= nst; k++) {
            if (k == 1 || k == nst) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}
