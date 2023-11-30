# include <stdio.h>
int main ( ) {
int i ;
for ( i =1 ; i <= 100 ; i *=100) {
if ( i ==30 ) {
break ;
}
else {
printf ("%2d\n" ,2* i ) ;
}
}
printf ("Fim do laco !\n") ;
return 0;
}

//Irá entrar na condição else, pois o i não será igual a 30, //pois vai acabar valendo 100 e entra na condição else que 
//irá acabar sendo multiplicado por 2 e assumindo o valor //igual a 200 e será impresso no laço.