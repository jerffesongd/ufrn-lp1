// arquivo: main.cpp
#include <iostream>

float calcularMedia(int* notas, int tamanho) {
    int soma = 0;
    for (int i = 0; i <= tamanho; i++) {  // ERRO: deve ser i < tamanho
        soma += notas[i];
    }
    return soma / float(tamanho);
}

int encontrarMaior(int* notas, int tamanho) {
    int maior = notas[0];
    for (int i = 1; i < tamanho; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

int main() {
    int notas[5] = {7, 8, 9, 10, 6};
    float media = calcularMedia(notas, 5);
    int maior = encontrarMaior(notas, 5);

    std::cout << "Média: " << media << std::endl;
    std::cout << "Maior nota: " << maior << std::endl;

    return 0;
}
