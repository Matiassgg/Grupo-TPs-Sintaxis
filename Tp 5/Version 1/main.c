//////////////////////////////////////////////////////////////////////////////////////
/*
      TP5-2020-"Front end de compilador del lenguaje mini"
      Grupo 03

      Matias Gabriel Grillo - 16-7053-0
      Julieta Bertachi      - 16-4393-9
      Leonardo M. Hanashiro - 16-3876-2
*/                                                             
//////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include "parser.h"

int main(void)
{	
	switch( yyparse() ) {
		case 0: printf("\n\nCompilación terminada con éxito");
			break;		
		case 1: printf("\n\nErrores de compilación");
			break;
		case 2: printf("\n\nNo hay memoria suficiente");
			break;		
		}
	printf("\n\nErrores sintácticos: %d - Errores lexicos: %d - Errores Semánticos: %d\n", yynerrs, errlex, errSemanticos);

	return 0;		
}
