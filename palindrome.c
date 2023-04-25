#include<stdio.h>
#include<conio.h>
int main(){
    // 12321
    int n ,s=0, a ,r;
    printf ("enter the value of n:");
    scanf ("%d",&n);
    a=n;
    while (n>0){
        r=n%10;
        s=r+(s*10);
        n=n/10;
        
    }
    if (s==a){
            printf ("palindrome");
        }
        else{
            printf ("not palindrome");
        }
}