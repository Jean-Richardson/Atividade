#include <stdio.h>

int soma(int x,int y);

int main(){
int x,y,z;

printf("de os valores a serem usados na soma: \n");

scanf("%d", &x);
scanf("%d", &y);

z = soma(x,y);

printf("o resultado é: %d\n", z);

return 0;
}

int soma(int x,int y){

int c;

c = x+y;

return c;

}
