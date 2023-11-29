#include <stdio.h>

int main(){
int x,y;
printf("Hello world\n");


 printf("Escolha o número de casas do array: ");

scanf("%d", &x);

int v[x];

printf("defina os valores do array:\n");

for(y = 0; y<x ; y++){

scanf("%d", &v[y]);

}

printf("valores do array invertidos:\n");

for(y = x -1; y >= 0 ; y-- ){

printf("%d\n", v[y]);

}

return 0;

}