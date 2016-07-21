/** PROBLEMA URI 1094 http://www.urionlinejudge.com.br/judge/pt/problems/view/1094
 ** 
 ** A funcão calculaTotal recebe dois vetores qtd_cobaia[] e tipo_cobaia[],
 ** sendo um de inteiros e o outro de caracteres. Cada posicao do vetor representa
 ** respectivamente o total de cobaias e o tipo de cobaia de cada experimento realizado.
 ** A função também recebe um inteiro numero_experimentos que representa o total de 
 ** experimentos realizados (o tamanho dos vetores). O total de sapos, coelhos e ratos 
 ** deve ser armazenado em total_sapos, total_coelhos e total_ratos e o total geral de 
 ** cobaias deve ser amaznado em total_cobaias.
 **
 **  Representação das cobaias :
 **    “S” -> Sapo
 **    “C” -> Coelho
 **    "R” -> Rato
 **
 **
 **   		Exemplo :
 **				numero_experimentos = 2, 
 ** 			tipo_cobaia[0] = 'S'
 **				qtd_cobaia[0] = 5
 ** 			tipo_cobaia[1] = 'R'
 ** 			qtd_cobaia[1] = 12
 **	   No final da execução as variáveis de total devem conter os seguintes valores :
 **             total_sapos = 5
 ** 			total_coelhos = 0
 ** 			total_ratos = 12
 **				total_cobaias = 17
 **
 **
 ** A função calculaPorcentagens recebe quatro inteiros total_sapos, total_coelhos, total_ratos
 ** e total_cobaias que representam respectivamente o total de sapos, coelhos, ratos e cobaias
 ** utilizadas no experimento. Modifique a função calculaPorcentagens para que ao final da execução
 ** ela armazene o percentual de sapos, coelhos e ratos utilizados nos experimentos.
 **
 **
 **			Exemplo : 
 **				total_sapos = 5
 ** 			total_coelhos = 0
 **				total_ratos = 12
 **				total_cobaias = 17
 **    Ao final da execução ela deverá conter :
 **             per_sapos = 29.411764706
 **				per_coelhos = 0
 ** 			per_ratos =  70,588235294
 **
 **/

#include <iostream>

using namespace std;

void calculaTotal(char tipo_cobaia[], int qtd_cobaias[], int numero_experimentos, int &total_sapos, int &total_coelhos, int &total_ratos, int &total_cobaias){

}

void calculaPorcentagens(int total_sapos, int total_coelhos, int total_ratos, int total_cobaias, double &per_sapos, double &per_coelhos, double &per_ratos){

}


int main(){

	int numero_experimentos;
	int total_sapos, total_coelhos, total_ratos, total_cobaias;
	double per_sapos, per_coelhos, per_ratos;    // O percentual de cada tipo de cobaia

	cin >> numero_experimentos;

	char tipo_cobaia[numero_experimentos];
	int qtd_cobaias[numero_experimentos];

	for (int i = 0; i < numero_experimentos; i++)
		
		cin >> qtd_cobaias[i] >> tipo_cobaia[i];

	

	calculaTotal( tipo_cobaia, qtd_cobaias, numero_experimentos, total_sapos, total_coelhos, total_ratos, total_cobaias);
	calculaPorcentagens( total_sapos, total_coelhos, total_ratos, total_cobaias, per_sapos, per_coelhos, per_ratos );

	cout << "Total: " << total_cobaias << " cobaias\n";
	cout << "Total de coelhos: " << total_coelhos << "\n";
	cout << "Total de ratos: " << total_ratos << "\n";
	cout << "Total de sapos: " << total_sapos << "\n";

	cout.precision(2);

	cout << fixed << "Percentual de coelhos: " << per_coelhos << " %\n";
	cout << fixed << "Percentual de ratos: " << per_ratos << " %\n";
	cout << fixed << "Percentual de sapos: " << per_sapos << " %\n";
	

	return 0;
}
