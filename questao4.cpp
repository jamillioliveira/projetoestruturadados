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
 * 4) Atividade: 
 * 4)Fazer um programa de cadastrados de usuario, onde deve conter os segintes  campos:
 *  nome
 *  cpf
 *  sexo
 *  telefone
 *  rg
 *  idade
 * 
 * Cadastro terminar quando vc determinar no sistema
 * O programa deve conter no minimo cadastro e buscar e a busca sera feria
 * pelo CPF do usuario cadastrado.
 * 
*/

//Estrutra pessoa
struct Pessoa {
  string nome;
  double telefone;
  double idade;
  char sexo;
  double cpf;
};

//constante para fixa o tamanho do vetor
const int tvetor = 5;

//Vetor com os registro das pessoas
Pessoa pessoa[tvetor];



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
        while (pessoa[i].nome == "")
        {
            cout << "Nome invalido! ";
            cin >>pessoa[i].sexo;
        }
}

//validar altura
void validarIdade(Pessoa pessoa[], int i){
        while (pessoa[i].idade <= 0 || pessoa[i].idade >999)
        {
            cout << "Valor invalido idade >0 e idade < 999: ";
            cin >>pessoa[i].idade;
        }
} 

//validar peso
void validarTelefone(Pessoa pessoa[], int i){
        while (pessoa[i].telefone <= 0)
        {
            cout << "Valor telefone! ";
            cin >>pessoa[i].telefone;
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
                cout<<"\n Usuario Cadastrado!";
                cout<<" \n Nome: "<<pessoa[i].nome<<" \n";
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
    double cpf;
    char flag;

    cout << "\n .:: Cadastrar Pessoa ::. \n";

    //leitura dos dados
    //o cadastro é continuo com flag de parada!
    for (int i = 0; i < tvetor; i++)
    {
        /* nome */
        cout << "Informar nome: ";
        cin >>pessoa[i].nome;
        validarNome(pessoa,i);

        /* idade */
        cout << "Informar idade: ";
        cin >>pessoa[i].idade;
        validarIdade(pessoa,i);

        /* Telefone */
        cout << "Informar Telefone: ";
        cin >>pessoa[i].telefone;
        validarTelefone(pessoa,i);

         /* sexo */
        cout << "Informar sexo[h/m]: ";
        cin >>pessoa[i].sexo;
        validarSexo(pessoa,i);

         /* cpf */
        cout << "Informar Cpf: ";
        cin >>pessoa[i].cpf;
        validarCpf(pessoa,i);


        /* flag de parada */
        cout << "Continuar s-sim ou x-sair: ";
        cin >>flag;

        if(flag=='x'){
            break;
        }
            
    }
    
    //Busca  pessoa por cpf   
    cout << "\n .: Busca por cpf:. ";
    cout << "\n Inserir cpf:  ";
    cin >>cpf;
    buscarCpf(pessoa,cpf);

    return 0;
}