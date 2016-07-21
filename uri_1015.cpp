/**   PROBLEMA URI 1015 http://www.urionlinejudge.com.br/judge/pt/problems/view/1015  
 **	
 **   A função calculaDistancia( int x1, int y1, int x2, int y2 ) recebe quatro inteiros como parâmetro. 
 **   Os pares x1 e y1 representam o ponto p1 em um plano cartesiano e os pares x2 e y2 representam o 
 **   ponto p2 neste mesmo plano.
 **  
 **   Modifique a função calculaDistancia para que ela retorne um numero do tipo double que represente a 
 **   distância entre os pontos p1 e p2.
 **
 **/

#include <iostream>

using namespace std;



double calculaDistancia( int x1, int y1, int x2, int y2 ){
	return 0.0;
}


int main(){

	int x1, y1, x2, y2;
	double distancia;

	cin >> x1 >> y1;  // faz a leitura das coordenadas do primeiro ponto
	cin >> x2 >> y2;  // faz a leitura das coordenadas do segundo  ponto

	distancia  = calculaDistancia(x1,y1,x2,y2);

	cout.precision(4);
 	cout << fixed << distancia << "\n";

 	return 0;

}
