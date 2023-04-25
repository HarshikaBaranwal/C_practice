#include<stdio.h>
 
int main(){
    int i=2, n, sum=0;
    printf ("enter n:");
    scanf ("%d", &n);
   
        while(i<=n){
            sum= sum +i;
            i=i+2;
        }
    
    printf ("sum is:%d", sum);
}
