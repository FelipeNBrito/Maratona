/** PROBLEMA URI 1165 http://www.urionlinejudge.com.br/judge/pt/problems/view/1165
 **
 ** A função verificaPrimo(int numero) recebe um numero inteiro como parâmetro. 
 ** Modifique a função para que ela retorne 1 se o número recebido for primo e 0 caso contrário.
 **
 **/

#include <iostream>

using namespace std;

int verificaPrimo(int numero){
	return 0;
}

int main(){

	int n, numero;

	cin >> n;

	for (int i = 0; i < n; i++){

		cin >> numero;

		int primo = verificaPrimo(numero);

		if(primo == 0)
			cout << numero << " nao eh primo\n";

		else cout << numero << " eh primo\n";
	}

	return 0;	
}
