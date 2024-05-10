#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Caneleira.hpp"

Caneleira::Caneleira(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Caneleira::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Caneleira::getResistencia() 
{
    return this->resistencia;
}