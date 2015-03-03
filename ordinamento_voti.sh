#!/bin/bash

#Inserimento in input del numero di studenti
echo -n 'Inserire il numero di studenti:  '
read n

#Se viene inserito un numero minore o uguale a 0 lo script genererà un errore e restituirà exit code 1

if [ $n -le 0 ]
then
	echo 'Errore! Dimensione non valida!'
	exit 1
fi

#Ciclo di caricamento del vettore contenente i nomi e del vettore contenente i voti degli studenti
for((i=1;i<=n;i++))
do
	echo -n "Inserire il nome dello studente n.$i: "
	read studenti[$i]
	echo -n "Inserire il voto riportato a informatica dallo studente n.$i: "
	read voti[$i]
	echo
done
#Cicli nidificati necessari all'ordinamento dei due vettori
for((i=1;i<=n-1;i++))
do
	for((j=$(($i+1));j<=n;j++))
	do
		if [ ${voti[i]} -gt ${voti[j]} ]
		then
			scambioInt=${voti[i]}
			voti[$i]=${voti[j]}
			voti[$j]=$scambioInt
			scambioChar=${studenti[i]}
			studenti[$i]=${studenti[j]}
			studenti[$j]=$scambioChar
		fi
	done
done

#Comunicazione in output dei vettori ordinati
echo -n 'Risultati ordinati in ordine crescente di voto: '
echo
for((i=1;i<=n;i++))
do
	echo "$i)Alunno: ${studenti[i]}, con voto: ${voti[i]}"
done

exit 0

