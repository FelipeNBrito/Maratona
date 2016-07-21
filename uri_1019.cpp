/** PROBLEMA URI 1019 http://www.urionlinejudge.com.br/judge/pt/problems/view/1019
 ** 
 ** Dado o inteiro “tempo” que representa a duração em segundos de um evento,
 ** modifique a função converteTempo para que ela converta o tempo para o formato
 ** horas, minutos e segundos. Ao final da execução, os valores horas, minutos e 
 ** segundos devem conter respectivamente a quantidade de horas, minutos e segundos
 ** referentes a duração do evento.
 **
 **
 **     Exemplo :
 **           Dado tempo = 556, as variavéis horas, minutos e segundos devem, ao final da execução, conter :
 **       
 **                 horas = 0
 **                 minutos = 9
 **                 segundos = 16
 **
 **/

#include <iostream>

using namespace std;

void converteTempo(int tempo, int &horas, int &minutos, int &segundos){
	
}


int main(){

	int tempo, horas, minutos, segundos;

	cin >> tempo; // realiza a leitura do tempo total em segundos

	converteTempo(tempo, horas, minutos, segundos);

	cout << horas << ":" << minutos << ":" << segundos << "\n";

	return 0;
}
