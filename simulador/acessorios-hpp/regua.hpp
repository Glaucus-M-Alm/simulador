#ifndef REGUA
#define REGUA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Regua : public ArmaAtaque
{
    public:
        Regua(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif