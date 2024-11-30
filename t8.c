#include<stdio.h>
#include<math.h>

float area_sq(float a);
float area_cir(float r);
float area_rec(float p, float q);

int main(){
    int a,b,r,p,q;
    printf("enter side of squre : ");
    scanf("%d", &a);
    printf("Enter radias of circle : ");
    scanf("%d",&r);
    printf("enter both sides of rectangle : ");
    scanf("%d%d",&p, &q);
    area_sq(a);
    area_cir(r);
    area_rec(p, q);
    return 0;
}
float area_sq(float a){
    printf("%f\n", pow(a, 2));
}
float area_cir(float r){
    printf("%f\n", 3.14*pow(r, 2));
}
float area_rec(float p, float q){
    printf("%f\n", p*q);
}  
