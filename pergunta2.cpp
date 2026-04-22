#include <iostream>
using namespace std;

int main() {
    // Dois vetores paralelos: códigos e quantidades
    int codigos[10]    = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    int quantidades[10] = {20,   3,  15,   4,  10,   1,  30,   5,   2,  12};

    int codigoBuscado;
    bool encontrado = false;

    cout << "=== Sistema de Stock da Loja ===" << endl;
    cout << "Digite o código do produto: ";
    cin >> codigoBuscado;

    // Pesquisamos o código no vetor
    for (int i = 0; i < 10; i++) {
        if (codigos[i] == codigoBuscado) {
            encontrado = true;
            cout << "\nProduto encontrado!" << endl;
            cout << "Código: " << codigos[i] << endl;
            cout << "Quantidade em stock: " << quantidades[i] << " unidades" << endl;

            // Verificamos se o stock é crítico
            if (quantidades[i] < 5) {
                cout << "⚠️  AVISO: Stock Crítico!" << endl;
            }
            break; // Para de procurar depois de encontrar
        }
    }

    if (!encontrado) {
        cout << "Produto com código " << codigoBuscado << " não encontrado!" << endl;
    }

    return 0;
}
