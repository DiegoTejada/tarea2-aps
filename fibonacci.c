#include<stdio.h>
//Declaración de la función
int f(int n);
int main(){
    int n, k;
    printf("Numero");
    scanf("%d",n);
    printf("0 1 ");
    for(k=2,k<=n,k++)
        printf("&d&c",f(k),(k%10=0 ? '\n':' '));
    return 0;
}
int f(int n){
  
}
