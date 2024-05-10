#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Garfo.hpp"

Garfo::Garfo(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Garfo::gerarForcaAtaque()
{
    return maxForca-((maxForca - minForca)/2);
}

string Garfo::gerarRuidoAtaque()
{
    return "Crrr";
}
