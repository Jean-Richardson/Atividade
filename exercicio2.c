# include <stdio.h>

int f (int mat [3][3]) {
return ( mat [0][0]* mat [1][1]* mat [2][2]) + ( mat [0][1]* mat [1][2]* mat [2][0]) + (
mat [0][2]* mat [1][0]* mat [2][1]) - ( mat [0][1]* mat [0][1]* mat [2][2]) - ( mat
[0][0]* mat [1][2]* mat [2][1]) - ( mat [0][2]* mat [1][1]* mat [2][0]) ;
}
  
int main ( void ) {
int m [3][3]={{0 ,1 ,0} ,{3 ,1 , -1} ,{4 ,0 ,1}};
int de = f ( m ) ;
printf (" Resultado = \t %d", de ) ;
return 0;
}

//O programa tem uma função que recebe como parametro matriz 3x3 e faz algumas 
//operações matemáticas sobre ela.
//O resultado final das operações é -5