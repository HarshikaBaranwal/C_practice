#include<stdio.h>
#include<conio.h>
int main(){
    int a=0, b=1, c=2, n, d;
    printf("enter the value of n:");
    scanf ("%d",&n);
    for(int i=1; i<=n; i++){
        d=a+b+c;
        printf ("%d",d);
        a=b;
        b=c;
        c=d;
    }
}