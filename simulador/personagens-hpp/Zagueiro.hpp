#ifndef ZAGUEIRO
#define ZAGUEIRO
#include "../core-simulador-hpp/Personagem.hpp"
class Zagueiro : public Personagem
{
    public:
        Zagueiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif