#!/bin/bash
#Inserimento in input della dimensione dei vettori
echo -n 'Inserire la dimensione dei vettori: '
read dim
echo

#Se la dimensione è minore o uguale a 0 viene restituito un messaggio di errore e lo script genererà
#l'exit code 1
if [ $dim -le 0 ]
then
	echo 'Errore! Dimensione non valida!'
	exit 1
fi


#Caricamento dei vettori "A" e "B"
for ((i=1;i<=dim;i++))
do
	echo -n "Inserire il valore n. $i del vettore A: "
	read vetA[$i]
	echo -n "Inserire il valore n. $i del vettore B: "
	read vetB[$i]
	vetC[$i]=$((${vetA[i]}+${vetB[i]}))
done

#Comunicazione in output dei vari elementi del vettore "C"
echo

echo 'Elementi del vettore C: '
echo

for ((i=1;i<=dim;i++))
do
	echo "Il valore n. $i di C e': ${vetC[i]}"
done

exit 0