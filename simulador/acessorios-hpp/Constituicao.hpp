#ifndef CONSTITUICAO
#define CONSTITUICAO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Constituicao : public ArmaDefesa
{
    public:
        Constituicao(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif