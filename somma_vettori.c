/*
	Dati due vettori A e B di lunghezza scelta dall'utente assegnare ad un vettore C la somma
	degli elementi di indice corrispondente dei vettori A  e B
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	  //Dichiarazione della variabile "numero", necessaria al dimensionamento dei vettori
	  int numero;
	  //Inserimento in input della dimensione dei vettori
	  do
	  {
	  		printf("Inserire la dimensione dei vettori: ");
	  		scanf("%d",&numero);
	  		printf("\n\n");
	  		if(numero<=0)
	  		{
	  			printf("ERRORE! Dimensione non valida!");
	  			printf("\n\n");
			}
	  }
	  while(numero<=0);
	  
	  //Dichiarazione delle altre variabili necessarie al funzionamento del programma
      int a[numero],b[numero],c[numero],i;
      //Caricamento dei vettori "A" e "B"
      for(i=0;i<numero;i++)
      {
                       printf("Inserire il valore n. %d del vettore A: ",i+1);
                       scanf("%d",&a[i]);
                       printf("Inserire il valore n. %d del vettore B: ",i+1);
                       scanf("%d",&b[i]);
      }
      printf("\n\n");
      //Calcolo della somma nel vettore "C"
      for (i=0;i<numero;i++)
      {
                        c[i]=a[i]+b[i];
      }
      //Comunicazione in output dei valori memorizzati nel vettore "C"
      printf("Elementi del vettore C: ");
      printf("\n");
      for (i=0;i<numero;i++)
      {
                        printf("\nIl valore n. %d di C e': %d",i+1,c[i]);
      }
      printf("\n\n");
}
      
          
                       
