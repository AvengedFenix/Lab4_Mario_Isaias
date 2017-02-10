#include <iostream>
#include<string.h>
#include <bitset> 

using namespace std;


char* Vigenere();
int cXOR(string, string);
char* abcdario(); 



int main(){
	char abcd[27]={'a','b','c','d','e','f','g','h','i','j',
                  'k','l','m','n','o','p','q','r','s','t',
                  'u','v','w','x','y','z'};


	char resp = 's';
	while(resp=='s' || resp == 'S'){
		cout<<"1. Cifrar \n2. Decifrar"<<endl;
       		int ej;
	        cin>>ej;
		switch(ej){
			case 1:{
				string p_clave;
				string mensaje;				
				cout<<"Ingrese palabra clave: ";
				cin>>p_clave;
				cout<<"Ingrese Mensaje a cifrar: ";
				cin>>mensaje;	
				cout<<p_clave<<endl<<mensaje;
				int tam_clave=p_clave.length();
				cXOR(p_clave,mensaje);
      	 
	
				break;
			}
			case 2:{
				
				break;
			}
		}
	}
	return 0;
}




























































































































char* Vigenere(){
	
}


int cXOR(string palClave, string texto){
	int tamPal;
	tamPal = palClave.length();
	int tamTex;
	tamTex = texto.length();
	int* arrePal = new int[tamPal];
	int* arreTex = new int[tamTex];
	bitset <8> bPal[tamPal];
	bitset <8> bTex[tamTex];
	bitset <8> cif[tamTex];

	for(int i =0; i<tamPal; i++){
		int temp = palClave.at(i);
		arrePal[i] = temp;
	}

        for(int i =0; i< tamTex;i++){
                int temp = texto.at(i);
                arreTex[i] = temp;
        }


	for(int i = 0; i< tamPal; i++){
		bPal[i] = arrePal[i];
		cout<<"binario de la palabra " <<bPal[i]<<endl;
	}
	
	for(int i = 0; i< tamTex; i++){
		bTex[i] = arreTex[i];
		cout<<"binario del texto " << bTex[i]<<endl;
		
	}

	int a=0;	
	for(int i = 0; i<tamTex;i++){

		cout<<"cifrado "<<(bPal[i]^bTex[i])<<endl;
		
		cif[i]=(bPal[a]^bTex[i]);
		a++;
		if(a<=tamPal){
			a =0;
		}	
	}

	for(int i = 0; i<tamTex;i++){
		cout<<"bits "<<cif[i].to_ulong()<<endl;
	}
}

