/** PROBLEMA URI 1017 http://www.urionlinejudge.com.br/judge/pt/problems/view/1017
 ** 
 ** A função calculaLitros(int tempo, int velocidadeMedia) recebe dois inteiros como parâmetro,
 ** o primeiro representa o tempo gasto na viagem (em horas) e o segundo representa a velocidade
 ** média (em km/h) durante a mesma. Sabendo que o veículo faz 12 KM/L, modifique a função 
 ** calculaLitros(int tempo, int velocidadeMedia) para que ela retorne um número do tipo double 
 ** que represente a quantidade de litros necessário para a realização da viagem.  
 **
 **/

#include <iostream>

using namespace std;

double calculaLitros(int tempo, int velocidadeMedia){
	return 0.0;
}


int main(){

	int tempo, velocidadeMedia;
	double litros;

	cin >> tempo >> velocidadeMedia;

	litros = calculaLitros(tempo,velocidadeMedia);

	cout.precision(3);
	cout << fixed << litros << "\n";

	return 0;
}
