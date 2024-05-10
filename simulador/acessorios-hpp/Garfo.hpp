#ifndef GARFO
#define GARFO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Garfo : public ArmaAtaque
{
    public:
        Garfo(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif