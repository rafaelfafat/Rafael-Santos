//Rafael Santos
//
#include <iostream> 
#include <string>

using namespace std;

int main(){
	int N_teclas;
	char matriz[8][4]={{'a','b','c',' '},{'d','e','f',' '},{'g','h','i',' '},{'j','k','l',' '},{'m','n','o',' '},{'p','q','r','s'},{'t','u','v',' '},{'w','x','y','z'}};
	
	cout << "Quantas teclas deseja inserir?" << endl;
	cin >>N_teclas;
	
	string Teclas[N_teclas];
	 
	for (int i=0; i<N_teclas; i++){
		cin >> Teclas[i];
	}
	
	int posicao1;
	int posicao2;
	
	for (int j=0; j<N_teclas; j++){
		posicao1=(int)(Teclas[j][1])-50;
		posicao2=(int)(Teclas[j][3])-49;	
		cout << matriz[posicao1][posicao2];
	}


}