/**  PROBLEMA URI 1180 http://www.urionlinejudge.com.br/judge/pt/problems/view/1180
 **	
 **    A função encontraMenor recebe um vetor de inteiros V de tamanho n
 **
 **    Modifique esta função  para que ela ao final da execução tenha 
 **    o menor elemento do vetor armazenado na variavel menor e a posicao
 **    desse menor elemento na variavel pos_menor 
 **   
 ** 
 **	 
*/

#include <iostream>
 #include <malloc.h>

using namespace std;


void encontraMenor(int V[], int n, int &pos_menor, int &menor){
	
}

int main(){

	int n, menor, pos_menor;

	cin >> n;

	int *V = (int *) malloc(n * sizeof(int));

	for(int i = 0; i < n ; i++)
		cin >> V[i];
		
	encontraMenor(V,n,pos_menor,menor);

	cout << "Menor valor: " << menor << "\n";
	cout << "Posicao: " << pos_menor << "\n";
	return 0;

}