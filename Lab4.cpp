#include <iostream>
#include<string.h> 

using namespace std;


char* Vigenere();
int cXOR();
char[] abcdario(); 

int cXOR(string palClave, string texto);


int main(){
	char seguir = 's';
	while(resp =='s' || resp == 'S'){
		cout<<"1. Cifrar \n2. Decifrar"<<endl;
       		int ej;
	        cin>>ej;
		switch(ej){
			case 1:{
				
				cout<<"Ingrese palabra clave: ";
				
				break;
			}
			case 2:{
				
				break;
			}
		}
	}
	return 0;
}




























































































































=======
char[] abcdario(){
	char[27] x={'a','b','c','d','e','f','g','h','i','j',
					'k','l','m','n','o','p','q','r','s','t',
					'u','v','w','x','y','z'}
}
char* Vigenere(){
	
}
>>>>>>> d66ef89f5e43700d215d47629705869d51e2a7b5

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

