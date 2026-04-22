#include <iostream>
#include <string>
using namespace std;

int main() {
    const int ITENS = 5;
    string nome_item[ITENS];
    float preco_unitario[ITENS];
    int quantidade_comprada[ITENS];
    float subtotal[ITENS];
    float total = 0;

    cout << "=== Sistema de Fatura ===" << endl;

    // Leitura dos dados de cada item
    for (int i = 0; i < ITENS; i++) {
        cout << "\nItem " << (i + 1) << ":" << endl;
        cout << "  Nome: ";
        cin.ignore();
        getline(cin, nome_item[i]);
        cout << "  Preço unitário (MT): ";
        cin >> preco_unitario[i];
        cout << "  Quantidade: ";
        cin >> quantidade_comprada[i];

        // Calculamos o subtotal de cada item
        subtotal[i] = preco_unitario[i] * quantidade_comprada[i];
        total += subtotal[i];
    }

    // Exibimos a fatura detalhada
    cout << "\n========================================" << endl;
    cout << "           FATURA DETALHADA             " << endl;
    cout << "========================================" << endl;

    for (int i = 0; i < ITENS; i++) {
        cout << nome_item[i] << " x" << quantidade_comprada[i]
             << " @ " << preco_unitario[i] << " MT"
             << "  => " << subtotal[i] << " MT" << endl;
    }

    cout << "----------------------------------------" << endl;
    cout << "Total bruto: " << total << " MT" << endl;

    // Aplicamos desconto se o total ultrapassar 1000 MT
    if (total > 1000) {
        float desconto = total * 0.10;
        float totalComDesconto = total - desconto;
        cout << "Desconto (10%): -" << desconto << " MT" << endl;
        cout << "TOTAL COM DESCONTO: " << totalComDesconto << " MT" << endl;
    } else {
        cout << "TOTAL A PAGAR: " << total << " MT" << endl;
    }

    cout << "========================================" << endl;

    return 0;
}
