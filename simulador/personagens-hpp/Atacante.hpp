#ifndef ATACANTE
#define ATACANTE
#include "../core-simulador-hpp/Personagem.hpp"
class Atacante : public Personagem
{
    public:
        Atacante(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif