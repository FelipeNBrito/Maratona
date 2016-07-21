/** PROBLEMA URI 1049 http://www.urionlinejudge.com.br/judge/pt/problems/view/1049
 **
 ** A função verificaTipo recebe um vetor V de strings de tamanho três
 ** contendo três palavras necessárias para identificar o animal segundo 
 ** a figura do problema Original. 
 ** Modifique a função verificaTipo para que ao final da execução ela 
 ** armazene o tipo de animal na string tipoAnimal.
 **
 **
 **     Exemplo : 
 **        V[0] = “invertebrado”
 **        V[1] = “inseto”
 **        V[2] = “hematofago”
 **      Ao final da execução ela deverá conter
 **      tipoAnimal = “pulga”
 **
 **/

#include <iostream>
#include <string>

using namespace std;


void verificaTipo(string V[], string &tipoAnimal){

}

int main(){

	string V[3];
	string tipoAnimal = "";

	getline(cin, V[0]);
	getline(cin, V[1]);
	getline(cin, V[2]);

	verificaTipo(V,tipoAnimal);

	cout << tipoAnimal << "\n";
}
