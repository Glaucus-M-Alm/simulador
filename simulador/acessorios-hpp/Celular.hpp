#ifndef CELULAR
#define CELULAR

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Celular : public ArmaAtaque
{
    public:
        Celular(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif