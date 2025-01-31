    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>
    #include <time.h>
    #include <Windows.h>
    #include <conio2.h>

    #define max_colunas 89
    #define max_linhas 25




    void cacagrande(int primeiro){// função para pintar a tela de azul e imprimir a palavra caca niqueis grande
        textbackground(BLUE);
        textcolor(WHITE);
        gotoxy(1,1);

        for (int i = 1; i <= max_linhas; i++){
            for (int c = 1; c <= max_colunas; c++){
                printf(" ");
            }
            printf("\n");
          }

        gotoxy(14, 4);
        printf("                                          __                     \n");
        gotoxy(14, 5);
        printf("  _____                           _   _  / /                _    \n");
        gotoxy(14, 6);
        printf(" / ____|                         | \\ | |/_/                (_)   \n");
        gotoxy(14, 7);
        printf("| |     __ _  ___ __ _   ______  |  \\| |_  __ _ _   _  ___ _ ___ \n");
        gotoxy(14, 8);
        printf("| |    / _` |/ __/ _` | |______| | . ` | |/ _` | | | |/ _ \\ / __|\n");
        gotoxy(14, 9);
        printf("| |___| (_| | (_| (_| |          | |\\  | | (_| | |_| |  __/ \\__ \\ \n");
        gotoxy(14, 10);
        printf(" \\_____\\__,_|\\___\\__,_|          |_| \\_|_|\\__, |\\__,_|\\___|_|___/\n");
        gotoxy(14, 11);
        printf("              \\_ \\                           | |                       \n");
        gotoxy(14, 12);
        printf("              |__/                           |_|                      \n");

//============================================== clique para continuar ==============================================

        if(primeiro == 1){
            gotoxy(26,16);
            printf("Pressione qualquer tecla para continuar");
            getch();
        }

    }


    void numerosgrandes(int randomico, int colun){// função para imprimir os numeros grandes



        //======================================= 1 =======================================

                if(randomico == 1){
                    char linha1[] = "    __     ";
                    char linha2[] = "   /_ |    ";
                    char linha3[] = "    | |    ";
                    char linha4[] = "    | |    ";
                    char linha5[] = "    | |    ";
                    char linha6[] = "    |_|    ";

                    gotoxy(colun, 10);
                    printf("%s", linha1);
                    gotoxy(colun, 11);
                    printf("%s", linha2);
                    gotoxy(colun, 12);
                    printf("%s", linha3);
                    gotoxy(colun, 13);
                    printf("%s", linha4);
                    gotoxy(colun, 14);
                    printf("%s", linha5);
                    gotoxy(colun, 15);
                    printf("%s", linha6);
                }

                //======================================= 2 =======================================

                else if(randomico == 2){
                    char linha1[] = "    ___    ";
                    char linha2[] = "   |__ \\  ";
                    char linha3[] = "      ) |  ";
                    char linha4[] = "     / /   ";
                    char linha5[] = "    / /_   ";
                    char linha6[] = "   |____|  ";

                    gotoxy(colun, 10);
                    printf("%s", linha1);
                    gotoxy(colun, 11);
                    printf("%s", linha2);
                    gotoxy(colun, 12);
                    printf("%s", linha3);
                    gotoxy(colun, 13);
                    printf("%s", linha4);
                    gotoxy(colun, 14);
                    printf("%s", linha5);
                    gotoxy(colun, 15);
                    printf("%s", linha6);
                }

                //======================================= 3 =======================================

                else if(randomico == 3){
                    char linha1[] = "   ____    ";
                    char linha2[] = "  |___ \\  ";
                    char linha3[] = "    __) |  ";
                    char linha4[] = "   |__ <   ";
                    char linha5[] = "   ___) |  ";
                    char linha6[] = "  |____/   ";

                    gotoxy(colun, 10);
                    printf("%s", linha1);
                    gotoxy(colun, 11);
                    printf("%s", linha2);
                    gotoxy(colun, 12);
                    printf("%s", linha3);
                    gotoxy(colun, 13);
                    printf("%s", linha4);
                    gotoxy(colun, 14);
                    printf("%s", linha5);
                    gotoxy(colun, 15);
                    printf("%s", linha6);
                }

                //======================================= 4 =======================================

                else if(randomico == 4){
                    char linha1[] = "   _  _    ";
                    char linha2[] = "  | || |   ";
                    char linha3[] = "  | || |_  ";
                    char linha4[] = "  |__   _| ";
                    char linha5[] = "     | |   ";
                    char linha6[] = "     |_|   ";

                    gotoxy(colun, 10);
                    printf("%s", linha1);
                    gotoxy(colun, 11);
                    printf("%s", linha2);
                    gotoxy(colun, 12);
                    printf("%s", linha3);
                    gotoxy(colun, 13);
                    printf("%s", linha4);
                    gotoxy(colun, 14);
                    printf("%s", linha5);
                    gotoxy(colun, 15);
                    printf("%s", linha6);
                }

                //======================================= 5 =======================================

                else if(randomico == 5){
                    char linha1[] = "   _____   ";
                    char linha2[] = "  | ____|  ";
                    char linha3[] = "  | |__    ";
                    char linha4[] = "  |___ \\  ";
                    char linha5[] = "   ___) |  ";
                    char linha6[] = "  |____/   ";

                    gotoxy(colun, 10);
                    printf("%s", linha1);
                    gotoxy(colun, 11);
                    printf("%s", linha2);
                    gotoxy(colun, 12);
                    printf("%s", linha3);
                    gotoxy(colun, 13);
                    printf("%s", linha4);
                    gotoxy(colun, 14);
                    printf("%s", linha5);
                    gotoxy(colun, 15);
                    printf("%s", linha6);
                }

                //======================================= 6 =======================================

                else if(randomico == 6){
                    char linha1[] = "     __    ";
                    char linha2[] = "    / /    ";
                    char linha3[] = "   / /_    ";
                    char linha4[] = "  |  _ \\  ";
                    char linha5[] = "  | (_) |  ";
                    char linha6[] = "   \\___/  ";

                    gotoxy(colun, 10);
                    printf("%s", linha1);
                    gotoxy(colun, 11);
                    printf("%s", linha2);
                    gotoxy(colun, 12);
                    printf("%s", linha3);
                    gotoxy(colun, 13);
                    printf("%s", linha4);
                    gotoxy(colun, 14);
                    printf("%s", linha5);
                    gotoxy(colun, 15);
                    printf("%s", linha6);
                }

                //======================================= 7 =======================================

                else if(randomico == 7){
                    char linha1[] = "  ______   ";
                    char linha2[] = " |____  |  ";
                    char linha3[] = "     / /   ";
                    char linha4[] = "    / /    ";
                    char linha5[] = "   / /     ";
                    char linha6[] = "  /_/      ";

                    gotoxy(colun, 10);
                    printf("%s", linha1);
                    gotoxy(colun, 11);
                    printf("%s", linha2);
                    gotoxy(colun, 12);
                    printf("%s", linha3);
                    gotoxy(colun, 13);
                    printf("%s", linha4);
                    gotoxy(colun, 14);
                    printf("%s", linha5);
                    gotoxy(colun, 15);
                    printf("%s", linha6);
                }

                //======================================= 8 =======================================

                else if(randomico == 8){
                    char linha1[] = "    ___    ";
                    char linha2[] = "   / _ \\  ";
                    char linha3[] = "  | (_) |  ";
                    char linha4[] = "   > _ <   ";
                    char linha5[] = "  | (_) |  ";
                    char linha6[] = "   \\___/  ";

                    gotoxy(colun, 10);
                    printf("%s", linha1);
                    gotoxy(colun, 11);
                    printf("%s", linha2);
                    gotoxy(colun, 12);
                    printf("%s", linha3);
                    gotoxy(colun, 13);
                    printf("%s", linha4);
                    gotoxy(colun, 14);
                    printf("%s", linha5);
                    gotoxy(colun, 15);
                    printf("%s", linha6);
                }

                //======================================= 9 =======================================

                else if(randomico == 9){
                    char linha1[] = "    ___    ";
                    char linha2[] = "   / _ \\  ";
                    char linha3[] = "  | (_) |  ";
                    char linha4[] = "   \\__  | ";
                    char linha5[] = "     / /   ";
                    char linha6[] = "    /_/    ";

                    gotoxy(colun, 10);
                    printf("%s", linha1);
                    gotoxy(colun, 11);
                    printf("%s", linha2);
                    gotoxy(colun, 12);
                    printf("%s", linha3);
                    gotoxy(colun, 13);
                    printf("%s", linha4);
                    gotoxy(colun, 14);
                    printf("%s", linha5);
                    gotoxy(colun, 15);
                    printf("%s", linha6);
                }

                //======================================= 10 =======================================

                else{
                    char linha1[] = "  __  ___ ";
                    char linha2[] = " /_ |/ _ \\";
                    char linha3[] = "  | ||| || ";
                    char linha4[] = "  | ||| || ";
                    char linha5[] = "  | |||_|| ";
                    char linha6[] = "  |_|\\___/ ";


                    gotoxy(colun, 10);
                    printf("%s", linha1);
                    gotoxy(colun, 11);
                    printf("%s", linha2);
                    gotoxy(colun, 12);
                    printf("%s", linha3);
                    gotoxy(colun, 13);
                    printf("%s", linha4);
                    gotoxy(colun, 14);
                    printf("%s", linha5);
                    gotoxy(colun, 15);
                    printf("%s", linha6);
                }
    }

    void telajogo1(){// funçao para fazer a tela do jogo 1

//============================================== tela vermelha ==============================================

        textbackground(RED);
        gotoxy(1, 1);
        for (int i = 1; i <= max_linhas; i++){
            for (int c = 1; c <= max_colunas; c++){
                printf(" ");
            }
            Sleep(25);
            printf("\n");
        }

        //============================================== contorno preto ==============================================

            textbackground(BLACK);
            textcolor(YELLOW);
            gotoxy(21, 8);
            printf("%c", 201);

            for (int c = 24; c < 71; c++){
                printf("%c", 205);
            }
            printf("%c\n", 187);

            for (int linha = 9; linha < 18; linha++){
                gotoxy(21, linha);
                printf("%c", 186); // caractere ║
                gotoxy(69, linha);
                printf("%c", 186); // caractere ║
            }
            for (int linha = 9; linha < 18; linha++){
                gotoxy(22, linha);
                printf(" ");
                gotoxy(68, linha);
                printf(" ");
            }

            gotoxy(21, 18);
            printf("%c", 200); // caractere ╚

            for (int coluna = 24; coluna < 71; coluna++){
                printf("%c", 205); // caractere ═
            }
            printf("%c", 188); // caractere ╝

//============================================== quadrado do meio branco ==============================================

            textbackground(WHITE);

            for (int l = 9; l <= 17; l++){
                for (int c = 23; c <= 67; c++){
                    gotoxy(c, l);
                    printf(" ");
                }
                printf("\n");
            }

//============================================== contorno amarelo quadrado 1 ==============================================

            textbackground(YELLOW);
            textcolor(BLACK);
            gotoxy(23, 9);
            printf("%c", 201);

            for (int c = 24; c < 37; c++){
                printf("%c", 205);
            }
            printf("%c\n", 187);

            for (int linha = 10; linha < 17; linha++){
                gotoxy(23, linha);
                printf("%c", 186); // caractere ║
                gotoxy(37, linha);
                printf("%c", 186); // caractere ║
            }

            gotoxy(23, 17);
            printf("%c", 200); // caractere ╚

            for (int coluna = 24; coluna < 37; coluna++){
                printf("%c", 205); // caractere ═
            }
            printf("%c", 188); // caractere ╝

//============================================== contorno amarelo quadrado 2 ==============================================

            gotoxy(38, 9);
            printf("%c", 201);

            for (int c = 24; c < 37; c++){
                printf("%c", 205);
            }
            printf("%c\n", 187);

            for (int linha = 10; linha < 17; linha++){
                gotoxy(38, linha);
                printf("%c", 186); // caractere ║
                gotoxy(52, linha);
                printf("%c", 186); // caractere ║
            }

            gotoxy(38, 17);
            printf("%c", 200); // caractere ╚

            for (int coluna = 24; coluna < 37; coluna++){
                printf("%c", 205); // caractere ═
            }
            printf("%c", 188); // caractere ╝

//============================================== contorno amarelo quadrado 3 ==============================================


            gotoxy(53, 9);
            printf("%c", 201);

            for (int c = 24; c < 37; c++){
                printf("%c", 205);
            }
            printf("%c\n", 187);

            for (int linha = 10; linha < 17; linha++){
                gotoxy(53, linha);
                printf("%c", 186); // caractere ║
                gotoxy(67, linha);
                printf("%c", 186); // caractere ║
            }

            gotoxy(53, 17);
            printf("%c", 200); // caractere ╚

            for (int coluna = 24; coluna < 37; coluna++){
                printf("%c", 205); // caractere ═
            }
            printf("%c", 188); // caractere ╝
    }


    void carregando(){// função da tela de carregamnto carregamento
        //============================================== carregamento ==============================================

        gotoxy(12, 16);
        printf("CARREGANDO");

        gotoxy(40,18);
        printf("          ");

        gotoxy(79,24);
        printf("        ");
        textbackground(BLACK);
        gotoxy(24, 16);
        printf("                                                        ");



        textbackground(RED);
        gotoxy(24, 16);

        for (int c = 16; c <= 25; c++){
            printf(" ");
            Sleep(500);
        }
        for (int c = 26; c <= 66; c++){
            printf(" ");
            //Sleep(100);
        }
        for (int c = 67; c <= 71; c++){
            printf(" ");
            //Sleep(500);
        }
    }


   int calcularpontosjogo1(int a, int b, int c, int pontos){// função para calcular os pontos do jogo 1
        int temp;

        if(b > a){
            temp = a;
            a = b;
            b = temp;
        }

        if(c > a){
            temp = a;
            a = c;
            c = temp;
        }

        if(c > b){
            temp = b;
            b = c;
            c = temp;
        }

        textbackground(RED);
        textcolor(BLACK);

        if (a == b && b == c){ // Condição todos iguais
            pontos += 10;
            gotoxy(28,20);
            printf("Parabennsss voce fez um jackpot!!!!");
        }else if ((a == b + 1) && (b == c + 1)){ // Condição em sequência
            pontos += 5;
            gotoxy(31,20);
            printf("Voce acertou uma sequencia!!!");
        }else if (a == b || b == c || a == c){ // Condição pelo menos 2 iguais
            pontos += 2;
            gotoxy(30,20);
            printf("Voce conseguiu apenas 2 iguais!!");
        }else if (a != b && b != c && a != c){
            gotoxy(35,20);
            printf(" Boa sorte na proxima");
        }
        return pontos;
   }


    char perguntasecontinua(int col, int linha){// função para saber se a pessoas continua no jogo ou volta para o menu
            char continuar;

            gotoxy(col,linha);
            textbackground(RED);
            textcolor(BLACK);
            printf("Deseja continuar? S/N");
            continuar = getch();
            gotoxy(35,22);
            printf("                     ");
            return continuar;

    }


    char escolha1(){// função para escolha do jogo

        char escolha;

        textbackground(BLUE);
        textcolor(WHITE);

        gotoxy(26,16);
        printf("                                        ");

        gotoxy(40,16);
        printf("1 - JACKPOT");

        gotoxy(40,18);
        printf("2 - BINGO");

        gotoxy(79,24);
        printf("0 - SAIR");
        do{

            escolha = getch();

       }while(escolha != '0' && escolha != '1' && escolha != '2');

       return escolha;
    }



    int main(){
        system("mode con:cols=89 lines=25");

        char continuar;
        int primeiro = 1;

        do{

// ============================================== pintar a tela de azul e caça - niqueis grande==============================================

    cacagrande(primeiro); // função============

//============================================== escolha do jogo ==============================================

        char escolha = escolha1();  // função============

        if(escolha == '0'){// sair
            return 0;
       }

        carregando();

//============================================== do_while de tentativas ==============================================

        if(escolha == '1'){ //jogo 1

            int tentativa = 1, pontos = 0;


            do{

                telajogo1(); // função============


    //============================================== tabela de pontuação ==============================================

                textbackground(RED);
                gotoxy(4,3);
                textcolor(BLACK);
                printf("Tentativas: %d",tentativa);
                gotoxy(4,4);
                printf("Pontos: %d", pontos);

    //============================================== escrever e armazenar um numero aleatorio ==============================================

                textbackground(WHITE);
                textcolor(RED);

                int colun, a, b, c, i = 1;

                srand(time(0));

                while(i <=60){

                    int randomico = (rand() % 10) + 1;


                    Sleep(150);

                    if(i < 20){
                        colun = 25;
                    }else if(i > 20 && i < 40){
                        colun = 40;
                    }else if (i > 40 && i < 60){
                        colun = 55;
                    }


                    else if(i == 20){
                        colun = 25;
                        a = randomico; // a recebe o primeiro valor randomico
                        //a = 1;
                    }else if(i == 40){
                        colun = 40;
                        b = randomico; // b recebe o segundo valor randomico
                        //b = 1;
                        //b = 2;
                    }else if(i == 60){
                        colun = 55;
                        c = randomico; // c recebe o terceiro valor randomico
                        //c = 1;
                        //c = 3;
                    }

                    numerosgrandes(randomico, colun); // função============

                    i++;
                }

    //============================================== calcular os pontos ==============================================

                pontos = calcularpontosjogo1(a, b, c, pontos); // função============
                gotoxy(4,4);
                printf("Pontos: %d", pontos);

    //============================================== perguntar se vai jogar de novo ==============================================

                continuar = perguntasecontinua(35,22); // função============
                tentativa++;

            }while (continuar == 's' || continuar == 'S');
        }

        else if (escolha == 2){

        }

    primeiro = 0;
    }while (continuar != 's' || continuar != 'S');


//============================================== fim do codigo ==============================================

            return 0;
    }
