int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i--) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero = 5;
    int fat = fatorial(numero);
    std::cout << "Fatorial de " << numero << " é: " << fat << std::endl;
    return 0;
}
