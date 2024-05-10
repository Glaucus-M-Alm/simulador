#include "../personagens-hpp/Atacante.hpp"

Atacante::Atacante(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Atacante::gerarAtaque()
{
    return (armaAtaque->gerarForcaAtaque())+5;
}

int Atacante::criarDefesa()
{
    return (armaDefesa->getResistencia())-5;
}

string Atacante::pegarDescricao() 
{
    return "Chama o VAR!";
}