
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// 1. imprime_ola
void imprime_ola() {
    printf("Ola, mundo!\n");
}

// 2. função quadrática
float a = 1, b = 2, c = 1;
float funcao_quadratica(float x) {
    return a*x*x + b*x + c;
}

// 3. celsius_para_fahrenheit
float celsius_para_fahrenheit(float c) {
    return (c * 9.0/5.0) + 32;
}

// 4. eh_primo
int eh_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// 5. calcula_imc
int calcula_imc(float peso, float altura) {
    float imc = peso / (altura * altura);
    if (imc < 18.5) return 0;
    else if (imc < 25.0) return 1;
    else if (imc < 30.0) return 2;
    else return 3;
}

void imprima_imc(float peso, float altura) {
    int resultado = calcula_imc(peso, altura);
    switch (resultado) {
        case 0: printf("Magreza\n"); break;
        case 1: printf("Saudável\n"); break;
        case 2: printf("Sobrepeso\n"); break;
        case 3: printf("Obesidade\n"); break;
    }
}

// 6. eh_palindromo
int eh_palindromo(int num) {
    int original = num, reverso = 0;
    while (num > 0) {
        reverso = reverso * 10 + num % 10;
        num /= 10;
    }
    return (reverso == original);
}

// 7. calcular_circulo
void calcular_circulo(float raio, float* perimetro, float* area) {
    *perimetro = 2 * M_PI * raio;
    *area = M_PI * raio * raio;
}

// 8. distancia
float distancia(float x1, float y1, float x2, float y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}
