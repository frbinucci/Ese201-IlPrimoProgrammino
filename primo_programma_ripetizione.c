/*
	Data una serie di numeri inseriti in input dall'utente comunicare:
	1)La somma dei numeri positivi.
	2)La somma dei numeri negativi.
	3)Se il modulo della somma dei positivi è uguale al modulo della somma dei negativi.
	4)La percentuale di numeri pari.
	5)La percentuale di numeri dispari.
*/
#include<stdio.h>
#include<stdlib.h>
main ()
{
	 //Dichiarazione delle variabili necessarie al funzionamento del programma
     int n,numero,c,cp,cn,cpari,cdispari,sommap,somman;
     float percp,percd;
     //Inizalizzazione accumulatori e contatori
     c=0;
     cp=0;
     cn=0;
     cpari=0;
     cdispari=0;
     sommap=0;
     somman=0;
     //Inserimento in input del numero di numeri con controllo dell'input
     do
     {
     		printf("Quanti numeri si vogliono inserire?: ");
     		scanf("%d",&n);
    	 	printf("\n\n");
    	 	if(n<=0)
    	 	{
    	 		printf("ERRORE! Inserire valori positivi!");
    	 		printf("\n\n");
			}	
	 }
	 while(n<=0);
     //Ciclo iterativo postcondizionale
     do
     {
     				//Inserimento di un numero
                    printf("Inserisci numero: ");
                    scanf("%d",&numero);
                    /*Se il numero è maggiore di 0 verrà incrementato il contatore "cp" e aggiornato il valore
                    dell'accululatore "sommap"*/
     				if (numero>=0)
    			 	{
                   		cp=cp+1;
                   		sommap=sommap+numero;
     				}
     				/*Se il numero è minore di 0 verrà incrementato il contatore "cn" e aggiornato il valore
                    dell'accululatore "somman"*/
     				else
     				{
         				cn=cn+1;
         				somman=somman+numero;
     				}
     				//Se il numero è pari verrà incrementato il contatore "cpari"
     				if (numero%2==0)
     				{
                     	cpari=cpari+1;
     				}
     				//Se il numero è dispari verrà incrementato il contatore "cdispari"
     				else
     				{
     				    cdispari=cdispari+1;
     				}				
     				c=c+1;
     }
     while(c<n);
     //Comunicazione in outptu della somma dei numeri positivi
     printf("\n\n");
     printf("La somma dei numeri positivi e' uguale a: %d",sommap);
     printf("\n\n");
     //Comunicazione in output della somma dei numeri negativi
     printf("La somma dei numeri negativi e' uguale a: %d",somman);
     printf("\n\n");
     //Comunicazione in output se la somma dei positivi è maggiore, minore o uguale alla somma dei negativi
     if ((sommap)==(somman*(-1)))
     {
                            printf("Il modulo della somma dei numeri negativi e' uguale al modulo della somma dei numeri negativi");
     }
     else
     {
         if((sommap)>(somman*(-1)))
     {
         printf("Il modulo della somma dei numeri positivi e' maggiore del modulo della somma dei numeri negativi");
     }
     else
     {
         printf("Il modulo della somma dei numeri negativi e' maggiore del modulo della somma dei numeri positivi");
     }
     }
     //Calcolo della percentuale di numeri pari
     percp=((cpari*100)/n);
     //Calcolo della percentuale di numeri dispari
     percd=((cdispari*100)/n);
     printf("\n\n");
     //Comunicazione in output della percentuale di numeri pari
     printf("Percentuale pari %f",percp);
     printf("\n\n");
     //Comunicazione in output della percentuale di numeri dispari
     printf("Percentuale dispari %f",percd);
     printf("\n\n");
     }
                            
