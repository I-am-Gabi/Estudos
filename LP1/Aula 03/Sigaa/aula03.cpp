#include <iostream>
#include <cstdlib>

int main()
{
    int num_alunos = 5;
     
    std::cout << "Quantos alunos tem nesta turma? ";
    std::cin >> num_alunos;
    double notas[num_alunos];
    double media = 0.;
     
    for( int i = 0; i < num_alunos; ++i )
    {
        std::cout << "Digite a nota do aluno " << i + 1 << ": ";
        std::cin >> notas[i];
        media += notas[i];
    }
    std::cout << "Media calculada: " << media / num_alunos << std::endl;
    return 0;
} // media.cpp
