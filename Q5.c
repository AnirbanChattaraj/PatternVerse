  //  *
  // * *
  //*   *
 //*******
 #include <stdio.h>

int main() {
    int n;
    printf("Enter your rows: ");
    scanf("%d", &n);

    int nsp = n - 1; 
    int nst = 1;     

    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= nsp; j++) {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++) {
            if (k == 1 || k == nst || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        nsp--;     
        nst += 2;   
    }

    return 0;
}