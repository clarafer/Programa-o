#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	float CustoSandes = 1, CustoBolo = 0.8, CustoRefrig = 1.5, CustoCafe = 0.6,PVSandes,PVBolos,PVRefrigs,PVCafes;
	int QSandes, QBolos, QRefrigs, QCafes;
	cout << "Quantas Sandes vendeste?\n";
	cin >> QSandes;
	cout << "Quantos Bolos vendeste?\n";
	cin >> QBolos;
	cout << "Quantos Refrigerantes vendeste?\n";
	cin >> QRefrigs;
	cout << "Quantos Cafes vendeste?\n";
	cin >> QCafes;
	cout << "A que preço vendeste as Sandes\n";
	cin >> PVSandes;
	cout << "A que preço vendeste Bolos ?\n";
	cin >> PVBolos;
	cout << "A que preço vendeste Refrigerantes?\n";
	cin >> PVRefrigs;
	cout << "A que preço vendeste Cafes?\n";
	cin >> PVCafes;
	cout << "\n O lucro hoje foi de: " << (PVSandes - CustoSandes) * QSandes + (PVBolos - CustoBolo) * QBolos + (PVRefrigs - CustoRefrig) * QRefrigs + (PVCafes - CustoCafe) * QCafes<<"€";

	return 0;
}


