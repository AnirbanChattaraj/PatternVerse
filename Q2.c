//Print a diamond pattern of numbers.(Odd number of rows)
 //  1
 // 123
 //12345
//1234567
 //12345
  //123
  // 1
#include<stdio.h>
int main(){
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    int nsp=n/2;
    int nst=1; 
   int ml=n/2+1;
    for (int  i = 1; i <=n; i++)
    {
        for (int j = 1; j <=nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=nst; k++)
        {
            printf("%d",k);
        }
        if (i<ml)
        {
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}