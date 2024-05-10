#include "../personagens-hpp/Gari.hpp"

Gari::Gari(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Gari::gerarAtaque()
{
    return (armaAtaque->gerarForcaAtaque())+1;
}

int Gari::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Gari::pegarDescricao() 
{
    return "Todo mundo quer ajudar gari a manter o emprego, hoje vim ajudar o coveiro.";
}