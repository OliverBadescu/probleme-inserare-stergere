#include "probleme.h"


// FISA


//1) a)todo: Sa se stearga al 3-lea element prim din vector

void sola() {

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

void solb() {

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

void sold() {

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

void sold2() {

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


// 50 Probleme vectori

// 1) todo: Sa se sorteze prima jumatate a vectorului crescator iar a doua jumatate dewscrescator. Sa se caute in interiorul primei jumatati, pozitiile pe care apare minimul.
// Sa se caute in interiorul celei de a doua jumatati, pozitiile pe care apare maximul ??

void sol1() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 13, 821 };
	int dim = 9;
	int min = indiceMin(v, dim);
	int max = indiceMax(v, dim);

	cout << "Pozitia pe care se afla minimul este: ";

	cautareaBinaraPrima(v, dim, min);

	cout << ";" << endl;

	cout << "Pozitia pe care se afla maximul este: ";

	cautareaBinaraDoi(v, dim, max);

	cout << ";" << endl;
}


// 2) todo: Sa se verifice daca cifra de control a primului element apare in interiorul celei de a doua doua jumatati a vectorului

void sol2() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 61, 821 };
	int dim = 9;

	int cifC = cifraControl(42);

	if (cautareaBinaraDoi(v, dim, cifC) == true) {
		cout << "Cifra de control a primului element apare in a doua jumatate a vectorlui" << endl;
	}
	else {
		cout << "Cifra de control nu apare in a doua jumatate a vectorlui" << endl;
	}

}


// 3) todo: Sa se verifice daca fiecare element din a doua jumatate apare cel putin de doua ori in interiorul primei jumatati a vectorului ???

void sol3() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 61, 821 };
	int dim = 9;

}


// 4) todo: Sa se sorteze vectorul crescator intre [pmin, pmax] daca elementul minim este anterior celui maxim si [pmax, pmin] daca elemenetul maxim este anterior celui de minim.

void sol4() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 61, 821 };
	int dim = 9;

	cout << " Vectorul inainte de sortare este V={ ";
	afisare(v, dim);
	cout << "}" << endl;

	cout << " Vectorul dupa sortare este V={ ";
	sortareIntervalMinMax(v, dim);
	afisare(v, dim);
	cout << "}" << endl;

}


// 5) todo: Sa se verifice daca elementul k apare in intervalul [pmin, pmax]. Sa se afiseze un mesaj corespunzator 

void sol5() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 61, 821 };
	int dim = 9;
	int k = 21;

	if (cautareaBinaraMinMax(v, dim, k) == true) {
		cout << k << " apare in intervalul [pmin, pmax]" << endl;
	}
	else {
		cout << k << " nu apare in intervalul [pmin, pmax]" << endl;
	}

}


// 6) todo: Sa se verfice daca cel mai mic numar prim apartine intervaului [pmin, pmax]. Sa se afiseze un mesaj corespunzator 

void sol6() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 61, 821 };
	int dim = 9;
	int prim = celMaiMicNrPrim(v, dim);

	if (cautareaBinaraMinMax(v, dim, prim) == true) {
		cout << prim << " apare in intervalul [pmin, pmax]" << endl;
	}
	else {
		cout << prim << " nu apare in intervalul [pmin, pmax]" << endl;
	}

}


// 7) todo: Sa se verifice daca elementul k apare in afara intervalului [pmin,pmax]


void sol7() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 61, 821, 52, 72 };
	int dim = 11;
	int kk = 72;

	if (cautareaBinaraMin(v, dim, kk) == true || cautareaBinaraMax(v, dim, kk) == true) {
		cout << kk << " se afla in afara intervalului [pmin, pmax]" << endl;
	}
	else {
		cout << kk << " nu se afla in afara intervalului [pmin, pmax]" << endl;
	}

}

// 8) todo: Se dau două şiruri a şi b, cu n, respectiv m elemente, numere naturale, ordonate crescător. 
// Să se construiască un al treilea şir, c, care să conţină, în ordine crescătoare, elementele din şirurile a şi b.

void sol8() {

	int a[] = { 312, 21, 42, 52, 12, 92 };
	int n = 6;
	int b[] = { 90, 31, 11, 992, 0 };
	int m = 5;
	int c[101];
	int k = 0;

	cout << "A={ ";
	afisare(a, n);
	cout << "}" << endl;

	cout << "B={ ";
	afisare(a, m);
	cout << "}" << endl;

	cout << "Interclasarea a celor doi vectori este C={ ";
	interclasare(a, n, b, m, c, k);
	afisare(c, k);
	cout << "}" << endl;

}


// 9) todo: Se dau două şiruri a şi b, cu n, respectiv m elemente, numere naturale, ordonate strict crescător. Să se afişeze, în ordine strict crescătoare, valorile existente în cel puţin unul dintre cele două şiruri.
//  În cazul în care o valoare apare în ambele şiruri, va fi afişată o singură dată.

void sol9() {

	int a[] = { 312, 21, 42, 52, 12, 92 };
	int n = 6;
	int b[] = { 90, 21, 12, 992, 0 };
	int m = 5;
	int c[101];
	int k = 0;

	cout << "A={ ";
	afisare(a, n);
	cout << "}" << endl;

	cout << "B={ ";
	afisare(b, m);
	cout << "}" << endl;

	cout << "Interclasarea a celor doi vectori este C={ ";
	interclasareFaraDubluri(a, n, b, m, c, k);
	afisare(c, k);
	cout << "}" << endl;

}


// 10) todo: Se dau două şiruri a şi b, cu n, respectiv m elemente, numere naturale, ordonate strict crescător. Să se afişeze, în ordine strict crescătoare, valorile existente în ambele şiruri.

void sol10() {

	int a[] = { 312, 21, 42, 52, 12, 92 };
	int n = 6;
	int b[] = { 90, 21, 12, 992, 0 };
	int m = 5;
	int c[101];
	int k = 0;

	cout << "A={ ";
	afisare(a, n);
	cout << "}" << endl;

	cout << "B={ ";
	afisare(b, m);
	cout << "}" << endl;

	cout << "Interclasarea a celor doi vectori este C={ ";
	interclasareValoriExistente(a, n, b, m, c, k);
	afisare(c, k);
	cout << "}" << endl;

}


// 11) todo: Se dau două şiruri, cu n, respectiv m, elemente, numere naturale. Primul şir este ordonat crescător, iar al doilea este ordonat descrescător. 
// Sa se afişeze, în ordine crescătoare, valorile pare din cele două şiruri.

void sol11() {

	int a[] = { 312, 3, 42, 51, 12, 92 };
	int n = 6;
	int b[] = { 90, 21, 12, 992, 0 };
	int m = 5;
	int c[101];
	int k = 0;

	cout << "A={ ";
	bubbleSort(a, n);
	afisare(a, n);
	cout << "}" << endl;

	cout << "B={ ";
	bubbleSortDescresc(b, m);
	afisare(b, m);
	cout << "}" << endl;

	cout << "Interclasarea a valorilor pare din cei doi vectori este C={ ";
	interclasareValoriPare(a, n, b, m, c, k);
	afisare(c, k);
	cout << "}" << endl;

}


// 12) todo: Se dau două mulțimi de numere naturale. Să se afișeze reuniunea și intersecția lor.

void sol12() {

	int a[] = { 312, 21, 42, 52, 12, 92 };
	int n = 6;
	int b[] = { 90, 21, 12, 992, 0 };
	int m = 5;
	int c[101];
	int k = 0;

	cout << "A={ ";
	afisare(a, n);
	cout << "}" << endl;

	cout << "B={ ";
	afisare(b, m);
	cout << "}" << endl;

	cout << "Reuniunea a celor doi vectori este C={ ";
	interclasareFaraDubluri(a, n, b, m, c, k);
	afisare(c, k);
	cout << "}" << endl;

	cout << "Intersectia a celor doi vectori este C={ ";
	interclasareValoriExistente(a, n, b, m, c, k);
	afisare(c, k);
	cout << "}" << endl;


}


// 13) todo: Se dau două șiruri de numere întregi, ordonate crescător. Șirul x[] contine n numere întregi ordonate crescător, șirul y[] conține m numere întregi ordonate crescător. 
// Să se calculeze numărul de perechi de forma (x[i], y[j]) unde x[i] = y[j] și x[i] ∊ X, respectiv y[j] ∊ Y.
// exemplu: În fișierul de intrare sunt 6 perechi de numere care îndeplinesc condițiile din enunț: (1,1), (2,2), (2,2), (3,3), (3,3), (4,4).

void sol13() {

	int a[] = { 1, 2, 2 ,3 ,3 ,4 };
	int n = 6;
	int b[] = { 1, 2, 3, 4, 5 };
	int m = 5;
	int c[101];
	int k = 0;

	cout << "A={ ";
	afisare(a, n);
	cout << "}" << endl;

	cout << "B={ ";
	afisare(b, m);
	cout << "}" << endl;

	cout << "Sunt " << contorInterclasare(a, n, b, m, c, k) << " perechi de numere intre vectori" << endl;

}


// 14) todo: Se dă un număr natural x și două șiruri a și b, cu n, respectiv m elemente, numere naturale, ordonate strict crescător.
// Să se afișeze, în ordine crescătoare, multiplii lui x care se află doar în unul dintre cele două șiruri.

void sol14() {

	int a[] = { 1, 2, 3, 4, 7, 20, 60 };
	int n = 7;
	int b[] = { 3, 5, 7, 8, 9 , 10 ,12 , 20 ,24 };
	int m = 9;
	int c[101];
	int k = 0;

	int key = 0;
	cin >> key;


	cout << "A={ ";
	afisare(a, n);
	cout << "}" << endl;

	cout << "B={ ";
	afisare(b, m);
	cout << "}" << endl;

	cout << "Multipli lui " << key << " din cei doi vectori sunt "; \
		interclasare(a, n, b, m, c, k);
	multipliDinDoiVectori(a, n, b, m, c, k, key);



}

// 15) todo: Să se scrie un program care ordonează crescător elementele unui vector.

void sol15() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 61, 821, 52, 72 };
	int dim = 11;

	cout << "Vectorul inainte de sortare este V={";
	afisare(v, dim);

	cout << "Vectorul dupa sortare este V={ ";
	bubbleSort(v, dim);
	afisare(v, dim);
	cout << "}" << endl;

}

// 16) todo: Se dă un vector cu n elemente, numere naturale. Afișați în ordine crescătoare valorile prime din vector. ??

void sol16() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 61, 821, 52, 72 };
	int dim = 11;

	cout << "Vectorul inainte de sortare este V={";
	afisare(v, dim);
	cout << "} " << endl;

	cout << "Vectorul dupa sortare este V={ ";
	vectorNrPrime(v, dim);
	afisare(v, dim);
	cout << "}" << endl;
}


// 17) todo: Se dă un vector cu n elemente, numere naturale. Afișați în ordine descrescătoare valorile divizibile cu 10 din acest vector. ???

void sol17(){}


// 18) todo: Să se scrie un program care ordonează descrescător elementele unui vector.

void sol18() {

	int v[] = { 42, 1, 31, 412, 21, 52, 82, 61, 821, 52, 72 };
	int dim = 11;

	cout << "Vectorul inainte de sortare este V={";
	afisare(v, dim);
	cout << "}" << endl;

	cout << "Vectorul dupa sortare este V={ ";
	bubbleSortDescresc(v, dim);
	afisare(v, dim);
	cout << "}" << endl;

}


// 19) todo: Să se ordoneze crescător elementele unui vector crescător după suma cifrelor.

void sol19() {

	int v[] = { 89, 22, 91, 4005, 51, 721 };
	int dim = 6;

	cout << "Vectorul inainte de sortare este V={";
	afisare(v, dim);
	cout << "}" << endl;

	cout << "Vectorul dupa sortare este V={ ";
	bubbleSortSumaCif(v, dim);
	afisare(v, dim);
	cout << "}" << endl;

}


// 20) todo: Să se ordoneze crescător elementele unui vector crescător după prima cifră.

void sol20() {

	int v[] = { 89, 22, 91, 4005, 51, 721 };
	int dim = 6;

	cout << "Vectorul inainte de sortare este V={";
	afisare(v, dim);
	cout << "}" << endl;

	cout << "Vectorul dupa sortare este V={ ";
	bubbleSortPrimaCif(v, dim);
	afisare(v, dim);
	cout << "}" << endl;

}


// 21) todo: Să se determine câte elemente din şir sunt egale cu ultimul element al acestuia.

void sol21() {

	int v[] = { 89, 22, 91, 4005, 51, 22 };
	int dim = 6;
	int aparitie = aparitieUltimaCif(v, dim);

	cout << "Sunt " << aparitie << " elemente in sir care sun egale cu ultimul element" << endl;


}


// 22) todo: Se dă un vector x cu n elemente, numere naturale. Să se construiască un alt vector, y, care să conțină elementele impare din x, în ordine inversă.

void sol22() {

	int v[] = { 89, 22, 91, 4005, 51, 22 };
	int dim = 6;
	int b = 4;
	int a[100];

	construireVectorImp(v, dim, a);

	cout << "Vectorul A este={ ";
	afisare(a, b);
	cout << "}";


}


// 23) todo: Se dă un vector cu n numere naturale. Să se determine câte dintre elementele vectorului sunt prime cu ultimul element.

void sol23() {

	int v[] = { 50, 67, 13, 28, 35, 29 };
	int dim = 6;

	cout << "Elementele prime cu ultimul element din vector sunt ";
	elementePrimeCuUltimul(v, dim);
	

}


// 24) todo: Se citește un vector cu n elemente, numere naturale distincte. 
// Să se afișeze elementele cuprinse între elementul cu valoarea minimă și cel cu valoare maximă din vector, inclusiv acestea.

void sol24() {

	int v[] = { 7, 9, 6, 2, 8 };
	int dim = 5;

	cout << "Elementele cuprinse intre elementul cu valorea minima si cel cu valorea maxima din vector sunt: ";
	intervalMinMax(v, dim);

}


// 25) todo: Se citește un vector cu n elemente, numere naturale. Să se determine suma valorilor elementelor cuprinse între primul și ultimul element par al vectorului, inclusiv acestea.

void sol25() {

	int v[] = { 7, 6, 1, 2, 8 };
	int dim = 5;
	int s = sumaIntervalPare(v, dim);

	cout << "Suma elementelor cuprinse intre primul si ultimul element par al vectorului este " << s;


}


// 26) todo: Se dă un șir cu n elemente, numere naturale. Determinați diferența în valoare absolută dintre numărul de valori pare din șir și numărul de valori impare din șir.

void sol26() {


	int v[] = { 12,23,45,67,78 };

	int dim = 5;

	int dif = abs(valoriImpare(v, dim) - valoriPare(v, dim));

	afisare(v, dim);

	cout << "Solutia este " << dif;

}


// 27) todo: Se dă un vector x cu n elemente numere naturale, ordonate crescător, și un vector y cu m elemente, de asemenea numere naturale. 
// Verificați pentru fiecare element al vectorului y dacă apare în x.  ???


// 28) todo: Să se șteargă din șirul X elementul aflat pe poziția p.

void sol28() {

	int v[] = { 7, 3, 9, 1, 6 };
	int dim = 5;
	int poz = 1;

	cout << "Vectorul inainte de stergere este V={";
	afisare(v, dim);
	cout << "}" << endl;

	cout << "Vectorul dupa stergere este V={ ";
	stergere(v, dim, poz);
	afisare(v, dim);
	cout << "}" << endl;

}


// 29) todo: Se citește un șir cu n elemente, numere întregi. Să se șteargă elementele care se repetă, păstrându-se doar primul de la stânga la dreapta.

void sol29() {

	int v[101] = { 1, 2, 3, 2, 4, 5 };
	int dim = 6;
	int poz = repetare(v, dim);

	cout << "Vectorul inainte de stergere este V={";
	afisare(v, dim);
	cout << "}" << endl;

	cout << "Vectorul dupa stergere este V={ ";
	stergere(v, dim, poz);
	afisare(v, dim);
	cout << "}" << endl;

}


// 30) todo: Să se insereze pe o poziție dată într-un șir o valoare precizată.

void sol30() {

	int v[] = { 7, 3, 9, 1, 6 };
	int dim = 5;
	int key = 10;
	int poz = 1;

	cout << "Vectorul inainte de inserare este V={";
	afisare(v, dim);
	cout << "}" << endl;

	cout << "Vectorul dupa inserare este V={ ";
	inserare(v, dim, poz, key);
	afisare(v, dim);
	cout << "}" << endl;

}


// 31) todo: Se dau n numere întregi. Să se insereze între oricare două numere de aceeași paritate media lor aritmetică. ???


// 32) todo: Se dă un şir cu n elemente, numere naturale. Să se verifice dacă în şir există elemente impare.

void sol32() {

	int v[] = { 412, 12, 322, 211, 452 };
	int dim = 5;

	if (isImpar(v, dim) == true) {
		cout << "Vectorul contine elemente impare"<<endl;
	}
	else {
		cout << "Vectorul nu contine elemente impare"<<endl;
	}

}


// 33) todo: Se dă un şir cu n elemente, numere naturale. Să se verifice dacă în șir există elemente prime.

void sol33() {

	int v[] = { 412, 13, 322, 211, 452 };
	int dim = 5;

	if (isImpar(v, dim) == true) {
		cout << "Vectorul contine elemente prime" << endl;
	}
	else {
		cout << "Vectorul nu contine elemente prime" << endl;
	}

}


// 34) todo: Se dă un şir cu n elemente, numere naturale. Să se verifice dacă toate elementele şirului sunt pare.

void sol34() {

	int v[] = { 412, 12, 322, 212, 4 };
	int dim = 5;

	if (contorToatePare(v,dim)==dim) {
		cout << "Vectorul are toate elementele pare" << endl;
	}
	else {
		cout << "Vectorul nu are toate elementele pare" << endl;
	}

}


// 35) todo: Se dă un vector cu n elemente numere naturale. Să se verifice dacă toate elementele vectorului sunt egale.

void sol35() {

	int v[] = { 412, 412, 412, 412, 412 };
	int dim = 5;

	if (contorEgale(v, dim) == dim-1) {
		cout << "Vectorul are toate elementele egale" << endl;
	}
	else {
		cout << "Vectorul nu are toate elementele egale" << endl;
	}

}


// 36) todo: Se dă un vector cu n elemente numere naturale. Să se verifice dacă oricare două elemente ale vectorului sunt diferite.

void sol36() {

	int v[] = { 412, 12, 322, 212, 4 };
	int dim = 5;

	if (isDiferite(v, dim) == true) {
		cout << "Vectorul are doua elementele diferite" << endl;
	}
	else {
		cout << "Vectorul nu are doua elementele diferite" << endl;
	}

}


// 37) todo: Se dă un vector cu n elemente numere naturale. Să se verifice dacă are elementele ordonate crescător.

void sol37() {

	int v[] = { 8, 12, 55, 212, 421 };
	int dim = 5;

	if (isCrescator(v, dim) == true) {
		cout << "Vectorul este ordonat crescator" << endl;
	}
	else {
		cout << "Vectorul nu este ordonat crescator" << endl;
	}

}


// 38) todo: Se dă un şir cu n elemente, numere naturale. Să se verifice dacă toate elementele şirului sunt multipli ai ultimului element din şir.

void sol38() {

	int v[] = { 84, 60, 102, 24, 6 };
	int dim = 5;

	if (isMultipluUltimElement(v, dim) == true) {
		cout << "Toate elementele sirului sunt multipli ai ultimului element din sir" << endl;
	}
	else {
		cout << "Nu toate elementele sirului sunt multipli ai ultimului element din sir" << endl;
	}

}


// 39) todo: Se dau doi vectori cu câte n elemente, numere naturale. Verificați dacă cei doi vectori conțin exact aceleași elemente. ???


// 40) todo: Se da un vector cu cate n elemente, numere naturale.Sa se verifice cate numere prime avem in vector

void sol40() {

	int v[] = { 12,34,17,31,90,21,32 };
	int dim = 6;

	afisare(v, dim);


	int prime = contorPrime(v, dim);


	cout << "In vector sunt " << prime << " nr prime" << endl;

}


// 41) todo: Se da un vector cu cate n elemente, numere naturale. Sa se verifice care este cea mai mica, respectiv cea mai mare cifra din vector

void sol41() {

	int v[] = { 24, 29, 12, 94, 43, 99 };
	int dim = 6;

	int min = cifMin(v, dim);
	int max = cifMax(v, dim);

	afisare(v, dim);

	cout << "Cea mai mica cifra din vector este " << min << " iar cea mai mare cifra este " << max << endl;

}


// 42) todo: Se da un vector cu cate n elemente, numere naturale. Afisati rasturnatul numerelor cu proprietatea ca prima cifra = ultima cifra 

void sol42() {

	int v[100] = { 12, 2432, 2312, 74, 31 };
	int dim = 5;

	for (int i = 0; i < dim; i++) {

		if (isEgale(v[i]) == true) {
			v[i] = rasturnatNr(v[i]);
		}

	}


	afisare(v, dim);


}


// 43) todo:  Se da un vector cu cate n elemente, numere naturale. Sa se verifice daca toate numerele din vector au proprietatea ca au exact k divizori

void sol43() {

	int v[] = { 7, 17, 19, 13, 59 };
	int dim = 5;
	int ct = 0;
	int k;
	cin >> k;

	afisare(v, dim);

	if (isElementeleKdivizori(v, dim, k) == true) {
		cout << "Toate numerele din vector au " << k << " divizori";
	}
	else {
		cout << "Nu toate numere din vector au " << k << " divizori";
	}
}


// 44) todo: Se da un vector cu cate n elemente, numere naturale. Sa se calculeze produsul numerelor ce au aceeasi paritate cu pozitia pe care stau

void sol44() {

	int v[] = { 12, 31, 42, 11, 65, 22, 74 };
	int dim = 7;

	int produs = ProdusulParitate(v, dim);

	afisare(v, dim);

	cout << "Produsul numerelor care au aceeasi paritate cu pozitia pe care stau este " << produs;

}


// 45) todo: Se da un vector cu cate n elemente, numere naturale. Afisati produsul cifrelor la fieacre element al vectorului ce are cifra de control un numar par

void sol6() {

	int v[] = { 123, 44, 51, 32, 5214, 14 };
	int dim = 6;

	afisare(v, dim);

	produsulCifcuCifaControlPara(v, dim);

}


// 46) todo: Se citește un vector cu n elemente, numere naturale. Să se determine suma valorilor elementelor cuprinse între primul și ultimul element par al vectorului, inclusiv acestea.

void sol46() {

	int v[] = { 11, 13, 24, 53, 12, 13, 14, 15 };
	int dim = 8;

	int suma = sumaElementeIntrePare(v, dim);

	cout << "Suma valorilor elementelor cuprinse inter primul si ultimul element par al vectorului, inclusiv acestea este " << suma;

}


// 47) todo: Se dă un șir cu n elemente, numere reale. Să se determine câte dintre elemente se află în afara intervalului închis determinat de primul și ultimul element.
// Elementele șirului {2 0.5 4 -1 -8 -3} aflate în afara intervalului [-3,2] sunt: 4 și -8.

void sol47() {

	int v[] = { 2, 0.5, 4, -1, -8, -3 };
	int dim = 6;

	int contor = contorIntervalInchis(v, dim);

	cout << "Numarul de elemente care se afla in afara intervalului inchis determinat de primul si ultimul element sunt " << contor << endl;

}


// 48) todo: Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente egal depărtate de capetele vectorului sunt prime între ele.
//exemplu: {50 18 15 28 35 40}, Perechile de elemente prime între ele sunt: (18, 35) și (15, 28).

void sol9() {

	int v[] = { 50, 18, 15, 28, 35, 40 };
	int dim = 6;

	int contor = elementePrimeEgalDepartate(v, dim);

	cout << contor;

}


// 49) todo: Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector sunt formate din valori cu aceeași sumă a cifrelor.

void sol49() {

	int v[] = { 51, 842, 15, 28, 77, 132 };
	int dim = 6;

	int ct = contorElementeCuAceeasiSumaCif(v, dim);

	cout << "Sunt " << ct << " perechi de numere care au aceeasi suma a cifrelor" << endl;

}


// 50) todo: Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector sunt prime între ele.

void sol50() {

	int v[] = { 51, 18, 15, 28, 77, 121 };
	int dim = 6;

	int ct = contorElementePrime(v, dim);

	cout << "Sunt " << ct << " elemente care sunt prime intre ele " << endl;

}