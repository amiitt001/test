#include<stdio.h>
#include<math.h>

void square(int n);
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("%f", pow(n, 2));
    return 0;
}