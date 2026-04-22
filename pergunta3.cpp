#include <iostream>
#include <string>
using namespace std;

int main() {
    const int TOTAL = 15;
    string nomes[TOTAL];
    float medias[TOTAL];

    // Leitura dos dados
    cout << "=== Gestão de Notas da Turma ===" << endl;
    for (int i = 0; i < TOTAL; i++) {
        cout << "\nAluno " << (i + 1) << ":" << endl;
        cout << "  Nome: ";
        cin.ignore(); // limpa o buffer
        getline(cin, nomes[i]);
        cout << "  Média final: ";
        cin >> medias[i];
    }

    // Listamos apenas os alunos aprovados (nota >= 10)
    int aprovados = 0;
    cout << "\n=== Alunos Aprovados (nota >= 10) ===" << endl;

    for (int i = 0; i < TOTAL; i++) {
        if (medias[i] >= 10) {
            cout << "✔ " << nomes[i] << " - " << medias[i] << endl;
            aprovados++;
        }
    }

    // Calculamos a percentagem de aprovação
    float percentagem = ((float)aprovados / TOTAL) * 100;

    cout << "\n=== Resultado Final ===" << endl;
    cout << "Aprovados: " << aprovados << " de " << TOTAL << " alunos" << endl;
    cout << "Percentagem de aprovação: " << percentagem << "%" << endl;

    return 0;
}
