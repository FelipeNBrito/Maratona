/** PROBLEMA URI 1158 http://www.urionlinejudge.com.br/judge/pt/problems/view/1158
 **
 ** A função somaImpar(int x, int y) recebe dois inteiros como parâmetro. 
 ** Modifique a função para que ela retorne a soma dos y números impares 
 ** consecutivos a partir de x (inclusive x, se ele for impar).
 **
 ** 	Exemplo :
 ** 		x = 4
 ** 		y = 3
 ** A função deverá retornar 21 – nesse caso 21 = (5 + 7 +9);
 **
 **/

 #include <iostream>

using namespace std;

int somaImpar(int numero, int qtd_impar){
	return 0;
}


int main(){

	int n, numero, qtd_impar, soma;

	cin >> n;

	for (int i = 0; i < n; i++){
		
		cin >> numero >> qtd_impar;

		soma = somaImpar(numero,qtd_impar);

		cout << soma << "\n";
	}
}
