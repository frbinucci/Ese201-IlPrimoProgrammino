#!/bin/bash

#Inserimento in input del numero di numeri da inserire
echo -n 'Quanti numeri si vogliono inserire?: '
read numeri
echo

if [ $numeri -le 0 ]
then
	echo 'ERRORE! Inserire solo numeri positivi!'
	exit 1
fi

#Inizializzazione dei contatori e degli accumulatori
contaPositivi=0
contaNegativi=0
contaPari=0
contaDispari=0
sommaNegativi=0
sommaPositivi=0

#Ciclo iterativo 
for ((i=1;i<=$numeri;i++))
do
	#Inserimento di un numero
	echo -n 'Inserire il numero: '
	read num
	#Se il numero è maggiore di 0 verrà incrementato il contatore "cp" e aggiornato il valore
    #dell'accululatore "sommap"
	if [ $num -ge 0 ]
	then
		contaPositivi=$(($contaPositivi+1))
		sommaPositivi=$(($sommaPositivi+$num))
	#Se il numero è minore di 0 verrà incrementato il contatore "cn" e aggiornato il valore
    #dell'accululatore "somman"
	else
		contaNegativi=$(($contaNegativi+1))
		sommaNegativi=$(($sommaNegativi+$num))
	fi
	#Se il numero è pari verrà incrementato il contatore "cpari"
	if [ $(($num % 2 )) -eq 0 ]
	then
		contaPari=$(($contaPari+1))
	#Se il numero è dispari verrà incrementato il contatore "cdispari"
	else
		contaDispari=$(($contaDispari+1))
	fi
done

#Comunicazione in outptu della somma dei numeri positivi
echo
echo "La somma dei numeri positivi e' uguale a: $sommaPositivi"
#Comunicazione in output della somma dei numeri negativi
echo
echo "La somma dei numeri negativi e' uguale a: $sommaNegativi"
echo
#Comunicazione in output se il modulo della somma dei positivi è maggiore, minore o uguale alla somma dei negativi
if [ $sommaPositivi -eq $(($sommaNegativi*-1)) ]
then
	echo "Il modulo della somma dei numeri negativi e' uguale al modulo della somma dei numeri negativi"
else
	if [ $sommaPositivi -gt $(($sommaNegativi*-1)) ] 
	then
		echo "Il modulo della somma dei numeri positivi e' maggiore del modulo della somma dei numeri negativi"
	else
		echo "Il modulo della somma dei numeri negativi e' maggiore del modulo della somma dei numeri positivi"
	fi
fi
#Calcolo della percentuale di numeri pari
percentualePari=$(($contaPari*100/$numeri))
#Calcolo della percentuale di numeri dispari
percentualeDispari=$(($contaDispari*100/$numeri))
#Comunicazione in output della percentuale di numeri pari
echo
echo "La percentuale dei numeri pari e': $percentualePari"
#Comunicazione in output della percentuale di numeri dispari
echo
echo "La percentuale dei numeri dispari e': $percentualeDispari"

exit 0	