#!/bin/bash
#Dichiarazione delle costanti necessarie al calcolo del premio
f1=1
f2=3
f3=3
#Inserimento in input del numero di dipendenti
echo -n 'Inserire il numero di dipendenti: '
read numero
echo
if [ $numero -le 0 ]
then
	echo 'Errore! Dimensione non valida!'
	exit 1
fi
#Caricamento dei vettori con i dati relativi allo stipendio e all'anzianità dei dipendenti
for ((i=1;i<=numero;i++))
do 
    echo -n "Inserire lo stipendio del dipendente n. $i: "
    read stipendio[$i]
    echo -n "Inserire gli anni di anzianita' del dipendente n. $i: "
    read anz[$i]
done 
#Inizalizzazione del contatore "contaPremi", necessaria al calcolo del numero di dipendenti
#che hanno ricevuto il premio massimo
contaPremi=0
#Inizializzazione dell'accumulatore "pcomp", necessario al calcolo dell'ammontare complessivo
#dei premi
pcomp=0
#Calcolo dei premi
for ((i=1;i<=numero;i++))
do
if [ ${anz[i]} -gt 3 ]
	then
	if [ ${anz[i]} -gt 10 ]
		then
		if [ ${anz[i]} -gt 20 ]
			then
				contaPremi=$(($contaPremi+1))
				premi[$i]=$(( ${stipendio[i]}*$f3 ))
			else
				premi[$i]=$(( ${stipendio[i]}*$f2 ))
			fi
		else
				premi[$i]=$(( ${stipendio[i]}*$f1 ))
		fi
	else
		premi[$i]=0
	fi
	pcomp=$(( $pcomp+${premi[i]} ))
done

#Comunicazione in output dell'ammontare complessivo dei premi e del numero di dipendenti che
#hanno ricevuto il premio massimo
echo
echo "L'ammontare complessivo dei premi e': $pcomp"
echo "Il numero di dipendenti che hanno ricevuto il premio massimo e': $contaPremi"

exit 0
