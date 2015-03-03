/*
		Dati i nomi di N studenti e i voti riportati in informatica da ciascuno di essi, realizzare un programma
		C che consenta di ordinare e comunicare i dati di ciascuno studente in ordine crescente di voto
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{

	  //Dichiarazione della variabile "n", necessaria al dimensionamento dei vettori	
	  int n;
	  //Inserimento in input del numero di studenti con controllo dell'input
	  do
	  {
	  		printf("Inserire il numero di studenti: ");
	  		scanf("%d",&n);
	  		printf("\n\n");
	  		if(n<=0)
	  		{
	  			printf("ERRORE! Dimensione non valida!");
	  			printf("\n\n");
			}
	  }
	  while(n<=0);
	  //Dichiarazione delle altre variabili necessarie al funzionamento del programma
	  int voti[n],i,j,scambioInt;
	  char studenti[n][20],scambioChar[20];
	  /*Ciclo di caricamento dei vettori "studenti" e "voti" contenenti rispettivamente i nomi degli studenti
	  e i voti riportati da ciascuno di essi*/
	  for(i=0;i<n;i++)
	  {
	  		printf("Inserire il nome dello studente n.%d: ",i+1);
	  		scanf("%s",studenti[i]);
	  		printf("Inserire il voto riportato a informatica dallo studente n.%d: ",i+1);
	  		scanf("%d",&voti[i]);
	  		printf("\n");
	  }
	  //Cicli nidificati necessari all'ordinamento
	  for(i=0;i<n-1;i++)
	  {
	  		for(j=i+1;j<n;j++)
	  		{
	  			if(voti[i]>voti[j])
	  			{
	  				scambioInt=voti[i];
	  				voti[i]=voti[j];
	  				voti[j]=scambioInt;
	  				strcpy(scambioChar,studenti[i]);
	  				strcpy(studenti[i],studenti[j]);
	  				strcpy(studenti[j],scambioChar);
	  				
	  			}
			}
	  }
	  //Comunicazione in output dei risultati ordinati
	  puts("Risultati ordinati in ordine crescente di voto: ");
	  printf("\n");
	  for(i=0;i<n;i++)
	  {
	  		printf("%d)Alunno:%s, con voto: %d",i+1,studenti[i],voti[i]);
	  		printf("\n");
	  }
	  printf("\n\n");
 }
 

