/** PROBLEMA URI 1018 http://www.urionlinejudge.com.br/judge/pt/problems/view/1018
 **
 ** A função calculaNotas recebe um inteiro “valor” que representa um valor em reais, 
 ** e outros sete inteiros que devem ao final da execução da função, representar a 
 ** quantidade nessesária para cada tipo de nota. Modifique a função calculaNotas para 
 ** que ela, ao final da execução tenha a quantidade mínima de notas representadas pelas
 ** variaveis nota_(valor_da_nota).
 **
 **
 **    Exemplo :
 **      Dado  valor = 576, ao final da execução, as variaveis de valor devem conter os seguintes valores :
 **      nota_100 = 5
 **      nota_50 = 1
 **      nota_20 = 1
 **      nota_10 = 0
 **      nota_05 = 1
 **      nota_02 = 0
 **      nota_01 = 1
 **
 **/
#include <iostream>

using namespace std;

void calculaNotas(int valor, int &nota_100, int &nota_50, int &nota_20, int &nota_10, int &nota_05, int &nota_02, int &nota_01){

}


int main(){

	int valor;
	int nota_100, nota_50, nota_20, nota_10, nota_05, nota_02, nota_01;

	cin >> valor; // realiza a leitura do valor total

	calculaNotas( valor, nota_100, nota_50, nota_20, nota_10, nota_05, nota_02, nota_01 );

	cout << valor << "\n";
	cout << nota_100 << " nota(s) de R$ 100,00\n";
	cout << nota_50 << " nota(s) de R$ 50,00\n";
	cout << nota_20 << " nota(s) de R$ 20,00\n";
	cout << nota_10 << " nota(s) de R$ 10,00\n";
	cout << nota_05 << " nota(s) de R$ 5,00\n";
	cout << nota_02 << " nota(s) de R$ 2,00\n";
	cout << nota_01 << " nota(s) de R$ 1,00\n";


	return 0;
}
