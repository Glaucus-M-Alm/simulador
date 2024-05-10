#ifndef GARI
#define GARI
#include "../core-simulador-hpp/Personagem.hpp"
class Gari : public Personagem
{
    public:
        Gari(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif