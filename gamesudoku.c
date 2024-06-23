#include <stdio.h>
#include <stdbool.h>

//se o número é valido

// Função para verificar se um número pode ser colocado em uma posição
bool numvalido(int matriz[9][9], int linha, int coluna, int nu){
    for (int x=0;x <9; x++){
        if(matriz[linha][x]==nu){
            return false;
    }
}
// Verifica se o número já existe na mesma coluna
    for (int y=0; y <9; y++){
        if(matriz[y][coluna]==nu){
            return false;
        }
    }
    // Verifica se o número já existe no subquadrante 3x3
    int col= coluna - coluna%3;
    int lin= linha - linha%3;
     for (int i=0; i <3; i++){
      for (int j=0; j <3; j++){
        if(matriz[i+ lin][j+col]==nu){
            return false;
        }
      }
     }
            return true;

}
void loop(int matriz[9][9], int aux){
 for (int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if( matriz[i][j] == 0);{
            
            return 0;
           
            
        
            }
            }
 }
}
 

 



// Função para alterar um elemento da matriz
void inserir(int matriz[9][9],int l, int c, int n){
    printf("Coloque o numero da fileira de 0 a 8: ");
    scanf("%d",&l);
     printf("Coloque o numero da coluna de 0 a 8: ");
    scanf("%d",&c);
    printf("Coloque o numero que deseja trocar: ");
    scanf("%d",&n);
    if (l>=0 && l  < 9 && c >=0 && c < 9){
    // Verifica se o novo valor é válido na posição especificada
    if (numvalido(matriz, l, c, n)) {
        matriz[l][c]= n;
        printf("Movimento realizado com sucesso");
    }
 else {
            printf("Movimento inválido! O número %d já existe na linha, coluna ou subquadrante 3x3.\n", n);
 }

} else {
        printf("Índices fora dos limites da matriz!\n");
    }
}


// Função para imprimir a matriz

void printmatriz(int matriz[9][9], int size){
    printf("matriz sudoku: \n");
    for (int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
     
    }
}
int main() {
    int matriz[9][9]={
        {5,0,0,3,0,0,0,0,0},
        {0,7,0,0,0,0,1,0,0},
        {0,1,0,5,0,0,2,0,0},
        {0,8,0,2,0,0,0,6,0},
        {4,0,0,8,0,3,0,1,0},
        {7,0,0,2,0,0,0,2,0},
        {0,6,0,0,0,0,8,0,0},
        {0,0,0,0,4,0,0,9,0},
        {0,0,0,0,0,0,5,0,7}
    };
    printmatriz(matriz,9);
    while( loop != 0  ){
    inserir(matriz,4,4,9);
    printmatriz(matriz,9);
    if(loop ==0){
        printf("o jogo acabou");
        break;
        
    }
   
    }
   
    
    return 0;
    
}
