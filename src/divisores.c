#include <stdio.h>
#include "divisores.h"

int gera_divisores(unsigned long int num, FILE * arquivo){
	int i = 2;

	if(fprintf(arquivo,"*** Divisores de %d ***\n",(int) num) == 0) return 0;

	if(fprintf(arquivo,"%d\n",1) == 0) return 1;

	for(i=2;i<num;i++) {
		if(num % i == 0 ) {
			if(fprintf(arquivo,"%d\n",i) == 0) return 1;
		}
	}
	if(fprintf(arquivo,"%d\n",(int) num) == 0) return 1;
	return 0;
}
