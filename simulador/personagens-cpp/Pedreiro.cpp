#include "../personagens-hpp/Pedreiro.hpp"

Pedreiro::Pedreiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Pedreiro::gerarAtaque()
{
    return (armaAtaque->gerarForcaAtaque())+1;
}

int Pedreiro::criarDefesa()
{
    return (armaDefesa->getResistencia())+1;
}

string Pedreiro::pegarDescricao() 
{
    return "Tudo começa com uma boa base";
}