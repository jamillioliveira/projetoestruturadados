#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

/**
 * Turma: Terça - Noite
 * Disciplina: Introdução à programação I
 * Professor: Rachel Pernambuco
 * Aluno: Jamilli Vitória Oliveira 
 * Matricular: 201908105101
 * Data:15/05/2020
 *
 * 1) Atividade: Fazer um programa em C++ e exibir:
 * 1.Soma de dois numeros
 * 2.O produto do primeiro pelo quadrado do segundo    
 * 3.O quadrado do primerio numero
 * 4.A raiz quadrada da soma dos quadrados 
 * 5.O seno da diferença do primeiro numero pelo segundo
 * 6.O modulo do primeiro numero
*/

//1.Soma de dois numeros
double somaDoisNumeros(int a, int b)
{
    return (a + b);
}

//2.O produto do primeiro pelo quadrado do segundo 
double produtoDoPrimeiro(int a, int b)
{
    return (a * pow(b,2));
}

//3.O quadrado do primerio numero
double quadradoDoPrimeiro(int a, int b)
{
    return (pow(a,2));
}

//4.A raiz quadrada da soma dos quadrados 
double raizQuadradaSoma(int a, int b)
{
    return sqrt( pow(a,2)+pow(b,2) );
}

//5.O seno da diferença do primeiro numero pelo segundo
double senoDoisNumero(int a, int b)
{
    return sin(a-b);
}

// 6.O modulo do primeiro numero
double moduloNumero(int a, int b)
{
    return abs(a);
}

int main()
{
    //variaveis
    double pnumero, snumero;

    //leitura dos dados
    cout <<"Ler o primeiro numero: ";
    cin >>pnumero;

    cout <<"Ler o segundo numero: ";
    cin >>snumero;

    //resultados
    cout << "\n 1) Resultado = " << somaDoisNumeros(pnumero, snumero) << "\n";
    cout << "\n 2) Resultado = " << produtoDoPrimeiro(pnumero, snumero) << "\n";
    cout << "\n 3) Resultado = " << quadradoDoPrimeiro(pnumero, snumero) << "\n";
    cout << "\n 4) Resultado = " << raizQuadradaSoma(pnumero, snumero) << "\n";
    cout << "\n 5) Resultado = " << senoDoisNumero(pnumero, snumero) << "\n";
    cout << "\n 6) Resultado = " << moduloNumero(pnumero, snumero) << "\n";

    return 0;
}