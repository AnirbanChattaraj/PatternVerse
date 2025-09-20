//*****
//*   *
//*  *
//* *
//*
#include <stdio.h>

int main() {
    int n;
    printf("Enter your rows: ");
    scanf("%d", &n);

    int nst=n;
    

    for (int i = 1; i <= n; i++) {
        
        for (int k = 1; k <= nst; k++) {
            if (k == 1 || k == nst || i == n || i==1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
           
        nst --;   
    }

    return 0;
}