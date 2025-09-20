  // A
  //ABC
 //ABCDE
//ABCDEFG
 //ABCDE
 // ABC
  // A
 #include<stdio.h>
int main(){
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    int nsp=n/2;
    int noa=1; 
   int ml=n/2+1;
    for (int  i = 1; i <=n; i++)
    {
        int a=65;
        for (int j = 1; j <=nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=noa; k++)
        {
            printf("%c",a);
            a++;
        }
        
        if (i<ml)
        {
            nsp--;
            noa+=2;
        }
        else{
            nsp++;
            noa-=2;
        }
        
        printf("\n");
    }
    return 0;
}