// esVerifica.cpp: definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

/*
Pubblicare sul proprio account GITHUB un repository generato localmente che contenga un 
file main.cpp ( un programma C che esegue un ciclo da 1 a 10 e visualizzi in output la 
variabile contatore ) . Il repository dovrà contener il branch "FIX_BUG" oltre al master e 
dovrà avere più commit su entrambi i rami del repository. Alla fine dovrà essere fatto il 
merge sul master e generare un conflitto tra i due rami ( mantenere il conflitto nel commit finale ).
Inserire nella risposta il link al repository ed aggiungermi ( gianlucabraccini) come collaboratore.
*/

int main()
{
	int c = 3;
	for (int i = 1; i <= 10; i++) {
		cout << c++;
	}
    return 0;
}

