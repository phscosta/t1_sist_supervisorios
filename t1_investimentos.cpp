#include <iostream>
#include <math.h>

using namespace std;

class Investimento
{
protected:
    float montante;
    float j_ano;
    int periodo_ano;
public:
    Investimento(float montante, float j_ano, int periodo_ano)
    {
        montante = 0;
        j_ano = 0;
        periodo_ano = 0;
    }

    void setMontante(float montante)
    {
        this -> montante = montante;
    }

    void setTaxaAno(float j_ano)
    {
        this -> j_ano = j_ano/100;
    }

    void setPeriodoAno(int periodo_ano)
    {
        this -> periodo_ano = periodo_ano;
    }

    float getMontante()
    {
        return montante;
    }

    float getTaxaAno()
    {
        return j_ano;
    }

    float getPeriodo()
    {
        return periodo_ano;
    }

    //Obtendo a taxa de juros ao mes
    float getTaxaMes()
    {
        float j_mes = (pow((1 + j_ano),(1/12)) - 1);

        return j_mes;
    }

    //Calculo Juros Simples
    float getResultadoSimples()
    {
        float mj_simples = montante + (montante * j_ano * periodo_ano);

        return mj_simples;
    }

    //Calculo Juros Compostos
    float getResultadoCompostos()
    {
        float mj_compostos = montante + pow((1 + j_ano), periodo_ano);

        return mj_compostos;
    }

    static float maiorRetorno(float mj_simples, float mj_composto)
    {
        if (mj_simples > mj_composto)
        {
            cout << "O Juros simples deram maior retorno. Sendo seu valor: ";
            return mj_simples;
        }
        else
        {
            cout << "O Juros compostos deram maior retorno. Sendo seu valor: ";
            return mj_composto;
        }
    }
};