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
* 2)Atividade: 
* Escreve  um programa na linguagem C++, onde serao feitas leituras de um 
* numero de eleitores de um pais, o numero de votos nulos, brancos e validos
* Escrever e tambem calcular o percentual que cada um vai representar em 
* relacao ao total dos seus eleitores nessa votacao. 
*/

/*  OBSERVAÇÃO 
    observacao o numero de percentual baseado no numero de eleitores e não em numero de votos validos
    confirmar com o professor, questao com duplo sentido!
*/

float pnulos(int neleitores,int vnulos ){
    return (vnulos*100/neleitores);
}

float pbrancos(int neleitores,int vbrancos ){
    return (vbrancos*100/neleitores);
}

float pvalidos(int neleitores,int vvalidos ){
    return (vvalidos*100/neleitores);
}


int main()
{
    //variaveis
    double neleitores,vnulos,vbrancos,vvalidos;

    //leitura dos dados
    cout <<"Ler o numero de eleitores: ";
    cin >>neleitores;

    cout <<"Ler o numero de votos nulos: ";
    cin >>vnulos;

    cout <<"Ler o numero de votos brancos: ";
    cin >>vbrancos;

    cout <<"Ler o numero de votos validos: ";
    cin >>vvalidos;

    //resultados
    cout << "\n Percentagem de votos nulos:   "<< setprecision (2) << fixed << pnulos(neleitores,vnulos)<<"% \n";
    cout << "\n Percentagem de votos brancos: "<< setprecision (2) << fixed << pbrancos(neleitores,vbrancos)<<"% \n";
    cout << "\n Percentagem de votos validos: "<< setprecision (2) << fixed << pvalidos(neleitores,vvalidos)<<"% \n";

    return 0;
}