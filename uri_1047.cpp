/** PROBLEMA URI 1047 http://www.urionlinejudge.com.br/judge/pt/problems/view/1047
 **
 ** A função calculaTempo recebe quatro inteiros, hora_inicial, minuto_inicial, 
 ** hora_final e minuto_final que representam, respectivamente a hora e o minuto 
 ** de inicio de um jogo, e a hora e minuto do término do jogo. Modifique a função 
 ** calculaTempo para que ela armazene o tempo de duração do jogo. No final, a 
 ** variavel tempo_horas e a tempo_minutos devem conter o tempo de duração do jogo.
 **
 **
 **       Exemplo :
 **       Dado: hora_inicial = 7 , minuto_inicial = 51 , hora_final = 9 e minuto_final = 30
 **       A função deverá conter ao final da execução :
 **              
 **            tempo_horas =  1
 **            tempo_minutos = 39
 **
 **/

#include <iostream>

using namespace std;

void calculaTempo(int hora_inicial, int minuto_inicial, int hora_final, int minuto_final, int &tempo_horas, int &tempo_minutos){

}

int main(){

	int hora_inicial, minuto_inicial, hora_final, minuto_final;
	int tempo_horas, tempo_minutos;

	cin >> hora_inicial >> minuto_inicial; // realiza a leitura da hora inicial e minuto inicial do jogo
	cin >> hora_final >> minuto_final;  // realiza a leitura da hora final e minuto final do jogo.

	calculaTempo(hora_inicial, minuto_inicial, hora_final, minuto_final, tempo_horas, tempo_minutos);

	cout << "O JOGO DUROU " << tempo_horas << " HORA(S) E " << tempo_minutos << " MINUTO(S)\n";


return 0;
}
