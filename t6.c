#include<stdio.h>

void calculatevalue(float value);
int main(){
    float value = 100.0;
    calculatevalue(value);
    printf("value is : %f", value);
    return 0;
}
void calculatevalue(float value){
    value = value + (0.18*value);
    printf("Final value : %f\n", value);
}