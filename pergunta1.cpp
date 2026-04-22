#include <iostream>
using namespace std;

int main() {
    // Criamos um vetor para guardar as temperaturas dos 7 dias
    float temperaturas[7];
    string dias[] = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado", "Domingo"};

    // Pedimos ao utilizador para inserir as temperaturas
    cout << "=== Registo de Temperaturas Semanais ===" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Temperatura de " << dias[i] << ": ";
        cin >> temperaturas[i];
    }

    // Calculamos a média, máxima e o dia correspondente
    float soma = 0;
    float maxima = temperaturas[0];
    int diaMaisQuente = 0;

    for (int i = 0; i < 7; i++) {
        soma += temperaturas[i];
        if (temperaturas[i] > maxima) {
            maxima = temperaturas[i];
            diaMaisQuente = i;
        }
    }

    float media = soma / 7;

    // Exibimos os resultados
    cout << "\n=== Resultados ===" << endl;
    cout << "Média semanal: " << media << "°C" << endl;
    cout << "Temperatura mais alta: " << maxima << "°C" << endl;
    cout << "Ocorreu em: " << dias[diaMaisQuente] << endl;

    return 0;
}
