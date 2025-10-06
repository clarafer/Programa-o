#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, n1, n2,soma=0;
	cout << "quantos numeros queres somar? ";
	cin >> n1;
		for (i = 1; i <= n1; i++)
		{
			cout << "diz o "<<i<<"º numero : ";
			cin >> n2;
			soma = soma + n2;
		}
		cout << "a soma é " << soma << ".";
		return 0;
}
	
