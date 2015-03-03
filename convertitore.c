/*

Dato un numero decimale compreso nell'intervallo 0-255 convertirlo in binario

*/

#include<stdio.h>
#include<stdlib.h>
//Dichiarazione costante contenente il numero di bit del numero
const int bit=8;
main()
{
	//Dichiarazione variabili necessarie al funzionamento del programma
	int i;
	int numero,binario[bit];
	//Inserimento in input del numero da convertitore
	do
	{
		printf("Inserire il numero decimale che si vuol convertire (0-255): ");
		scanf("%d",&numero);
		if(numero>255)
		{
			printf("\n\n");
			printf("ERRORE! I numeri devono essere compresi nell'intervallo 0-255! Riprovare");
			printf("\n\n");
		}
	}
	while(numero>255);
	
	//Calcolo del numero binario
	for(i=0;i<bit;i++)
	{
		binario[i]=numero%2;
		numero=numero/2;
	}
	//Comunicazione in output del numero binario
	printf("Numero convertito in binario: ");
	printf("\n\n");
	for(i=bit-1;i>=0;i--)
	{
		printf("%d",binario[i]);
	}
}
