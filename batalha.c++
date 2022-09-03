#include <iostream>
#include <locale.h>
#include <ctime>
#include <windows.h>
#define TAM 7
#define TAM2 1
#define TAM3 7
using namespace std;

/*Vai pedir o nome da equipe 1 e equipe 2. Coloque os nomes sem ^, ~ ou outro símbolo. Vai gerar as 2 tabelas e mostrar.
Irá digitar primeiro o número da coluna e depois da linha, respeitando o limite entre os parenteses. Depois de informar os
números, vai mostrar, ao mesmo tempo, as 2 palavras das 2 equipes. Caso somente a equipe 1 conseguiu ler, digite 1.
Caso somente a equipe 2, digite 2. Caso as 2 acertarem, digite 3. Se ninguém, digite 0. Sempre será atualizado a pontuação
depois de informar qual equipe ganhou o ponto e sempre irá mostrar a tabela atualizada com as palavras já lidas.*/

int main()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    string mat[TAM][TAM3] = {}, mat2[TAM][TAM3] = {}, name_eq1, name_eq2;
    int number2 = 0, number = 0, cond = 0, ponto = 0, equipe1 = 0, equipe2 = 0;
    string matstring[7][7] = {{"", "SAPO", "CHINELO", "GARRAFA", "SOCO", "ARARA", "COMUNIDADE"}, {"", "JACARÉ", "ABELHA", "COLHER", "CAMISA", "DADO", "HOSPITAL"}, {"", "ÁRVORE", "GATO", "REGADOR", "TESOURA", "JUDÔ", "GAMBIARRA"}, {"", "MOSCA", "BOLA", "CARA", "ESCOLA", "KIWI", "MELANCIA"}, {"", "VOLANTE", "BOCA", "PÁ", "LARANJA", "CURTO", "ALFINETE"}, {"", "PAÇOCA", "GATO", "VEGETAL", "FACA", "BALA", "FOTO"}};
    string matstring2[7][7] = {{"", "CHUVA", "BOTA", "BARATA", "BALÃO", "AMIGO", "LIMÃO"}, {"", "TOMATE", "CABELO", "MINHOCA", "PEGADA", "NARIZ", "VITAMINA"}, {"", "TERRENO", "BARRIGA", "CADEADO", "RAPOSA", "FICHA", "TELEVISÃO"}, {"", "PASSARELA", "JOANINHA", "CHUPETA", "CHALEIRA", "CHOCOLATE", "CAMINHÃO"}, {"", "BANHEIRA", "CARTEIRA", "BILHETE", "BARCO", "REGADOR", "TARTARUGA"}, {"", "FORMIGA", "MAR", "SORVETE", "GARFO", "MILHO", "TELHA"}};
    setlocale(LC_ALL, "Portuguese");
    unsigned seed = time(0);
    srand(seed);
    cout << "Qual é o nome da Equipe 1? ";
    cin >> name_eq1;
    cout << "Qual é o nome da Equipe 2? ";
    cin >> name_eq2;
    SetConsoleTextAttribute(h,13);
    cout << "\n\t\t\t\t BATALHA DA LEITURA";
    cout << "\n\t\t" << name_eq1;
    cout << "\n\t\t\t1" << "\t2" << "\t3" << "\t4" << "\t5" << "\t6\n";
    for (int i = 0; i < TAM; i++){
            for (int j = 0;j < TAM3; j++){
                if(i == 0){
                    SetConsoleTextAttribute(h,0);
                    mat[0][0] = "0|";
                    mat[1][0] = "1|";
                    mat[2][0] = "2|";
                    mat[3][0] = "3|";
                    mat[4][0] = "4|";
                    mat[5][0] = "5|";
                }
                if(i == 0 && j ==0){
                        cout << "\t";
                }
                cout << "\t" << mat[i][j];
            }
    cout << "\t\n\t";
    }
    cout << "Pontuação da equipe 1: " << equipe1;
    cout << "\n";
    SetConsoleTextAttribute(h,1);
    cout << "\n\t\t" << name_eq2;
    cout << "\n\t\t\t1" << "\t2" << "\t3" << "\t4" << "\t5" << "\t6\n";
    for (int i = 0; i < TAM; i++){
            for (int j = 0;j < TAM3; j++){
                if(i == 0){
                    SetConsoleTextAttribute(h,4);
                    mat2[0][0] = "0|";
                    mat2[1][0] = "1|";
                    mat2[2][0] = "2|";
                    mat2[3][0] = "3|";
                    mat2[4][0] = "4|";
                    mat2[5][0] = "5|";
                }
                if(i == 0 && j ==0){
                        cout << "\t";
                }
                cout << "\t" << mat2[i][j];
            }
    cout << "\t\n\t";
    }
    cout << "Pontuação da equipe 2: " << equipe2;
    SetConsoleTextAttribute(h,10);
    do{
    SetConsoleTextAttribute(h,10);
    cout << "\n\n Digite um número de 1 á 6 (coluna): ";
    cin >> number2;
    cout << "\n Digite um número de 0 á 5 (linha): ";
    cin >> number;
    mat[number][number2] = matstring[number][number2];
    mat2[number][number2] = matstring2[number][number2];
    cout << "Coordenada: " << "Coluna: " << number2 << " - " << "Linha: " << number;
    SetConsoleTextAttribute(h,13);
    cout << "\n\t\t\t\t BATALHA DA LEITURA";
    cout << "\n\t\t" << name_eq1;
    cout << "\n\t\t\t1" << "\t2" << "\t3" << "\t4" << "\t5" << "\t6\n";
    for (int i = 0; i < TAM; i++){
            for (int j = 0;j < TAM3; j++){
                if(i == 0){
                    SetConsoleTextAttribute(h,0);
                    mat[0][0] = "0|";
                    mat[1][0] = "1|";
                    mat[2][0] = "2|";
                    mat[3][0] = "3|";
                    mat[4][0] = "4|";
                    mat[5][0] = "5|";
                }
                if(i == 0 && j ==0){
                        cout << "\t";
                }
                cout << "\t" << mat[i][j];
            }
    cout << "\t\n\t";
    }
    cout << "Pontuação da equipe 1: " << equipe1;
    cout << "\n";

    SetConsoleTextAttribute(h,1);
    cout << "\n\t\t" << name_eq2;
    cout << "\n\t\t\t1" << "\t2" << "\t3" << "\t4" << "\t5" << "\t6\n";
    for (int i = 0; i < TAM; i++){
            for (int j = 0;j < TAM3; j++){
                if(i == 0){
                    SetConsoleTextAttribute(h,4);
                    mat2[0][0] = "0|";
                    mat2[1][0] = "1|";
                    mat2[2][0] = "2|";
                    mat2[3][0] = "3|";
                    mat2[4][0] = "4|";
                    mat2[5][0] = "5|";
                }
                if(i == 0 && j ==0){
                        cout << "\t";
                }
                cout << "\t" << mat2[i][j];
            }
    cout << "\t\n\t";
    }
    cout << "Pontuação da equipe 2: " << equipe2;
    SetConsoleTextAttribute(h,5);
    cout << "\nEquipe 1 => Digite 1 \nEquipe 2 => Digite 2 \nAs duas equipes => Digite 3 \nNenhuma das equipes => Digite 0 \nQual equipe ganhou o ponto? ";
    cin >> ponto;
    do{
    if(ponto < 0 || ponto > 3){
    cout << "Desconheço essa equipe...\n";
    cout << "\nQual equipe ganhou o ponto? Se os dois acertarem, digite 3 e 0 caso nenhum acerte. ";
    cin >> ponto;
    }
    }while(ponto < 0 || ponto > 3);
    if(ponto == 1){
     equipe1++;
    } else if(ponto == 2){
     equipe2++;
    } else if(ponto == 3){
     equipe1++;
     equipe2++;
    }
    system("cls");
    }while(cond < 1);
}
