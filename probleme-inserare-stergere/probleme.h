#include <iostream>
using namespace std;

void afisare(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}

}

void sortareSelectie(int v[], int dim) {
	for (int i = 0; i < dim - 1; i++) {
		for (int j = i + 1; j < dim; j++) {
			if (v[i] > v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
}

void bubbleSort(int v[], int dim) {



	bool sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}

		}

	} while (sortat == false);
}

void bubbleSortDescresc(int v[], int dim) {



	bool sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (v[i] < v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}

		}

	} while (sortat == false);
}

bool cautareaBinara(int v[], int dim, int key) {


	bubbleSort(v, dim);
	int a = 0;
	int b = dim;

	while (a <= b) {

		int mj = (a + b) / 2;

		if (v[mj] == key) {

			return true;
		}

		if (v[mj] > key) {

			b = mj - 1;
		}
		else {

			a = mj + 1;
		}
	}

	return false;
}

void interclasare(int v[], int dim, int a[], int dim2, int inter[], int& k) {

	sortareSelectie(v, dim);
	sortareSelectie(a, dim2);

	k = 0;
	int i = 0, j = 0;
	while (i < dim && j < dim2) {


		if (v[i] <= a[j]) {

			inter[k] = v[i];
			k++;
			i++;

		}
		if (v[i] > a[j]) {

			inter[k] = a[j];
			k++;
			j++;

		}

	}

	while (i < dim) {


		inter[k] = v[i];
		k++;
		i++;


	}

	while (j < dim2) {


		inter[k] = a[j];
		k++;
		j++;

	}

}

void stergere(int v[], int& dim, int poz) {


	for (int i = poz; i < dim - 1; i++) {

		v[i] = v[i + 1];
	}

	dim--;
}

void inserare(int v[], int& dim, int poz, int key) {


	for (int i = dim - 1; i >= poz; i--) {

		v[i + 1] = v[i];
	}

	v[poz] = key;

	dim++;
}

int nrDivizori(int nr) {

	int ct = 0;

	for (int i = 1; i <= nr; i++) {
		if (nr % i == 0) {
			ct++;
		}
	}
	return ct;
}

bool isPrim(int nr) {

	if (nrDivizori(nr) == 2) {
		return true;
	}
	else {
		return false;
	}

}

int pozitieElementPrim(int v[], int dim) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {

		if (isPrim(v[i]) == true) {
			ct++;
			if (ct == 3) {
				return i;
			}
		}
		

	}
	return -1;
}

bool isDouaCif(int nr) {

	if (nr > 9) {
		return true;
	}
	return false;
}

void stergereDouaCif(int v[], int& dim) {

	for (int k = 0; k < dim; k++) {
		if (isDouaCif(v[k]) == true) {
			for (int i = k; i < dim - 1; i++) {

				v[i] = v[i + 1];
			}

			dim--;
		}
	}

}

void stergereInterval(int v[], int& dim, int a, int b) {

	if (a > b) {
		cout << " Nu exista " << endl;
	}

	for (int k = a; k < b; k++) {
		for (int i = k; i < dim - 1; i++) {

			v[i] = v[i + 1];
		}

		dim--;
	}

}

int sumaDivizori(int nr) {

	int s = 0;

	for (int i = 1; i <= nr; i++) {
		if (nr % i==0) {
			s = s + i;
		}

	}
	return s;

}

int pozitie3Divizori(int v[], int dim) {

	int ct = 0;
	

	for (int i = 0; i < dim; i++) {
		if (nrDivizori(v[i]) == 3){
			ct++;
			if (ct == 3){
				return i;
			}
		}
	}
	return -1;

}

int indiceMax(int v[], int dim) {

	int max = INT_MIN;
	int imax = INT_MIN;

	for (int i = 0; i < dim; i++) {

		if (v[i] > max) {
			max = v[i];
			imax = i;
		}

	}
	return imax;
}

int indiceMin(int v[], int dim) {

	int min = INT_MAX;
	int imin = INT_MAX;

	for (int i = 0; i < dim; i++) {

		if (v[i] < min) {
			min = v[i];
			imin = i;
		}

	}

	imin++;
	return imin;
}

void primaJumatateBubble(int v[], int dim) {

	int jumatate = dim / 2;

	int sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < jumatate - 1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}
		}
	} while (sortat == false);

}

void douaJumatateBubble(int v[], int dim) {

	int jumatate = dim / 2;

	int sortat = false;

	do {

		sortat = true;

		for (int i = jumatate; i < dim - 1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}
		}
	} while (sortat == false);

}

void douaJumatateSelectie(int v[], int dim) {

	int jumatate = dim / 2;

	for (int i = jumatate; i < dim - 1; i++) {

		for (int j = i + 1; j < dim; j++) {
			if (v[i] < v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

}

void cautareaBinaraPrima(int v[], int dim, int key) {


	primaJumatateBubble(v, dim);
	int a = 0;
	int b = dim / 2;


	while (a <= b) {

		int mj = (a + b) / 2;

		if (v[mj] == key) {

			cout << mj;
		}

		if (v[mj] > key) {

			b = mj - 1;
		}
		else {

			a = mj + 1;
		}
	}


}

bool cautareaBinaraDoi(int v[], int dim, int key) {


	douaJumatateBubble(v, dim);
	int a = dim / 2;
	int b = dim;


	while (a <= b) {

		int mj = (a + b) / 2;

		if (v[mj] == key) {

			return true;
		}

		if (v[mj] > key) {

			b = mj - 1;
		}
		else {

			a = mj + 1;
		}
	}

	return false;
}

int pozitieControl(int v[], int dim) {

	int pozitie = 0;

	for (int i = 0; i < dim; i++) {

		if (i == 3) {
			pozitie = i;
		}

	}
	return pozitie;

}

int cifraControl(int n) {

	while (n > 9)
	{
		int s = 0;
		while (n > 0)
		{
			s += n % 10;
			n /= 10;
		}
		n = s;
	}
	return n;
}

void sortareIntervalMinMax(int v[], int dim) {

	int min = indiceMin(v, dim);
	int max = indiceMax(v, dim);

	int sortat = false;

	do {

		sortat = true;

		for (int i = min; i < max - 1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}
		}
	} while (sortat == false);


}

bool cautareaBinaraMinMax(int v[], int dim, int key) {


	sortareIntervalMinMax(v, dim);
	int min = indiceMin(v, dim);
	int max = indiceMax(v, dim);
	int a = min;
	int b = max;


	while (a <= b) {

		int mj = (a + b) / 2;

		if (v[mj] == key) {

			return true;
		}

		if (v[mj] > key) {

			b = mj - 1;
		}
		else {

			a = mj + 1;
		}
	}

	return false;
}

bool isNrPrim(int nr) {

	if (nrDivizori(nr) == 2) {
		return true;
	}
	else {
		return false;
	}

}

int celMaiMicNrPrim(int v[], int dim) {

	int min = INT_MAX;

	for (int i = 0; i < dim; i++) {

		if (v[i] < min) {
			if (isNrPrim(v[i]) == true) {
				min = v[i];
			}
		}

	}
	return min;
}

void sortareIntervalMin(int v[], int dim) {

	int min = indiceMin(v, dim);

	int sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < min - 1; i++) {
			if (v[i] < v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}
		}
	} while (sortat == false);


}

void sortareIntervalMax(int v[], int dim) {

	int max = indiceMax(v, dim);

	int sortat = false;

	do {

		sortat = true;

		for (int i = max; i < dim - 1; i++) {
			if (v[i] < v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}
		}
	} while (sortat == false);

}

bool cautareaBinaraMin(int v[], int dim, int key) {


	sortareIntervalMinMax(v, dim);
	int min = indiceMin(v, dim);
	int max = indiceMax(v, dim);
	int a = 0;
	int b = min;


	while (a <= b) {

		int mj = (a + b) / 2;

		if (v[mj] == key) {

			return true;
		}

		if (v[mj] > key) {

			b = mj - 1;
		}
		else {

			a = mj + 1;
		}
	}

	return false;
}

bool cautareaBinaraMax(int v[], int dim, int key) {


	sortareIntervalMinMax(v, dim);

	int min = indiceMin(v, dim);
	int max = indiceMax(v, dim);
	int a = max;
	int b = dim;


	while (a <= b) {

		int mj = (a + b) / 2;

		if (v[mj] == key) {

			return true;
		}

		if (v[mj] > key) {

			b = mj - 1;
		}
		else {

			a = mj + 1;
		}
	}

	return false;
}

void interclasareFaraDubluri(int v[], int dim, int a[], int dim2, int inter[], int& k) {

	sortareSelectie(v, dim);
	sortareSelectie(a, dim2);

	k = 0;
	int i = 0, j = 0;
	while (i < dim && j < dim2) {

		if (v[i] == a[j]) {
			i++;
		}
		if (v[i] <= a[j]) {

			inter[k] = v[i];
			k++;
			i++;

		}
		if (v[i] > a[j]) {

			inter[k] = a[j];
			k++;
			j++;

		}

	}

	while (i < dim) {


		inter[k] = v[i];
		k++;
		i++;


	}

	while (j < dim2) {


		inter[k] = a[j];
		k++;
		j++;

	}

}

void interclasareValoriExistente(int v[], int dim, int a[], int dim2, int inter[], int& k) {

	sortareSelectie(v, dim);
	sortareSelectie(a, dim2);

	k = 0;
	int i = 0, j = 0;
	while (i < dim && j < dim2) {

		if (v[i] <= a[j]) {

			i++;

		}
		if (v[i] > a[j]) {

			j++;

		}
		if (v[i] == a[j]) {
			inter[k] = v[i];
			k++;
		}
	}



}

void interclasareValoriPare(int v[], int dim, int a[], int dim2, int inter[], int& k) {

	sortareSelectie(v, dim);
	sortareSelectie(a, dim2);

	k = 0;
	int i = 0, j = 0;
	while (i < dim && j < dim2) {


		if (v[i] <= a[j]) {

			if (v[i] % 2 == 0) {
				inter[k] = v[i];
				k++;
			}
			i++;

		}
		if (v[i] > a[j]) {

			if (a[j] % 2 == 0) {
				inter[k] = a[j];
				k++;
			}
			j++;

		}

	}

	while (i < dim) {

		if (v[i] % 2 == 0) {
			inter[k] = v[i];
			k++;
		}
		i++;


	}

	while (j < dim2) {

		if (a[j] % 2 == 0) {
			inter[k] = a[j];
			k++;
		}
		j++;

	}

}

int contorInterclasare(int v[], int dim, int a[], int dim2, int inter[], int& k) {

	int ct = 0;

	sortareSelectie(v, dim);
	sortareSelectie(a, dim2);

	k = 0;
	int i = 0, j = 0;
	while (i < dim && j < dim2) {


		if (v[i] <= a[j]) {

			if (v[i] == a[j]) {
				ct++;
			}
			inter[k] = v[i];
			k++;
			i++;

		}
		if (v[i] > a[j]) {

			inter[k] = a[j];
			k++;
			j++;

		}

	}

	while (i < dim) {


		inter[k] = v[i];
		k++;
		i++;


	}

	while (j < dim2) {


		inter[k] = a[j];
		k++;
		j++;

	}
	return ct;
}

void multipliDinDoiVectori(int v[], int dim, int a[], int dim2, int inter[], int& k, int key) {

	interclasareFaraDubluri(v, dim, a, dim2, inter, k);

	for (int i = 0; i < k; i++) {
		if (inter[i] % key == 0) {
			cout << inter[i] << " ";
		}
	}

}

int nrPrime(int v[], int dim) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {
		if (nrDivizori(v[i]) == 2) {
			ct++;
		}
	}
	return ct;
}

int vectorNrPrime(int v[], int dim) {

	int a[101];

	int prime = nrPrime(v, dim);

	for (int i = 0; i < dim; i++) {
		if (nrDivizori(v[i]) == 2) {
			for (int k = 0; k < prime; k++) {
				a[k] = v[i];
			}
		}
	}


	bubbleSort(a, prime);
	return a[100];
}

int sumaCif(int nr) {

	int s = 0;

	while (nr != 0) {
		int uc = nr % 10;
		s = s + uc;
		nr = nr / 10;
	}
	return s;
}

void bubbleSortSumaCif(int v[], int dim) {



	bool sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (sumaCif(v[i]) > sumaCif(v[i + 1])) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}

		}

	} while (sortat == false);
}

int primaCif(int nr) {

	int cif = 0;

	while (nr > 9) {
		nr = nr / 10;
	}
	cif = nr;


	return cif;
}

void bubbleSortPrimaCif(int v[], int dim) {



	bool sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (primaCif(v[i]) > primaCif(v[i + 1])) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}

		}

	} while (sortat == false);
}

int aparitieUltimaCif(int v[], int dim) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {

		if (v[i] == v[dim - 1]) {
			ct++;
		}

	}
	return ct;
}

void construireVectorImp(int v[], int dim, int a[]) {

	int k = 0;

	for (int i = dim - 1; i >= 0; i--) {
		if (v[i] % 2 == 1) {
			a[k] = v[i];
			k++;
		}
	}

}

void elementePrimeCuUltimul(int v[], int dim) {

	for (int i = 0; i < dim-1; i++) {
		if (nrDivizori(v[i]) == nrDivizori(dim - 1)) {
			cout << v[i] << " ";
		}
	}
		
}

void intervalMinMax(int v[], int dim) {

	int max = indiceMax(v, dim);
	int min = indiceMin(v, dim);

	for (int i = max; i < min; i++) {
		cout << v[i] << " ";
	}

}

int primulElementPar(int v[], int dim) {


	for (int i = 0; i < dim; i++) {
		if (v[i] % 2 == 0) {
			return i;
		}
	}
	return -1;
}

int ultimulElementPar(int v[], int dim) {

	int element = 0;

	for (int i = 0; i < dim; i++) {
		if (v[i] % 2 == 0) {
			element = i;
		}
	}
	return element;
}

int sumaIntervalPare(int v[], int dim) {

	int primPar = primulElementPar(v, dim);
	int ultimPar = ultimulElementPar(v, dim);
	int s = 0;

	for (int i = primPar; i <= ultimPar; i++) {
		s = s + v[i];
	}
	return s;
}