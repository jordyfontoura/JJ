int produtoInt(int vetor1[], int vetor2[], int tamanho){
    int resultado = 0, i;
    for (i = 0; i < tamanho; i++)
        resultado += vetor1[i] * vetor2[i];
    return resultado;
}