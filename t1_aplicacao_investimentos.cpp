#include <iostream>
#include "t1_investimentos.cpp"

// Questão 3

int main()
{
    float grana, j_ano;
    int anos;
    Investimento capital(grana, j_ano, anos);

    //Solicitando dados ao Usuário
    cout << "Informe seu Montante Inicial: ";
    cin >> grana;

    cout << "Informe sua taxa de juros ao ano (percentual): ";
    cin >> j_ano;

    cout << "Informe seu periodo de investimento (em anos): ";
    cin >> anos;

    cout << "--------------------------------------------------" << endl;

    //Selecionando os valores
    capital.setMontante(grana);
    capital.setTaxaAno(j_ano);
    capital.setPeriodoAno(anos);

    //Resposta
    cout << "Taxa de Juros ao mes: " << capital.getTaxaMes()<< endl;
    cout << "Resultado do montante aplicado a juros simples: " << capital.getResultadoSimples() << endl;
    cout << "Resultado montante aplicado a juros compostos: " << capital.getResultadoCompostos() << endl;
    cout << capital.maiorRetorno(capital.getResultadoSimples(), capital.getResultadoCompostos());

    return 0;
}
