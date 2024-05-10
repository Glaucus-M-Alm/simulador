#ifndef CANELEIRA
#define CANELEIRA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Caneleira : public ArmaDefesa
{
    public:
        Caneleira(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif