#ifndef ZORO
#define ZORO
#include "../core-simulador-hpp/Personagem.hpp"
class Zoro : public Personagem
{
    public:
        Zoro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif