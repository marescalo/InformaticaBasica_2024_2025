/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
* @date Dec 4 2024
* @brief 
*
* @see 
*/


#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

void Usage(int argc, char *argv[]){
    if(argc != 2) {
        cout <<argv[0] <<": Falta el nombre del fichero" <<endl;
        cout <<"Pruebe" << argv[0] <<": --help para más información" <<endl;
        exit(EXIT_SUCCESS);
    }
    string parameter{argv[1]};
    if(parameter == "--help"){
        const string kHelperText = "Este programa codifica (+) o decodifica (-) \
        un fichero por el metodo 1. xor o 2.Cesar";
    cout << kHelperText << endl;
    exit(EXIT_SUCCESS);
    }
}

void Encoding(string cadena){
  ofstream encrypt;
  encrypt.open("encrypt.txt", ios::app);
      if(encrypt.fail()){
      cout << "Error! \n";
  } else {
      encrypt << cadena << endl;
      encrypt.close();
  }
}

void Decoding(string cadena){
    ofstream decrypt;
    decrypt.open("decrypt.txt", ios::app);
        if(decrypt.fail()){
        cout << "Error! \n";
    } else {
        decrypt << cadena << endl;
        decrypt.close();
    }
}

void Cesar_Metod(char kOperador, string line, int code){
  string kCodificado = "";
  string kDecodificado = "";
  switch (kOperador){
  case '+':
    for (int i = 0; i < line.length(); ++i){
      if(!isalpha(line[i])){
        kCodificado += (int(line[i]));
      } else if (isupper(line[i])){
        kCodificado += (int(line[i] + code - 65) % 26 + 65);
      } else{
        kCodificado += (int(line[i] + code - 97) % 26 + 97);
      }
    }
    Encoding(kCodificado);
    break;
  case '-':
    code = 26 - code;
    for (int i = 0; i < line.length(); ++i){
      if(!isalpha(line[i])){
          kDecodificado += (int(line[i]));
      } else if (isupper(line[i])){
        kDecodificado += (int(line[i] + code - 65) % 26 + 65);
      } else{
        kDecodificado += (int(line[i] + code - 97) % 26 + 97);
      }
    }
  Decoding(kDecodificado);
  break;
  }
}

void Xor_Metod(char kOperator, string frase, string pasword) {
  string kXorMetod, aux;
  int kentrada_A, kentrada_B, ksalida_C;
  int i, j;
  aux = frase;
  for (i = 0; i < frase.length(); i++) {
    kentrada_A = int(frase[i]);
    // Calculo el indice de la pasword
    for(j = 0;  j != pasword.length(); ++j){
      kentrada_B = int(pasword[j]);
    }
    // Operación xor
    ksalida_C = kentrada_A ^ kentrada_B;
    // Guardo el caracter encriptado
    aux[i] = char(ksalida_C);
  }
  kXorMetod = aux;
  if (kOperator == '+') {
    Encoding(kXorMetod);
  } else {
    Decoding(kXorMetod);
  }
}
