/** PROBLEMA URI 1041 http://www.urionlinejudge.com.br/judge/pt/problems/view/1041
 ** 
 ** A função calculaQuadrante(int x, int y) recebe dois inteiros como parâmetro,
 ** x e y que representam as coordenadas de um ponto p em um plano. Ela deverá 
 ** retornar um caractere conforme a tabela abaixo :
 **
 **
 **      return 'O' -> Se o ponto estiver na origem. 
 **      return 'X' -> Se o ponto estiver no eixo X.
 **      return 'Y' -> Se o ponto estiver no eixo Y.
 **      return 'P' -> Se o ponto estiver no primeiro quadrante.
 **      return 'S' -> Se o ponto estiver no segundo quadrante.
 **      return 'T' -> Se o ponto estiver no terceiro quadrante.
 **      return 'Q' -> Se o ponto estiver no quarto quadrante.
 **
 **/

#include <iostream>

using namespace std;


char calculaQuadrante(int x, int y){

	return 'A';
}

int main(){

	double x, y;
	char quadrante;

	cin >> x >> y;

	quadrante = calculaQuadrante(x,y);

	switch(quadrante){

		case 'P': cout << "Q1\n"; break; // primeiro quadrante
		case 'S': cout << "Q2\n"; break; // segundo quadrante
		case 'T': cout << "Q3\n"; break; // terceiro quadrante
		case 'Q': cout << "Q4\n"; break; // quarto quadrante
		case 'X': cout << "Eixo X\n"; break; // eixo x
		case 'Y': cout << "Eixo Y\n"; break; // eixo y
		case 'O': cout << "Origem\n"; break; // origem


		// Caso o aluno retorne uma letra minuscula 
		case 'p': cout << "Q1\n"; break; 
		case 's': cout << "Q2\n"; break; 
		case 't': cout << "Q3\n"; break; 
		case 'q': cout << "Q4\n"; break;
		case 'x': cout << "Eixo X\n"; break;
		case 'y': cout << "Eixo Y\n"; break;
		case 'o': cout << "Origem\n"; break;
	}

	return 0;
}
