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