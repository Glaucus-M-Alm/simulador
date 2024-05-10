#ifndef PICARETA
#define PICARETA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Picareta : public ArmaAtaque
{
    public:
        Picareta(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif