#include <stdio.h>

void soma_janela(int vetor[], int tamanho) {
  int novo_vetor[tamanho - 1];
  int indice = 0;
  for (int i = 0; i < tamanho - 1; i++) {
    novo_vetor[indice] = vetor[i] + vetor[i + 1];
    indice++;
  }
  for (int i = 0; i < tamanho - 1; i++) {
    printf("%d ", novo_vetor[i]);
  }
  printf("\n");
  if (tamanho - 1 > 1) {
    soma_janela(novo_vetor, tamanho - 1);
  }
}

int main() {
  int vetor[10];
  for (int i = 0; i < 10; i++) {
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");
  
  soma_janela(vetor, 10);

  return 0;
}
