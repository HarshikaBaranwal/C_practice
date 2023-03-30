#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    printf ("enter the value of a&b:");
    scanf ("%d%d",&a, &b);
    if(a>b){
        printf ("%d is largest number", a);
    }
        else {
          printf ("%d is largest number", b);  
        }
    
}