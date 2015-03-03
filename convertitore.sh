#!/bin/bash
#Definizione del numero di bit del numero
bit=8
#Inserimento in input del numero da convertire
echo -n 'Inserire il numero che si vuole convertire (0-255): '
read numeroDecimale
#Se il numero inserito supera 255 viene restituito un messaggio di errore e lo script retituirà
#l'exit code "1"
if [ $numeroDecimale -gt 255 -o $numeroDecimale -lt 0 ]
then
	
	echo
	echo 'ERRORE! I numeri devono essere compresi tra 0 e 255! Riprovare'
	echo
	exit 1
fi

#Ciclo atto alla conversione del numero inserito dall'utente in binario
for ((i=1;i<=bit;i++))
do
	numeroBinario[$i]=$(($numeroDecimale % 2))
	numeroDecimale=$(($numeroDecimale/2))
done

#Comunicazione in output del numero convertito in binario
echo
echo -n 'Numero convertito in binario: '

while [ $i -gt 0 ]
do
	echo -n "${numeroBinario[i]}"
	i=$(($i-1))
done

echo

exit 0