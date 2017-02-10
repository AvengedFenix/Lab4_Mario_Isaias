#include <iostream>

using namespace std;

int cXOR(string palClave, string texto);

int main(){
	char seguir = 's';
	while(resp =='s' || resp == 'S'){
		cout<<"1. Cifrar \n2. Decifrar"<<endl;
       		int ej;
	        cin>>ej;
		switch(ej){
			case 1:{
				
				break;
			}
			case 2:{
				
				break;
			}
		}
	}
	return 0;
}




























































































































int cXOR(string palClave, string texto){
	int tamPal;
	tamPal = palClave.length;
	int tamTex;
	tamTex = texto.length;
	int* arrePal = new int[tamPal];
	int* arreTex = new int[tamTex];
	for(int i =0; i<tamPal; i++){
		int temp = palClave.at(i);
		arrePal[i] = temp;
	}
	for(int i =0; i< tamTex;i++){
		int temp = palTex.at(i);
		arreTex[i] = temp;
	}

}
