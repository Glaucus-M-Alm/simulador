#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Constituicao.hpp"

Constituicao::Constituicao(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Constituicao::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Constituicao::getResistencia() 
{
    return (this->resistencia)-1;
}