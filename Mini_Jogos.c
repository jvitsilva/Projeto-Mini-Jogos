// AUTORES: JOAO RENAN, CARLOS HENRIQUE E JOAO VITOR //

#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void main() {

	// tamanho do compilador
	SMALL_RECT windowSize = {0, 0, 71, 40};
	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &windowSize);
	system ("color 2");

	int escolha;
	int comando;
	int loading;
	printf("ROBCO CONSOLE DE JOGOS ELETRONICOS   v1.10\n");
	printf("\n\nGostaria de iniciar\?:\n");
	printf("SIM[1] NAO[0] \n->");
	scanf("%i",&escolha);

	while(escolha == 1) {

		printf("\n  ********************************************************************\n");
		printf("  ********************************************************************\n");
		printf("  ********  XXX      XXX  XXXXXXX  XXXX        XX  XX     XX  ********\n");
		printf("  ********  XX XX  XX XX  XX       XX  XX      XX  XX     XX  ********\n");
		printf("  ********  XX   XX   XX  XX       XX   XX     XX  XX     XX  ********\n");
		printf("  ********  XX        XX  XXXXX    XX    XX    XX  XX     XX  ********\n");
		printf("  ********  XX        XX  XX       XX      XX  XX  XX     XX  ********\n");
		printf("  ********  XX        XX  XX       XX       XX XX  XX     XX  ********\n");
		printf("  ********  XX        XX  XXXXXXX  XX         XXX  XXXXXXXXX  ********\n");
		printf("  ********                                                    ********\n");
		printf("  ********  OPCOES DE JOGOS:                                  ********\n");
		printf("  ******** - Opcao [1]: Pergunta e resposta                   ********\n");
		printf("  ******** - Opcao [2]: Advinhe o numero                      ********\n");
		printf("  ******** - Opcao [3]: Olho de cobra                         ********\n");
		printf("  ******** - Opcao [4]: Sair                                  ********\n");
		printf("  ********************************************************************\n");
		printf("  ********************************************************************\n");
		printf("\nComando: ");
		scanf("%i",&comando);

		switch(comando) {
			case 1:
				while(comando==1) {

					// carregando jogo
					printf("\nAguarde o jogo ser carregado...\n");
					char load[11] = "carregando\n";
					for (loading = 0; loading < 11; loading++) {
						printf("%c ",load[loading]);
						Sleep(500); // sleep 0,5 segundo
					}

					//// PRIMEIRO JOGO //// 

					int resposta[3];
					printf("\nVoce escolheu jogar: \n\n");
					printf("          ************************");
					printf("\n          * PERGUNTE E RESPONDA! *\n");
					printf("          ************************");
					printf("\n- Digite o numero correspondente a sua resposta\n\n");

					//pergunta 1
					printf("1 - O que significa Washington DC\?\n");
					printf("\n1) Washington District of Capital");
					printf("\n2) Washington District of Columbia");
					printf("\n3) Washington District of Court\n->");
					scanf("%i",&resposta[0]);
					if(resposta[0] ==2) {
						printf("- Parabens, resposta correta!\n\n\n");
					} else if(resposta[0]!= 2 ) {
						printf("- Resposta errada, a resposta correta era: Washington District of Columbia\n\n\n");
					}

					//pergunta 2
					printf("2 - Qual o nome da formula mais conhecida da equacao do segundo grau\?\n");
					printf("\n1) Formula de Bhaskara");
					printf("\n2) Formula de Euler");
					printf("\n3) Formula de Heron\n->");
					scanf("%i",&resposta[1]);
					if(resposta[1]==1) {
						printf("- Parabens, resposta correta!\n\n\n");
					} else if(resposta[1]!=1) {
						printf("- Respota errada,a respota correta era: Formula de Bhaskara\n\n\n");
					}

					//pergunta 3
					printf("Ultima pergunta: Quem foi FIBONACCI\?\n");
					printf("\n1) Um pintor renascentista");
					printf("\n2) Ator italiano");
					printf("\n3) Um matematico\n->");
					scanf("%i",&resposta[2]);
					if(resposta[2]==3) {
						printf("- Parabens, resposta correta!\n\n\n");
					} else if(resposta[2]!=3) {
						printf("- Resposta incorreta, a resposta correta era:Um matematico\n\n\n");
					}



					printf(" DESEJA JOGAR NOVAMENTE \?\n SIM[1] VOLTAR PARA MENU [0]\n");
					scanf("%i",&comando);
				}
				break;

			case 2:
				while(comando==2) {

					// carregando jogo
					printf("Aguarde o jogo ser carregado...\n");
					char load[11] = "carregando\n";
					for (loading = 0; loading < 11; loading++) {
						printf("%c ",load[loading]);
						Sleep(500); // sleep 0,5 segundo
					}

					//// SEGUNDO JOGO ////

					srand(time(NULL));
					int numero=rand() % 1000;
					int resposta;
					int controle;
					printf("\n      ************************");
					printf("\n      *  ADIVINHE O NUMERO!  *\n");
					printf("      ************************");
					printf("\n\n- ROBOZAO esta pensando em um numero...");
					printf("\nEste numero esta entre 0 e 1000,");
					printf("tente adivinhar sabendo que voce tem 5\ntentativas\n\n- Digite um numero: ");
					scanf("%i",&resposta);

					for(controle=1; controle<5; controle++) {
						while(resposta!=numero) {
							if(resposta<numero) {
								printf("- Numero abaixo do valor pensado,tente de novo\n-> ");
							} else if(resposta>numero) {
								printf("- Numero maior que o valor pensado,tente novamente\n-");
							}
							scanf("%i",&resposta);
							break;
						}
						if(controle == 4) {
							printf("\n  FIM DE JOGO\n");
						}
					}

					if(resposta==numero) {
						printf("- Meus parabens, voce acertou o numero!\n");
					} else if(resposta!=numero) {
						printf("- ROBOZAO estava pensando no numero %i\n",numero);
						printf("- VOCE EH FRACO, LHE FALTA ODIO!\n");
					}
					printf("\n DESEJA JOGAR NOVAMENTE\?\n SIM[2] VOLTAR PARA MENU[0]\n");
					scanf("%i",&comando);
				}
				break;
				
			case 3:
				while(comando==3) {

					// carregando jogo
					printf("Aguarde o jogo ser carregado...\n");
					char load[11] = "carregando\n";
					for (loading = 0; loading < 11; loading++) {
						printf("%c ",load[loading]);
						Sleep(500); // sleep 0,5 segundo
					}

					//// TERCEIRO JOGO ////

					srand(time(NULL));
					int rodada1=1,rodada2=1;
					int pr1=0,pr2=0,result=1,pp1=0,pp2=0,retirada=0;
					int prioridade=rand() % 100;
					char nome1[15],nome2[15];

					printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
					printf("\n \t\t\t    OLHO DE COBRA\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n-Dois jogadores competiram entre si jogando dados,quem chegar em 50\npontos ganha.");
					printf("\n-Depois de jogar os dados, a soma sera adcionada a sua pontuacao e o\njogador podera jogar quantas vezes quiser.");
					printf("\n-Caso um dos dados cair o valor 1, teremos olho de cobra e o jogador\nperde os pontos do turno.");
					printf("\n-Caso caiam dois dados com valor 1, teremos olhos de cobra e o jogador\nperdera todos os pontos.");
					fflush(stdin);
					printf("\n\n-Digite o nome do primeiro jogador:");
					fgets(nome1, 15, stdin);
					printf("-Digite o nome do segundo  jogador:");
					fgets(nome2, 15, stdin);

					if(prioridade<=50) {
						while(result) {
							rodada1=1;
							rodada2=1;
							while(rodada1) {
								int dado1=(rand()%6)+1;
								int dado2=(rand()%6)+1;
								printf("*****************************************************");
								printf("\n\n-Quem joga eh:%s\n",nome1);
								printf("-Aperte <ENTER> para jogar os dados");
								fflush(stdin);
								getchar();
								pr1=dado1+dado2;
								if(dado1==1 && dado2==1) {
									printf("\n-Olhos de cobra,dados obtidos foram:%i e %i,voce perdeu\ntodos os seus pontos\n",dado1,dado2);
									pp1=0;
									pr1=0;
									rodada1=0;
								} else if(dado1==1 || dado2==1) {
									printf("\n-Olho de cobra,dados obtidos foram:%i e %i voce perdeu\nos pontos dessa rodada\n",dado1,dado2);
									pp1=pp1-retirada;
									pr1=0;
									rodada1=0;
								} else if(dado1!=1 && dado2!=1) {
									retirada=retirada+pr1;
									pp1=pp1+pr1;
									printf("\n-Dados obtidos foram %i e %i.Total:%i",dado1,dado2,pp1);
									if(pp1>=50) {
										rodada1=0,rodada2=0,result=0;
									} else if(pp1<=49) {
										printf("\n-Gostaria de jogar os dados de novo\nSIM[1] NAO[0]\n");
										scanf("%i",&rodada1);
										pr1=0;
									}
								}
							}
							retirada=0;
							printf("\n-Pontucacao total de %s eh:%i\n",nome1,pp1);

							while(rodada2) {
								int dado3=(rand()%6)+1;
								int dado4=(rand()%6)+1;
								printf("*****************************************************");
								printf("\n\n-Quem joga eh:%s\n",nome2);
								printf("-Aperte <ENTER> para jogar os dados");
								fflush(stdin);
								getchar();
								pr2=dado3+dado4;
								if(dado3==1 && dado4==1) {
									printf("\n-Olhos de cobra,dados obtidos foram:%i e %i,voce perdeu\ntodos os seus pontos\n",dado3,dado4);
									pp2=0;
									pr2=0;
									rodada2=0;
								} else if(dado3==1 || dado4==1) {
									printf("\n-Olho de cobra,dados obtidos foram:%i e %i voce perdeu\nos pontos dessa rodada\n",dado3,dado4);
									pp2=pp2-retirada;
									pr2=0;
									rodada2=0;
								} else if(dado3!=1 && dado4!=1) {
									retirada=retirada+pr2;
									pp2=pp2+pr2;
									printf("\n-Dados obtidos foram %i e %i.Total:%i",dado3,dado4,pp2);
									if(pp2>=50) {
										rodada1=0,rodada2=0,result=0;
									} else if(pp2<=49) {
										printf("\n-Gostaria de jogar os dados de novo\nSIM[1] NAO[0]\n");
										scanf("%i",&rodada2);
										pr2=0;
									}
								}
							}
							retirada=0;
							printf("\n-Pontucacao total de %s eh:%i\n",nome2,pp2);
						}
						if(pp1>=50) {
							printf("\n-Jogador vencedor eh:%s",nome1);
						} else if(pp2>=50) {
							printf("\n-Jogador vencedor eh:%s",nome2);
						}
					}

					if(prioridade>=51) {
						while(result) {
							rodada1=1;
							rodada2=1;
							while(rodada2) {
								int dado3=(rand()%6)+1;
								int dado4=(rand()%6)+1;
								printf("*****************************************************");
								printf("\n\n-Quem joga eh:%s\n",nome2);
								printf("-Aperte <ENTER> para jogar os dados");
								fflush(stdin);
								getchar();
								pr2=dado3+dado4;
								if(dado3==1 && dado4==1) {
									printf("\n-Olhos de cobra,dados obtidos foram:%i e %i,voce perdeu todos os seus pontos\n",dado3,dado4);
									pp2=0;
									pr2=0;
									rodada2=0;
								} else if(dado3==1 || dado4==1) {
									printf("\n-Olho de cobra,dados obtidos foram:%i e %i voce perdeu os pontos dessa rodada\n",dado3,dado4);
									pp2=pp2-retirada;
									pr2=0;
									rodada2=0;
								} else if(dado3!=1 && dado4!=1) {
									retirada=retirada+pr2;
									pp2=pp2+pr2;
									printf("\n-Dados obtidos foram %i e %i.Total:%i",dado3,dado4,pp2);
									if(pp2>=50) {
										rodada1=0,rodada2=0,result=0;
									} else if(pp2<=49) {
										printf("\n-Gostaria de jogar os dados de novo\nSIM[1] NAO[0]\n");
										scanf("%i",&rodada2);
										pr2=0;
									}
								}
							} 
							retirada=0;
							printf("\n-Pontucacao total de %s eh:%i\n",nome2,pp2);


							while(rodada1) {
								int dado1=(rand()%6)+1;
								int dado2=(rand()%6)+1;
								printf("*****************************************************");
								printf("\n\n-Quem joga eh:%s\n",nome1);
								printf("-Aperte <ENTER> para jogar os dados");
								fflush(stdin);
								getchar();
								pr1=dado1+dado2;
								if(dado1==1 && dado2==1) {
									printf("\n-Olhos de cobra,dados obtidos foram:%i e %i,voce perdeu todos os seus pontos\n",dado1,dado2);
									pp1=0;
									pr1=0;
									rodada1=0;
								} else if(dado1==1 || dado2==1) {
									printf("\n-Olho de cobra,dados obtidos foram:%i e %i voce perdeu os pontos dessa rodada\n",dado1,dado2);
									pp1=pp1-retirada;
									pr1=0;
									rodada1=0;
								} else if(dado1!=1 && dado2!=1) {
									retirada=retirada+pr1;
									pp1=pp1+pr1;
									printf("\n-Dados obtidos foram %i e %i.Total:%i",dado1,dado2,pp1);
									if(pp1>=50) {
										rodada1=0,rodada2=0,result=0;
									} else if(pp1<=49) {
										printf("\n-Gostaria de jogar os dados de novo\nSIM[1] NAO[0]\n");
										scanf("%i",&rodada1);
										pr1=0;
									}
								}
							}
							retirada=0;
							printf("\n-Pontucacao total de %s eh:%i\n",nome1,pp1);
						}
						if(pp1>=50) {
							printf("\n-Jogador vencedor eh:%s",nome1);
						} else if(pp2>=50) {
							printf("\n-Jogador vencedor eh:%s",nome2);
						}
					}


					printf("\n\n-Gostaria de jogar olho de cobra de novo\?\n\nSIM[3] NAO[0]\n");
					scanf("%i",&comando);
				}
				break;

			case 4:

				printf("\n\n\n\n\n\n\n\n\n");
				printf("       \t\tXXXXXXXXXX   XXXXX   XXX      XXX  XXXXXXX   \n");
				printf("       \t\tXX          XX   XX  XX XX  XX XX  XX        \n");
				printf("       \t\tXX          XX   XX  XX   XX   XX  XX        \n");
				printf("       \t\tXX   XXXXX  XXXXXXX  XX        XX  XXXXX     \n");
				printf("       \t\tXX   XXXXX  XX   XX  XX        XX  XX        \n");
				printf("       \t\tXX      XX  XX   XX  XX        XX  XX        \n");
				printf("       \t\tXXXXXXXXXX  XX   XX  XX        XX  XXXXXXX   \n");
				printf("\n");
				printf("       \t\tXXXXXXXX   XX      XX   XXXXXXX  XXXXXXX      \n");
				printf("       \t\tXX    XX   XX      XX   XX       XX     XX     \n");
				printf("       \t\tXX    XX   XX      XX   XX       XX     XX    \n");
				printf("       \t\tXX    XX    XX    XX    XXXXX    XXXXXXXX     \n");
				printf("       \t\tXX    XX     XX  XX     XX       XX     XX    \n");
				printf("       \t\tXX    XX      XXXX      XX       XX      XX   \n");
				printf("       \t\tXXXXXXXX       XX       XXXXXXX  XX      XX   \n");
				printf("\n\t    CRIADORES: JOAO RENAN, CARLOS HENRIQUE E JOAO VITOR   \n");
				
				char load[25] = " \n\n\n\n\n\n\n\n\nENCERRANDO...\n";
				for (loading = 0; loading < 25; loading++) {
					printf("%c ",load[loading]);
					Sleep(500); // sleep 0,5 segundo
				}
				printf("\n PROGRAMA ENCERRADO!");
				exit(0);
				break;
		} 
	}
}
