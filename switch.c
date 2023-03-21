#include<stdio.h>
#include<conio.h>
int main(){
    int cas, a=2, b=1 ;
    printf("enter a value for case");
    scanf ("%d",&cas);
    switch(cas){
        case 1: a+b;
        printf ("%d",a+b);
        break;
        case 2: a-b;
        printf ("%d",a-b);
        break;
        case 3: a*b;
        printf ("%d", a*b);
        break;
        case 4: a/b;
        printf ("%d", a/b);
        break;
        default: printf ("wrong input");
    }
}