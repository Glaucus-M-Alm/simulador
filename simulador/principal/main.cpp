#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Caneleira.hpp"
#include "../acessorios-hpp/regua.hpp"
#include "../acessorios-hpp/Picareta.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Gari.hpp"
#include "../personagens-hpp/Atacante.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);
    ArmaAtaque* arma3 = new Regua("Regua de madeira",0,100);
    ArmaAtaque* arma4 = new Picareta("Picareta de pedra",0,50);
    ArmaDefesa* escudo = new Escudo("Latão", 1);
    ArmaDefesa* Caneleira = new Escudo("Caneleira",5);
    
    Personagem* p1 = new Chaves(1, "Chaves Eq1", 100, arma, escudo);
    Personagem* p3 = new Gari(1, "Gari", 100, arma3, escudo);
    Personagem* p2 = new Atacante(2, "Atacante", 40, arma2, Caneleira);
    Personagem* p4 = new Chaves(2, "Chaves Eq2 - Reserva", 100, arma4, escudo);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}