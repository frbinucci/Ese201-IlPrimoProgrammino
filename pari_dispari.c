/*
	
	Dato un vettore di interi, di lunghezza definita dall'utente, comunicare quanti sono gli elementi pari
	e quanti sono gli elementi dispari.

*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	  //Dichiarazione della variabile intera "numero", necessaria a dimensionare i vettori
	  int numero;
	  //Inserimento in input della dimensione del vettore con controllo dell'input
	  do
	  {
	  		printf("Inserire la dimensione del vettore: ");
	  		scanf("%d",&numero);
	  		printf("\n\n");
	  		if(numero<=0)
	  		{
	  			printf("ERRORE! Dimensione non valida!");
	  			printf("\n\n");
			}
	  }
	  while(numero<=0);
	  //Dichiarazione delle variabili necessarie al funzionamento del programma
      int vet[numero],i;
      //Caricamento del vettore
      for (i=0;i<numero;i++)
      {
          printf("Inserire il valore n. %d del vettore: ",i+1);
          scanf("%d",&vet[i]);
      }
      printf("\n\n");
      //Comunicazione in output degli elementi pari nel vettore
      printf("I numeri pari sono: ");
      for (i=0;i<numero;i++)
      {
          if (vet[i]%2==0)
          {
                          printf("Elemento pari n.%d: %d ",i+1,vet[i]);
          }
      }
      printf("\n\n");
      //Comunicazione in output degli elementi dispari nel vettore
      printf("I numeri dispari sono: ");
      for(i=0;i<numero;i++)
      {
          if(vet[i]%2!=0)
          {
                         printf("Elemento dispari n.%d: %d ",i+1,vet[i]);
          }
      }
    printf("\n\n");
}

