#include <iostream>
#include<string.h>
#include <bitset> 

using namespace std;

<<<<<<< HEAD
string abcedariofrom(int);
int abecedario(string);
string* Vigenere(string,int);
int cXOR();
=======

char* Vigenere();
int cXOR(string, string);
>>>>>>> 729322d2b12ec24a6eb6096959b8912e0323cd46
char* abcdario(); 



int main(){
	char abcd[27]={'a','b','c','d','e','f','g','h','i','j',
                  'k','l','m','n','o','p','q','r','s','t',
                  'u','v','w','x','y','z'};


	char resp = 's';
	while(resp=='s' || resp == 'S'){
		cout<<endl;
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
<<<<<<< HEAD
	         cout<<endl;
				cout<<"-------Cifrado de Vigenere------"<<endl;
				string* vigenere=NULL;			
      	 	vigenere=Vigenere(p_clave,tam_clave);
				cout<<"El texto cifrado en Vigenere\n"<<vigenere[0];
				
=======
				cXOR(p_clave,mensaje);
      	 
>>>>>>> 729322d2b12ec24a6eb6096959b8912e0323cd46
	
				break;
			}
			case 2:{
				
				break;
			}
		}
	}
	return 0;
}


int abecedario(char h) {
        
		switch (h) {
            case 'a': 
			
					return 1;
				
            case 'b':

                return 2;

            case 'c':

                return 3;

            case 'd':

                return 4;

            case 'e':

                return 5;

            case 'f':

                return 6;

            case 'g':

                return 7;

            case 'h':

                return 8;

            case 'i':

                return 9;

            case 'j':

                return 10;

            case 'k':

                return 11;

            case 'l':

                return 12;

            case 'm':

                return 13;

            case 'n':

                return 14;

            case 'o':

                return 15;

            case 'p':

                return 16;

            case 'q':

                return 17;

            case 'r':

                return 18;

            case 's':

                return 19;

            case 't':

                return 20;

            case 'u':

                return 21;

            case 'v':

                return 22;

            case 'w':

                return 23;

            case 'x':

                return 24;

            case 'y':

                return 25;

            case 'z':

                return 26;
	}
}
string abcedariofrom(int x) {

        switch (x) {

            case 1:

                return "a";

            case 2:

                return "b";

            case 3:

                return "c";

            case 4:

                return "d";

            case 5:

                return "e";

            case 6:

                return "f";

            case 7:

                return "g";

            case 8:

                return "h";

            case 9:

                return "i";

            case 10:

                return "j";

            case 11:

                return "k";

            case 12:

                return "l";

            case 13:

                return "m";

            case 14:

                return "n";

            case 15:

                return "o";

            case 16:

                return "p";

            case 17:

                return "q";

            case 18:

                return "r";

            case 19:

                return "s";

            case 20:

                return "t";

            case 21:

                return "u";

            case 22:

                return "v";

            case 23:

                return "w";

            case 24:

                return "x";

            case 25:

                return "y";

            case 26:

                return "z";

             }

    }

string* Vigenere(string cad, int clave){
	string* retVal=new string[1];
	
	string vig="";
   int pos;
	int cont=1; 
	for(int i=0;i<cad.length(); i++){
			if(cad.at(i) != ' '){
				pos=abecedario(cad.at(i)) + cont;
				vig+=abcedariofrom(pos);
			}else{
				vig+=" ";
			}if(cont==clave){
				cont=1;
			}else{
				cont++;
			}					
	}
	retVal[0]=vig;
	return retVal;
}


int cXOR(string palClave, string texto){
	cout<<"                   CIFRADO XOR"<<endl;
	cout<<"========================================================"<<endl;
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

