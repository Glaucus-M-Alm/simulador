#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
//armas do professor acima
#include "../acessorios-hpp/Caneleira.hpp"
#include "../acessorios-hpp/Constituicao.hpp"
#include "../acessorios-hpp/Capacete.hpp"
#include "../acessorios-hpp/Tampa.hpp"
#include "../acessorios-hpp/armadura.hpp"
//armas de defesa que inclui
#include "../acessorios-hpp/regua.hpp"
#include "../acessorios-hpp/Picareta.hpp"
#include "../acessorios-hpp/Garfo.hpp"
#include "../acessorios-hpp/Faca.hpp"
#include "../acessorios-hpp/Celular.hpp"
//armas de ataque que inclui
#include "../personagens-hpp/Chaves.hpp"
//personagem do professor
#include "../personagens-hpp/Gari.hpp"
#include "../personagens-hpp/Atacante.hpp"
#include "../personagens-hpp/Zagueiro.hpp"
#include "../personagens-hpp/Pedreiro.hpp"
#include "../personagens-hpp/Zoro.hpp"
//personagens que inclui
#include "../core-simulador-hpp/Simulador.hpp"
using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);

    ArmaAtaque* regua = new Regua("Regua de madeira",0,100);
    ArmaAtaque* picareta = new Picareta("Picareta de pedra",0,50);
    ArmaAtaque* celular = new Celular("Xiaomi 2077",0,50);
    ArmaAtaque* garfo = new Garfo("Garfo",0,50);
    ArmaAtaque* faca = new Faca("Faca Afiada",0,50);

    ArmaDefesa* escudo = new Escudo("Latão", 1);
    ArmaDefesa* caneleira = new Caneleira("Caneleira",5);
    ArmaDefesa* capacete = new Capacete("Capacete",2);
    ArmaDefesa* tampa = new Tampa("Tampa de bueiro",5);
    ArmaDefesa* armadura = new Armadura("Armadura",3);
    ArmaDefesa* constituicao = new Constituicao("Constituição do panamá",5);
    
    Personagem* p1 = new Chaves(1, "Chaves", 100, arma, escudo);
    Personagem* p3 = new Gari(2, "Gari", 100, regua, tampa);
    Personagem* p2 = new Atacante(3, "Atacante", 100, celular, caneleira);
    Personagem* p4 = new Pedreiro(4, "Pedreiro", 100, picareta, armadura);
    Personagem* p5 = new Zagueiro(5, "Zagueiro", 100, faca, constituicao);
    Personagem* p6 = new Zoro(6, "Zoro", 100, garfo, capacete);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 1);
    simulador->adicionarPersonagem(p6, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}