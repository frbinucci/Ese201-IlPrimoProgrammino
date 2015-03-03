/*

	Dati N dipendenti dei quali sono noti lo stipendio e gli anni di anzianità nell'azienda calcolare, secondo
	il seguente prospetto, il premio corrispondente:
	1)Dipendenti con anzianità maggiore di 3: premio uguale a 2 volte lo stipendio.
	2)Dipendneti con anzianità maggiore di 10: premio uguale a 3 volte lo stipendio.
	3)Dipendenti con anzianità maggiore di 20: premio uguale a 4 volte lo stipendio.
	Calcolare e comunicare:
	1)L'ammontare complessivo dei premi.
	2)Il numero di dipendenti che hanno ricevuto il massimo premio.
	
*/

#include<stdio.h>
#include<stdlib.h>
//Dichiarazione delle costanti necessarie al calcolo del premio
const float f1=2;
const float f2=3;
const float f3=4;
main()
{
	  //Dichiarazione della variabile "n", necessaria al dimensionamento dei vettori
	  int n;
	  //Inserimento in input del numero di dipendenti (dimensione dei vettori) con controllo dell'input
	  do
	  {
	  		printf("Inserire il numero di dipendenti: ");
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
      int anz[n],i,cp;
      float stip[n],prem[n],pcomp;
      //Inizializzazione dei contatori e degli accumulatori
      cp=0;
      pcomp=0;
      //Carimento dei vettori "stip" e "anz"
      for (i=0;i<n;i++)
      {
          printf("Inserire lo stipendio del dipendente n. %d: ",i+1);
          scanf("%f",&stip[i]);
          printf("Inserire gli anni di anzianita' del dipendente n. %d: ",i+1);
          scanf("%d",&anz[i]);
          printf("\n\n");
      }
      printf("\n\n");
      //Calcolo dei premi
      for (i=0;i<n;i++)
      {
          if(anz[i]>3)
          {
                      if(anz[i]>10)
                      {
                                   if(anz[i]>20)
                                   {
                                                cp=cp+1;
                                                prem[i]=stip[i]*f3;
                                   }
                                   else
                                   {
                                                prem[i]=stip[i]*f2;
                                   }
                      }
                      else
                      {
                                   prem[i]=stip[i]*f1;
                      }
          }
          else
          {
                      prem[i]=0;
          }
          pcomp=pcomp+prem[i];
      }
      /*Comunicazione in output dell'ammontare complessivo dei premi e del numero di dipendenti che hanno 
	  ricevuto il premio massimo
      */
      printf("L'ammontare complessivo dei premi e': %-8.2f",pcomp);
      printf("\n\n");
      printf("Il numero di dipendenti che hanno ricevuto il premio massimo e': %d",cp);
      printf("\n\n");
}

