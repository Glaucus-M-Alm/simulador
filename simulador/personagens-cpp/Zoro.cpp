#include "../personagens-hpp/Zoro.hpp"

Zoro::Zoro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Zoro::gerarAtaque()
{
    return (armaAtaque->gerarForcaAtaque())+10;
}

int Zoro::criarDefesa()
{
    return (armaDefesa->getResistencia())-10;
}

string Zoro::pegarDescricao() 
{
    return "Me perdi de novo";
}