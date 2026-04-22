#include <iostream>
#include <string>
using namespace std;

int main() {
    const int ATLETAS = 8;
    string nomes[ATLETAS];
    float tempos[ATLETAS];

    cout << "=== Clube de Atletismo ===" << endl;

    // Leitura dos dados dos atletas
    for (int i = 0; i < ATLETAS; i++) {
        cout << "\nAtleta " << (i + 1) << ":" << endl;
        cout << "  Nome: ";
        cin.ignore();
        getline(cin, nomes[i]);
        cout << "  Tempo (segundos): ";
        cin >> tempos[i];
    }

    // Ordenação por Bubble Sort - do mais rápido (menor tempo) ao mais lento
    // IMPORTANTE: quando trocamos os tempos, também trocamos os nomes!
    for (int i = 0; i < ATLETAS - 1; i++) {
        for (int j = 0; j < ATLETAS - 1 - i; j++) {
            if (tempos[j] > tempos[j + 1]) {
                // Troca os tempos
                float tempTempo = tempos[j];
                tempos[j] = tempos[j + 1];
                tempos[j + 1] = tempTempo;

                // Troca os nomes JUNTO com os tempos (integridade dos dados)
                string tempNome = nomes[j];
                nomes[j] = nomes[j + 1];
                nomes[j + 1] = tempNome;
            }
        }
    }

    // Exibimos o ranking final
    cout << "\n=== Ranking Final (Mais Rápido → Mais Lento) ===" << endl;
    cout << "--------------------------------------------" << endl;

    for (int i = 0; i < ATLETAS; i++) {
        cout << (i + 1) << "º lugar: " << nomes[i]
             << " - " << tempos[i] << " segundos" << endl;
    }

    cout << "--------------------------------------------" << endl;
    cout << "🏆 Vencedor: " << nomes[0] << " com " << tempos[0] << "s" << endl;

    return 0;
}
