#include<stdio.h>
#include<conio.h>
int main(){
    int year;
    printf ("enter an year");
    scanf ("%d",&year);
    if(year%4==0&&year%400==0){
        printf("year is a leap year");
    }
    else{
        printf("not a leap year");
    }
}