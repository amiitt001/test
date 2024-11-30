#include<stdio.h>

void Namaste();
void Bonjour();

int main(){
    printf("Enter i if Indian and f if frunch");
    char ch,i,f;
    scanf("%c",&ch);
    if (ch == 'i'){
        Namaste();
    }
    else {
        Bonjour();
    }
    return 0;
}
void Namaste(){
    printf("Namaste\n");
}
void Bonjour(){
    printf("Bonjour\n");
}