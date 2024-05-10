#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Picareta.hpp"

Picareta::Picareta(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Picareta::gerarForcaAtaque()
{
    return (rand() % (maxForca - (minForca+1)+1)+(minForca+1));
    //causará um dano aleatório entre minForca+1 e maxForca
}

string Picareta::gerarRuidoAtaque()
{
    return "MINE";
}
