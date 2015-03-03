#!/bin/bash
#Inserimento in input della dimensione del vettore
echo -n 'Inserire la dimensione del vettore: '
read numero
echo
#Se la dimensione è minore o uguale a 0 viene restituito un messaggio di errore e lo script genererà
#l'exit code 1
if [ $numero -le 0 ]
then
	echo 'ERRORE! Dimensione inserita non valida!'
	exit 1
fi

#Caricamento del vettore
for ((i=1;i<=numero;i++))
do
	echo -n  "Inserire il valore n. $i del vettore: "
	read vet[$i]
done
#Comunicazione dei valori pari nel vettore
echo 
echo
echo 'I numeri pari sono: '
echo

for ((i=1;i<=numero;i++))
do
if [ $((${vet[i]} % 2 )) -eq 0 ]  
	then
		echo "Elemento pari n.$i: ${vet[i]}"
	fi
done
#Comunicazione dei valori dispari nel vettore
echo 
echo
echo 'I numeri dispari sono: '
echo

for ((i=1;i<=numero;i++))
do
if [ $((${vet[i]} % 2 )) -gt 0 ]  
	then
		echo "Elemento dispari n.$i: ${vet[i]}"
	fi
done	

exit 0	