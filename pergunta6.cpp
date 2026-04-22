#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Função para converter texto para minúsculas
string minusculo(string texto) {
    transform(texto.begin(), texto.end(), texto.begin(), ::tolower);
    return texto;
}

int main() {
    
    const int PRODUTOS = 20;

    string nomes[PRODUTOS] = {
        "arroz", "feijao", "acucar", "sal", "oleo",
        "farinha", "leite", "manteiga", "ovos", "pao",
        "frango", "carne", "peixe", "tomate", "cebola",
        "batata", "cenoura", "babao", "detergente", "agua"
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
    getline(cin, produtoBuscado);

    // Converter entrada para minúsculas
    produtoBuscado = minusculo(produtoBuscado);

    for (int i = 0; i < PRODUTOS; i++) {
        if (minusculo(nomes[i]) == produtoBuscado) {
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
