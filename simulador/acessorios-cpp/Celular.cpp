#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Celular.hpp"

Celular::Celular(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Celular::gerarForcaAtaque()
{
    return (maxForca-minForca)/2;
}

string Celular::gerarRuidoAtaque()
{
    return "cush cush";
}
