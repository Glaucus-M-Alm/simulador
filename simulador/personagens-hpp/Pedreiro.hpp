#ifndef PEDREIRO
#define PEDREIRO
#include "../core-simulador-hpp/Personagem.hpp"
class Pedreiro : public Personagem
{
    public:
        Pedreiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif