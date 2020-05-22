#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

/**
 * Turma: Terça - Noite
 * Disciplina: Introdução à programação I
 * Professor: Rachel Pernambuco
 * Aluno: Jamilli Vitória Oliveira 
 * Matricular: 201908105101
 * Data:15/05/2020
 * 
 * 3) Atividade: Escreve um programa que cadastre o nome, altura, o peso, o cpf e o sexo 
 * de algumas pessoas. Com os dados cadastrados em seguinda localizar uma
 * pessoas atraves do cpf e imprimir o seu IMC.
 * 
 * Obs.: o cadastro é continuo sem flag de parada!
 * 
*/

//Estrutra pessoa
struct Pessoa {
  string nome;
  double altura;
  double peso;
  char sexo;
  double cpf;
};

//constante para fixa o tamanho do vetor
const int tvetor = 5;

//Vetor com os registro das pessoas
Pessoa pessoa[tvetor];

//Calculo e try catch: tratamento de excessoes
double imc(double altura, double peso){
   
    try{
        return (peso/altura);
    }catch (int e){
        cout << "An exception occurred. Exception Nr. " << e << '\n';
    return 0;
  }
    
}


// validar se foi digitado corretamente s ou m
void validarSexo(Pessoa pessoa[], int i){
        while (pessoa[i].sexo !='h' && pessoa[i].sexo !='n' )
        {
            cout << "Informar sexo: h->homem ou m->mulher! ";
            cin >>pessoa[i].sexo;
        }
}

//validar nome
// validar se foi digitado corretamente s ou m
void validarNome(Pessoa pessoa[], int i){
        while (pessoa[i].nome == " ")
        {
            cout << "Nome invalido! ";
            cin >>pessoa[i].nome;
        }
}

//validar altura
void validarAltura(Pessoa pessoa[], int i){
        while (pessoa[i].altura <= 0 || pessoa[i].altura >5)
        {
            cout << "Valor invalido altura >0 e altura < 5: ";
            cin >>pessoa[i].altura;
        }
} 

//validar peso
void validarPeso(Pessoa pessoa[], int i){
        while (pessoa[i].peso <= 0 || pessoa[i].peso >200)
        {
            cout << "Valor invalido peso >0 e peso < 200: ";
            cin >>pessoa[i].peso;
        }
} 


//validar cpf: valida apenas o tamanho!
void validarCpf(Pessoa pessoa[], int i){
        while (pessoa[i].cpf <= 0)
        {
            cout << "Cpf invalido!";
            cin >>pessoa[i].cpf;
        }
} 


//procedimento para realizar busca por CPF
void buscarCpf(Pessoa pessoa[], double cpf){

    bool naoencontrou = true;

    if(cpf != 0 && cpf != NULL){
        for (int i = 0; i < tvetor; i++)
        {
            if(pessoa[i].cpf ==cpf){
                cout << "\n Massa Corporea: "<<setprecision (2) << fixed<<imc(pessoa[i].altura,pessoa[i].peso)<<" \n ";
                naoencontrou = false;
                break;
            }
        }
    }

    if(naoencontrou == true){
        cout<< "\n Cpf nao cadastrado!";
    }
     
}


int main()
{
    //variaveis
    double cpf = 0;
    cout << "\n .: Cadastrar Pessoa:. \n";

    //leitura dos dados
    //o cadastro é continuo sem flag de parada!
    for (int i = 0; i < tvetor; i++)
    {
        /* nome */
        cout << "Informar nome: ";
        cin >>pessoa[i].nome;
        validarNome(pessoa,i);

        /* altura */
        cout << "Informar altura: ";
        cin >>pessoa[i].altura;
        validarAltura(pessoa,i);

        /* peso */
        cout << "Informar peso: ";
        cin >>pessoa[i].peso;
        validarPeso(pessoa,i);

         /* sexo */
        cout << "Informar sexo[h/m]: ";
        cin >>pessoa[i].sexo;
        validarSexo(pessoa,i);

         /* cpf */
        cout << "Informar cpf: ";
        cin >>pessoa[i].cpf;
        validarCpf(pessoa,i);

    }
    
    //Busca  pessoa por cpf   
    cout << "\n .: Busca por cpf:. ";
    cout << "\n Inserir cpf:  ";
    cin >>cpf;
    buscarCpf(pessoa,cpf);

    return 0;
}