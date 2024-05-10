#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/regua.hpp"

Regua::Regua(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Regua::gerarForcaAtaque()
{
    return (rand() % (maxForca - minForca + 1)) + minForca;
    //o dano será um número inteiro aleatório dentro do limite, utilizando a função rand
}

string Regua::gerarRuidoAtaque()
{
    return "SLAP!";
}
