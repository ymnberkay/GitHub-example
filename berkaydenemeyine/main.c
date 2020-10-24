#include<stdio.h>
#include<stdlib.h>
int main(){
    float a,b,c,x;
        printf("Lutfen a,b,c,x degerlerini sirasiyla giriniz \n");
           scanf("%f%f%f%f",&a,&b,&c,&x);
    float sonuc=a*x*x+b*x+c ;
    printf("DEGERI : %f",sonuc);
    return 0;
}
