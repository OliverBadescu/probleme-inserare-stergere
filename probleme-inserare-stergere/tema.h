#include "probleme.h"


// FISA


//1) a)todo: Sa se stearga al 3-lea element prim din vector

void sol1() {

	int v[] = { 3, 24, 17, 23, 13, 14 };
	int dim = 6;
	int poz = pozitieElementPrim(v, dim);

	cout << "Vectorul inainte de stergere este V={ ";
	afisare(v, dim);
	cout << "}" << endl;

	cout << "Vectorul dupa stergerea al 3-lea element prim din vector este V={ ";
	stergere(v, dim, poz);
	afisare(v, dim);
	cout << "}" << endl;



}


// b) todo: Sa se stearga toate elemetnele ce au cel putin 2 cifre

void sol2() {

	int v[] = { 3, 24, 17, 23, 13, 14 };
	int dim = 6;
	
	cout << "Vectorul inainte de stergere este V={ ";
	afisare(v, dim);
	cout << "}" << endl;

	cout << "Vectorul dupa stergere este V={ ";
	stergereDouaCif(v, dim);
	afisare(v, dim);
	cout << "}" << endl;
}


// c) todo: Definim operatia de compactare a unui tablou ca fiind eleimnarea zerourilor. Daca intalnim un element nul, toate elementele situate la dreapta sa vor deveni cu o pozitie
// mai in fata, in locul sau.
// ex: Date de intrare: n = 4 vectorul: 9 0 0 5
//	   Date de iesire: n = 2 si vectorul: 9 5          ???


// d) todo: Se citesc 2 numere naturale a si b. Daca a < b, sa se stearaga toate numerele din interavaulul [a, b]

void sol3() {

	int v[] = { 3, 24, 17, 23, 13, 49, 14, 32 };
	int dim = 8;
	int a = 17;
	int b = 49;

	cout << "Vectorul inainte de stergere este V={ ";
	afisare(v, dim);
	cout << "}" << endl;

	cout << "Vectorul dupa stergere este V={ ";
	stergereInterval(v, dim, a ,b);
	afisare(v, dim);
	cout << "}" << endl;


}

// e) todo: Stergeti toate elementele ce au cifra / cifrele de  mijloc un patrat perfect.???

// f) todo: Stergeti toate elementele ce sunt super prime. ???


 // 2) a) todo: Inserati dupa fiecare element negativ, cubul lui. ???

 // b) Inserati dupa al k=lea element ce are cifrele in ordine consecutiva de la stanga la dreapta, rasturnatul lui ???

// c) Inserati intre oricare doua elemente palindorme intre ele, valorea in urma alipirii celui de al doilea umar la primul ???

// d) Inserati dupa al k-lea element cu 3 divizori, suma diviziroilor lui

void sol4() {

	int v[] = { 3, 4, 25, 23, 9, 14 };
	int dim = 6;
	int k = 3;
	int poz = k;
	int key = sumaDivizori(v[k]);

	cout << "Vectorul inainte de inserare este V={ ";
	afisare(v, dim);
	cout << "}" << endl;

	cout << "Vectorul dupa inserare este V={ ";
	inserare(v, dim, poz, key);
	afisare(v, dim);
	cout << "}" << endl;
	

}

// f) Inserati inainte de fieacre numar ce are toate cifrele patrate perfecte, produsul cifrelor lui.

