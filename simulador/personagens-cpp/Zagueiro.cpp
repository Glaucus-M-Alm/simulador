#include "../personagens-hpp/Zagueiro.hpp"

Zagueiro::Zagueiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Zagueiro::gerarAtaque()
{
    return (armaAtaque->gerarForcaAtaque())-5;
}

int Zagueiro::criarDefesa()
{
    return (armaDefesa->getResistencia())+5;
}

string Zagueiro::pegarDescricao() 
{
    return "Daqui não passa";
}