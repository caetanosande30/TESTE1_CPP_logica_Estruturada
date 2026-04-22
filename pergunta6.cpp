#include <iostream>
#include <string>
using namespace std;

int main() {
    const int PRODUTOS = 20;

    // Vetores paralelos com produtos e preços já preenchidos
    string nomes[PRODUTOS] = {
        "Arroz", "Feijão", "Açúcar", "Sal", "Óleo",
        "Farinha", "Leite", "Manteiga", "Ovos", "Pão",
        "Frango", "Carne", "Peixe", "Tomate", "Cebola",
        "Batata", "Cenoura", "Sabão", "Detergente", "Água"
    };

    float precos[PRODUTOS] = {
        50.0, 45.0, 60.0, 15.0, 80.0,
        35.0, 40.0, 55.0, 30.0, 20.0,
        120.0, 200.0, 90.0, 25.0, 18.0,
        22.0, 20.0, 35.0, 45.0, 10.0
    };

    string produtoBuscado;
    bool encontrado = false;

    cout << "=== Supermercado ===" << endl;
    cout << "Digite o nome do produto: ";
    cin.ignore();
    getline(cin, produtoBuscado);

    // Pesquisamos o produto pelo nome
    for (int i = 0; i < PRODUTOS; i++) {
        if (nomes[i] == produtoBuscado) {
            encontrado = true;
            cout << "\n✔ Produto encontrado!" << endl;
            cout << "Produto: " << nomes[i] << endl;
            cout << "Preço: " << precos[i] << " MT" << endl;
            break;
        }
    }

    if (!encontrado) {
        cout << "\n✘ Produto \"" << produtoBuscado << "\" não encontrado no sistema." << endl;
    }

    return 0;
}
