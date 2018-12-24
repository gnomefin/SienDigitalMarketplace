

#include <stdio.h>
//#include <graphics.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <wchar.h>
#include "warna.h"
#include "arrow.h"
#include "cursor.h"
#define MAX 4
#define MIN 1

typedef struct katalog{

	char nama[70];
	int harga;
	int nomor;
	int quantity;
	
	struct katalog *prev, *next;
		
}katalog;

typedef struct costumer{
	
	char *name[70];
	char *address[70];
	
}costumer;

typedef struct node {
    char *name;
    int price;
    struct node * next;
} Node;

Node *atas = NULL;
Node *temp=NULL;
costumer *entries;


katalog *entry;
katalog *head = NULL;
katalog *tail = NULL;
katalog *tampil;
katalog *tampil2;
katalog *hapus;

double time_spent = 0;
int a = 0;
int pos = 1;
int sum = 0;
	int posisi = 1;
		int nomer = 0;
			int loop = 0;
				int quantity[20] = {};	
				int quantity1=0,quantity2=0,quantity3=0,quantity4=0,quantity5=0;
				int quantity6=0,quantity7=0,quantity8=0,quantity9=0,quantity10=0,
				quantity11=0,quantity12=0;
				int quantityfix1=0;
				int quantityfix2=0;
				int quantityfix3=0;
				int quantityfix4=0;
				int quantityfix5=0;
				int quantityfix6=0;
				int quantityfix7=0;
				int quantityfix8=0;
				int quantityfix9=0;
				int quantityfix10=0;
				int quantityfix11=0;
				int quantityfix12=0;
						int kart[20] = {};
							int total = 0;
								int total2 = 0;
									int total3 = 0;
								int counter_total = 0;
									int j = 0;
										int temp_belanjaan = 0;
										
										//password
										#define maxPasswordLength (int)15
								char password[maxPasswordLength + 1];
						char loginpassword[] = "sienltd";
				char ch;
			int characterPosition = 0;
//MENU KATALOG

	//buah
	char *bs1 = "Apel Amerika";
	int harga_bs1 = 25000; //perkilo
	int no_bs1 = 101;
	
	char *bs2 = "Mangga Arumanis";
	int harga_bs2 = 16000;
	int no_bs2 = 102;

	char *bs3 ="Nanas Kimono";
	int harga_bs3 = 12000;//perkilo
	int no_bs3 = 103;

	char *bs4 ="Anggur Monalisa";
	int harga_bs4= 80000;//perkilo
	int no_bs4 = 104;

	char *bs5 ="Tomat French";
	int harga_bs5 = 13000;//satuan
	int no_bs5 = 105;

	int temp_bs[] = { 25000 , 16000 , 12000 , 80000 , 13000 };
	
	//elektronik
	char *el1 ="TV LED Panasnich VIERA 32'' Inch.";
	int harga_el1 = 2155000;
	int no_el1 = 201;

	char *el6 ="Lenopo Stereo Bombud LS293D";
	int harga_el6 = 3190000;
	int no_el6 = 202;
	
	char *el2 ="HP Envy 15 X360 AMD Ryzen 5 TOUCH";
	int harga_el2 = 10750000;
	int no_el2 = 202;

	char *el3 ="Kodok Pixpro 5x Zoom FZ53-BK 16MP";
	int harga_el3 = 1400000;
	int no_el3 = 203;
	
	char *el5 = "Iron Man Suit X756 PREMIUM";
	int harga_el5= 2000000000;
	int no_el5 = 205;

	int temp_el[8] = { 0, 0, 0, 0, 0, 2155000 , 10750000 , 1400000 };

	//Bahan Pokok
	char *bp1 ="Beras 5 Kg Cap Topi Koki ";
	int harga_bp1 = 59900; //perkilo
	int no_bp1 = 301;
	
	char *bp2 ="Gula Pasir Cap Semut";
	int harga_bp2 = 11500;//perkilo
	int no_bp2 = 302;

	char *bp3 ="Telur Ayam  Ras Cap Jaya";
	int harga_bp3 = 18900;//perkilo
	int no_bp3 = 303;
	
	char *bp4 ="Minyak Goreng SANCO";
	int harga_bp4 = 25000;//perkilo
	int no_bp4 = 304;

	char *mentega ="Mentega Blue Band";
	int harga_mentega= 8700;//satuan
	int no_bp5 = 305; 
	
	//fish and meat
	
	char *fm1 = "Fillet Dori Lokal 0.45 gram";
	int harga_fm1 = 28500; //perpack
	int no_fm1 = 401;
	
	char *fm2 ="Salmon Kirimi 2x300 gram";
	int harga_fm2 = 230500;//perpack
	int no_fm2 = 402; 
	
	char *fm3 ="Teri Jengki Medan 110gram";
	int harga_fm3 = 18500;//perpack
	int no_fm3 = 403; 
	
	char *fm4 ="Kentang Shoestring";
	int harga_fm4 = 28000;//perkilo
	int no_fm4 = 404; 
	
	char *fm5 ="Otak-otak Ikan 500gram";
	int harga_fm5 = 22500;//perpack
	int no_fm5 = 405; 
	
	//sports
	
	char *sp1 = "Boston Leather Chess Set XXI";
	int harga_sp1 = 20000000;
	int no_sp1 = 501;

	char *sp2 = "Molten AFR Football's ball'";
	int harga_sp2 = 200000;
	int no_sp2 = 502;
	
	char *sp3 = "Columbia Eruption Violet Bowling";
	int harga_sp3 = 2400000;
	int no_sp3 = 503;
	
	char *sp4 = "Sepeda Kucing";
	int harga_sp4 = 150000;
	int no_sp4 = 504;
	
	char *sp5 = "e";
	int harga_sp5 = 50000;
	int no_sp5 = 505;
	
	int temp_sp[12] = { 0, 0, 0, 0, 0, 0 , 0 , 0 , 20000000 , 200000 , 2400000, 150000 };


void gotoxy(int x,int y);
void loading();
void login();
void daging_ikan();
void KatalogAnimation();
void menu();
void yukBelanja();
void keluar();
void arrowHere(int realPosition, int arrowPosition);
void hidecursor();
void logo();
void logoformenu_top();
void logoformenu_bottom();
void bantuan();
void about();
void printback();
void entry_katalog_buah();
void entry_katalog_elektro();
void entry_katalog_sport();
void AddKatalog();
void printer();
void arrowKatalog();
void beli();
void fullscreen();
int Sum(katalog *head);
void pop_free();
void insert(char *name, int price);
void print_the_list();
void sort();
void search();
void remove_scrollbar();
void delete_node(); 
int MAX_STRING_LENGTH=30;
void admin_mode();
void isi_data();
void database_inventaris();
void prompt_admin();
void createfile();
#include <stdbool.h>
#define false 0
void hide_scrollbar();
int main(){
//	CONSOLE_SCREEN_BUFFER_INFO csbi;
//int ret;
//ret = GetConsoleScreenBufferInfo(GetStdHandle( STD_OUTPUT_HANDLE ),&csbi);
//if(ret)
//{
//    printf("Console Buffer Width: %d\n", csbi.dwSize.X);
//    printf("Console Buffer Height: %d\n", csbi.dwSize.Y);
//}

hidecursor();
int p=1;
int press;
int u = 0;
	
	while(press!=13){
	gotoxy(45,12);
	printf("Jalankan Program Fullscreen?");
	gotoxy(45,14);
	arrowHere(1,p);printf("| YES |");
	gotoxy(45,16);
	arrowHere(2,p);printf("| NOE |");
	press = getch();
	if(press == 80 && p!=2){
		p++;
	}else if(press == 72 && p!=1){
		p--;
	}
	}
	switch(p){
		case 1:
			hide_scrollbar();
			fullscreen();
			system("cls");
			for (u=150;u>50;u--){
				hidecursor();
				
				
gotoxy(u,16);red();printf("__          ________ _      _____ ____  __  __ ______ ");
gotoxy(u,17);yellow();printf("\\ \\        / /  ____| |    / ____/ __ \\|  \\/  |  ____|");
gotoxy(u,18);Green();printf(" \\ \\  /\\  / /| |__  | |   | |   | |  | | \\  / | |__   ");
gotoxy(u,19);Blue();printf("  \\ \\/  \\/ / |  __| | |   | |   | |  | | |\\/| |  __|  ");
gotoxy(u,20);Magenta();printf("   \\  /\\  /  | |____| |___| |___| |__| | |  | | |____ ");
gotoxy(u,21);BoldCyan();printf("    \\/  \\/   |______|______\\_____\\____/|_|  |_|______|");		
			
			
			reset();
			system("cls");
			}
			
			
			loading();
			
			logo();
			Sleep(1000);
			system("cls");
			hidecursor();
			
			menu();

			break;
		case 2:
			system("cls");
			loading();
			logo();
			Sleep(1000);
			system("cls");
			hidecursor();
			menu();

			break;
	}
	

	
	return 0;
}

void gotoxy(int x,int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
		
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void loading(){
	system("cls");
	hidecursor();
	int r,q,o,i;
	gotoxy(45,12);
	printf("Loading . . . ");
	gotoxy(45,14);
	for(r=1;r<=5;r++){
		for(q=0;q<=5;q++){
			printf("%c",219);
			Sleep(100);
		}
	}
	
	for(i=0;i<5;i++)
	printf("\n"); Sleep(25);
}

void printback(){
	printf("    .----------------------.\n");
	printf("    |  Tap Enter to Back!  |\n");
	printf("    '----------------------'\n");
	
}
void menu(){
	system("cls");
	int position = 1;
	int keyPressed = 9;
	
	while (keyPressed != 13){	
		system("cls");
		
		
		logoformenu_top();
		
		printf("\t\t            ¦¦¦¦¦¦¦¦¦¦"); arrowHere(1,position); printf("  Yuk Belanja!"); printf("            ¦¦C\n");
		printf("\t\t             ¦¦¦¦¦¦¦¦¦");  printf("                                     ¦¦¦;      |\\/| _ ._|  __|_\n");
		printf("\t\t             '¦¦¦¦¦¦¦¦"); arrowHere(2,position); printf("  Bantuan");  printf("                 ¦¦¦¦      |  |(_|| |<}_ | \n");
		printf("\t\t               ¯¦¦¦¦¦¦");  printf("                                     ¦¦¦¦¦\n");
		printf("\t\t               ¯¦¦¦¦¦¦"); arrowHere(3,position); printf("  About");  printf("                   ¦¦¦¦¦¦       |~)| _  _ _\n");
		printf("\t\t                ¯¦¦¦¦¦                                     ¦¦¦¦¦¦_      |~ |(_|(_}_\n");
		printf("\t\t                 ¦¦¦¦¦"); arrowHere(4,position); printf("  Keluar"); printf("                  ¦¦¦¦¦¦¦Ç\n");
		
		logoformenu_bottom();
		
	
	
	
		keyPressed = getch();
	
		if(keyPressed == 80 && position!= MAX){
			position ++;
		}
			else if(keyPressed == 72 && position!= MIN){
				position--;
			}
				else{
					position = position;
				}
			if(keyPressed == 32){
				printer(0);
			}
			if(keyPressed == 00){
				prompt_admin();
			}
	}

		switch(position){
			case 1:
				KatalogAnimation();
				yukBelanja();
				break;
			
			case 2:
				bantuan();
				break;
			
			case 3:
				about();
				break;
			
			case 4:
				keluar();
				break;
				
			default:
				printf("");
			
		}
}

void yukBelanja(){
	
	hidecursor();
	int poss= 1;
	int keyPressed = 9;
	int max1 = 3;
	int max2 = 6;
	int min1 = 1;
	int min2 = 4;
	int i = 0;
	while (keyPressed!=13){
system("cls");

printf("\t     .===========================================================================================.\n");
printf("\t    ||                                                                                           ||\n");BoldYellow();
printf("    _/    _/    _/_/    _/_/_/_/_/    _/_/    _/          _/_/      _/_/_/       \t                 ");reset();printf("|| \n");BoldYellow();
printf("   _/  _/    _/    _/      _/      _/    _/  _/        _/    _/  _/               \t                 ");reset();printf("|| \n");BoldYellow();
printf("  _/_/      _/_/_/_/      _/      _/_/_/_/  _/        _/    _/  _/  _/_/            \t                 ");reset();printf("|| \n");BoldYellow();
printf(" _/  _/    _/    _/      _/      _/    _/  _/        _/    _/  _/    _/              \t                 ");reset();printf("|| \n");BoldYellow();
printf("_/    _/  _/    _/      _/      _/    _/  _/_/_/_/    _/_/      _/_/                   \t                 ");reset();printf("|| \n");                                                                                                                         
printf("\t    ||                                                                                           ||\n");
printf("\t    ||                             .                                                             ||\n");                   
printf("\t    ||                        ,--./,-.                                /""*.         _              ||\n");
printf("\t    ||                       / #      \\                          .-*'`    `*-.._.-'/             ||\n");
printf("\t    ||                      |          |                        < * ))     ,       (             ||\n");
printf("\t    ||                       \\        /                          `*-._`._(__.--*''.\\             ||\n");
printf("\t    ||                        `._,._,'                                                           ||\n");
printf("\t    ||                                                                                           ||\n");
printf("\t    ||                    "); arrowKatalog(1,poss);  printf(" Buah-Buahan                          ");arrowKatalog(4,poss); printf(" Mainan Anak               ||\n"); 
printf("\t    ||");printf("                                                                                           ||\n");
printf("\t    ||");printf("            _______________________                              __                        ||\n"); 	            
printf("\t    ||");printf("           /                     _/\\                          .'''.''.                     || \n");
printf("\t    ||");printf("          /          IC         / \\/\\                        :._.''._.:                    || \n");
printf("\t    ||");printf("         /_____________________/\\                            :  \\__/  :                    || \n");
printf("\t    ||");printf("         \\_____________________\\/                             './  \\.'                     || \n");
printf("\t    ||");printf("          \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\                               ''''                       || \n");                                                                 
printf("\t    ||                                                                                           ||\n");
printf("\t    ||                    "); arrowKatalog(2,poss);printf(" Elektronik  "); 				printf("                         ");arrowKatalog(5,poss); printf(" Sports & Outdoors         ||\n");
				printf("      .--------------------.                                                                             ||\n");
				printf("      |   Back to Menu! ");arrowKatalog(3,poss);printf("|                                                                             ||\n");
				printf("      '--------------------'             [SPACE to display cart]                                         ||\n");    
printf("\t     '==========================================================================================='\n");


  


keyPressed = getch();

	
	if( keyPressed == 80 && poss!= max1){
			poss++;
		}
			else if(keyPressed == 72 && poss!= min1){
				poss--;
			}
					else{
						poss = poss;
					}
					
					if(poss == 3 && keyPressed == 75){
						poss = 1;
					}
					if(poss >= 6){
						poss = 3;
					}
					
						
			
			for(i=1;i<=2;i++){
				if(keyPressed == 77 && poss==i){
					poss+=3;
				}
					else{
						poss = poss;
					}
			}
			
			
			for(i=1;i<=3;i++){
				if(keyPressed == 75 && poss==i+2){
					poss-=3;
				}
					else{
						poss = poss;
					}
			}
		
			if(keyPressed == 32){
						printer();
					}
										
				
	}


	int tekan = 9;
	switch(poss){
		case 1:
			laman2:
			while(tekan!=13){
			system("cls");
			
		    
		    
printf("	 .======================================================================================.\n"
"	||                                                                                      ||\n"
"      _/_/_/_/    _/       _/    _/_/_/    _/      _/                         	                ||   \n"                                                                   
"     _/      _/  _/       _/  _/      _/  _/      _/            F R U I T s   	                ||\n"
"    _/      _/  _/       _/  _/      _/  _/      _/            _/_/_/_/_/_/        	        ||\n"
"   _/_/_/_/    _/       _/  _/_/_/_/_/  _/_/_/_/_/                                     	        ||\n"
"  _/      _/  _/       _/  _/      _/  _/      _/                                        	||\n"
" _/      _/  _/       _/  _/      _/  _/      _/          [SPACE to display cart]           	|| \n"
"_/_/_/_/      _/_/_/_/   _/      _/  _/      _/                                                 ||\n"


"        ||\t\t                                                \\                       ||\n"
"        ||\t\t          _(_                                  ()()                     ||\n"
"        ||\t\t        (    '\\                               ()()()                    ||\n"
"        ||\t\t        \\     ;                                ()()                     ||\n"
"        ||\t\t         `-'-'                                  ()                      ||\n");
                                                         
printf("        ||        ");  arrowKatalog(1,posisi);	printf(" %s....Rp. %d,000,00        ", bs1,harga_bs1/1000); 	arrowKatalog(4,posisi);	printf(" %s....Rp. %d,000,00 ||\n", bs4,harga_bs4/1000);
			
printf("	||                                                                                      ||\n"		);	 
printf(	"        ||\t\t          _\\_                                 ,v.                       ||\n"
		"        ||\t\t        .'   ;                               ((  ) ,v.                  ||\n"
		"        ||\t\t       /    /                                 `'' ((  )                 ||\n"
		"        ||\t\t      '--''`                                        ''                  ||\n");
printf("        ||        ");  arrowKatalog(2,posisi);	printf(" %s....Rp. %d,000,00     ", bs2,harga_bs2/1000); 	arrowKatalog(5,posisi);	printf(" %s....Rp. %d,000,00    ||\n", bs5,harga_bs5/1000);
printf("	||                                                                                      ||\n"		);	 			   
printf(	"        ||\t\t         \\|/                          .--------------------.            ||\n"
		"        ||\t\t         AXA                          |   Back to Katalog! |            ||\n");
printf(	"        ||\t\t        /XXX\\                         |        ");arrowKatalog(6,posisi);printf("         |            ||\n");     
printf( "        ||\t\t        \\XXX/                         '--------------------'            ||\n"
		"        ||\t\t         `^'                                                            ||\n");
printf("        ||        ");  arrowKatalog(3,posisi);	printf(" %s....Rp. %d,000,00                                             ||\n", bs3,harga_bs3/1000);  
//                                                                         ||
printf("	||                                                                                      ||\n"		);	 
printf("         '======================================================================================'");
//

		
			
			tekan = getch();
			
		if( tekan == 80 && posisi!= 3){
			posisi++;
		}
			else if(tekan == 72 && posisi!= 1){
				posisi--;
			}
					else{
						posisi = posisi;
					}
					
					if(tekan == 80 && posisi >= 6){
						posisi = 6;
					}
					if(tekan == 32){
						printer();
					}	
					
			for(i=1;i<=3;i++){
				if(tekan == 77 && posisi==i){
					posisi+=3;
				}
					else{
						posisi = posisi;
					}
			}
			
			
			for(i=1;i<=3;i++){
				if(tekan == 75 && posisi==i+3){
					posisi-=3;
				}
					else{
						posisi = posisi;
					}
			}
		}
		
		//ambil posisi untuk linkedlist
		entry_katalog_buah();
		AddKatalog();
		
			
			break;
		case 2:
			awal:
			laman3:
			while(tekan!=13){
			system("cls");
			posisi = 1;
			tekan = 9;
			
printf(			
"    .======================================================================================.         \n");BoldCyan();printf(
"      _/_/_/_/   _/         _/_/_/_/   _/    _/   _/_/_/_/_/   _/_/_/        _/_/_/                  \n"                                      
"     _/         _/         _/         _/   _/        _/       _/    _/     _/    _/                  \n"
"    _/         _/         _/         _/  _/         _/       _/    _/     _/    _/   G  O  O  D  s   \n"   
"   _/_/_/_/   _/         _/_/_/_/   _/_/           _/       _/_/_/       _/    _/   _/ _/ _/ _/ _/   \n"     
"  _/         _/         _/         _/  _/         _/       _/   _/      _/    _/                     \n"  
" _/         _/         _/         _/    _/       _/       _/     _/    _/    _/                      \n"
"_/_/_/_/   _/_/_/_/   _/_/_/_/   _/      _/     _/       _/       _/   _/_/_/                        \n");reset();printf(
"    ||                                                                                      ||       \n"
"    ||            .---..-----------------------------------------------..---.               ||       \n"
"    ||            |   ||.---------------------------------------------.||   |               ||       \n"
"    ||            | o ||| _0_o O/oo  _0_ \\O/ _   _0_  O_0_o_O/ooO _0_ ||| o |               ||       \n"
"    ||            | _ |||O oo _0_ _0_o\\O  _O/~'       O oo__0_ _0_o\\O ||| _ |               ||       \n"
"    ||            |(_)|||_0_ \\O oo        /)    _0_ \\O_0_ \\O oo       |||(_)|               ||       \n"
"    ||            |   |||---------------------------------------------|||   |               ||       \n"
"    ||            |.-.|||     __....------------------------....___   |||.-.|               ||       \n"
"    ||            | o |||---''           RACING        _.--._      `  ||| o |               ||       \n"
"    ||            |`-'|||             _.--._          'O---O-'        |||`-'|               ||       \n"
"    ||            |   |||     _.--._ 'O---O-'_.--._  _.--._           |||   |               ||       \n"
"    ||            |.-.|||    'O---O-'       'O---O-''O---O-'          |||.-.|               ||       \n"
"    ||            | O |||__,,...,----------------------....___        ||| O |               ||       \n"
"    ||            |`-'||`-----------------PANASNICH-------------------'||`-'|               ||       \n"
"    ||            `---'`-----------------------------------------------'`---'               ||       \n"
"    ||                   _||_                                     _||_                      ||       \n"
"    ||                  /____\\                                   /____\\                     ||       \n"
"    ||                                                                                      ||       \n"
"    ||            ");arrowKatalog(1,posisi);printf(" %s.......Rp. %d,00                ||\n", el1,harga_el1);
printf(
"    ||                                                                                      ||       \n"
"    ||  [SPACE to display cart]             [ESC TO BACK]                        NEXT >     ||       \n"
"     '======================================================================================'"
);


tekan = getch();

if(tekan == 27){
	KatalogAnimation();
	return yukBelanja();
}
if(tekan == 32){
	printer();
}

if (tekan == 77){
	laman4:
	while(tekan!=13){
posisi = 2;
x:
system("cls");	

    
printf(
"    .======================================================================================.          \n"
"      _/_/_/_/   _/         _/_/_/_/   _/    _/   _/_/_/_/_/   _/_/_/        _/_/_/                             \n"                                       
"     _/         _/         _/         _/   _/        _/       _/    _/     _/    _/              \n"
"    _/         _/         _/         _/  _/         _/       _/    _/     _/    _/   G  O  O  D  s           \n"    
"   _/_/_/_/   _/         _/_/_/_/   _/_/           _/       _/_/_/       _/    _/   _/ _/ _/ _/ _/                 \n"
"  _/         _/         _/         _/  _/         _/       _/   _/      _/    _/                   \n"
" _/         _/         _/         _/    _/       _/       _/     _/    _/    _/                   \n"
"_/_/_/_/   _/_/_/_/   _/_/_/_/   _/      _/     _/       _/       _/   _/_/_/               \n"
"    ||                                                                                      ||         \n"
"    ||            ._________________.                                                       ||  \n"
"    ||            |.---------------.|                                                       || \n"
"    ||            ||               ||                                                       || \n"
"    ||            ||   -._ .-.     ||                       .-------------------.           ||     \n"    
"    ||            ||   -._| | |    ||                      /--^--.------.------/|           ||         \n"
"    ||            ||   -._|'|'|    ||                      |Kodok|__Ll__| [==] ||           ||        \n"
"    ||            ||   -._|.-.|    ||                      |     | .--. | '''' ||           ||          \n"
"    ||            ||_______HP______||                      |     |( () )|      ||           || \n"
"    ||            /.-.-.-.-.-.-.-.-.\\                      |     | `--' |      |/           || \n"
"    ||           /.-.-.-.-.-.-.-.-.-.\\                     `-----'------'------'            || \n"
"    ||          /.-.-.-.-.-.-.-.-.-.-.\\                                                     || \n"
"    ||         /______/__AMD_____\\___o_\\                                                    ||     \n"         
"    ||         \\_______________________/                                                    ||   \n"
"    ||                                                                                      ||         \n"
"    ||                                                                                      ||         \n"
"    ||             ");arrowKatalog(2,posisi);printf(" %s.......Rp. %d,00              ||\n", el2,harga_el2);printf(
"    ||                                                                                      ||         \n");printf(
"    ||             ");arrowKatalog(3,posisi);printf(" %s.......Rp. %d,00               ||\n",el3,harga_el3);
printf(
"    ||                                                                                      ||       \n"
"    ||      < PREVIOUS                      [ESC TO BACK]      [SPACE to display cart]      ||       \n"
"     '======================================================================================'"
);
	

tekan = getch();

if( tekan == 80){
			posisi = 3;
			goto x;
		}
			else if(tekan == 72){
				posisi = 2;
				goto x;
			}
					
if(tekan == 32){
	printer();
}
if (tekan == 75){
	goto awal;
}

else if(tekan == 27){
	KatalogAnimation();
	return yukBelanja();
}

					

}
}

}
entry_katalog_elektro();
AddKatalog();
			//elektronik
			break;
		case 3:
			logo();
			return menu();
			//bahanpokok
			break;
		case 4:
			system("cls");
			daging_ikan();
			//daginikan
			break;
		case 5:
			system("cls");
			while(tekan!=13){
			system("cls");
			posisi = 1;
			tekan = 9;
			
			
printf(
"     .======================================================================================.          \n"			
"    _/_/_/  _/_/_/  _/_/_/  _/_/_/  _/_/_/  _/_/_/                                          ||         \n"
"   _/      _/  _/  _/  _/  _/  _/    _/    _/                                               ||         \n"
"  _/_/_/  _/_/_/  _/  _/  _/_/_/    _/    _/_/_/              G O O D s                     ||         \n"
"     _/  _/      _/  _/  _/ _/     _/        _/             _/_/_/_/_/                      ||         \n"
"_/_/_/  _/      _/_/_/  _/  _/    _/    _/_/_/                                              ||         \n"
"    ||                                                                                      ||         \n"
"    ||          _______________                                                             ||         \n"
"    ||       8 |_|#|_|#|_|#|_|#|                                                            ||         \n"
"    ||       7 |#|_|#|_|#|_|#|_|                                                            ||         \n"
"    ||       6 |_|#|_|#|_|#|_|#|                         	 .-'''-.                         ||         \n"
"    ||       5 |#|_|#|_|#|_|#|_|                       	/  _    \\                       ||         \n"
"    ||       4 |_|#|_|#|_|#|_|#|                           | (8)    |                       ||         \n"
"    ||       3 |#|_|#|_|#|_|#|_|                           \\  ^    /                       ||         \n"
"    ||       2 |_|#|_|#|_|#|_|#|                             '-...-'                        ||         \n"
"    ||       1 |#|_|#|_|#|_|#|_|                                                            ||         \n"
"    ||          a b c d e f g h                                                             ||         \n"
"    ||                                                                                      ||         \n"
"    ||                                                                                      ||         \n"
"    ||                                                                                      ||         \n"
"    ||           _.-=''=-._                                  o__                            ||         \n"
"    ||         .'\\\\-++++-//'.                              ,>/_                           ||         \n"
"    ||        (  ||      ||  )                              (*)`(*)                         ||         \n"
"    ||         './/      \\\\.'                                                             ||         \n"
"    ||           `'-=..=-'`                                                                 ||         \n"
"    ||                                                                                      ||         \n"
"    ||                                                                                      ||         \n"
"    ||                                                                                      ||         \n"
"    ||               UDER CONSTRUCTION, PRESS ESCAPE OR ENTER TO BACK                       ||         \n");
Sum(tampil);
tekan = getch();
if(tekan == 27 || tekan == 13){
	KatalogAnimation();
	yukBelanja();
}

	}
			
			
			break;
	
		default:
			printf("");
			
	}
	
}

void KatalogAnimation(){
	int poss = 1;
printf("\t     .===========================================================================================.\n");Sleep(10);
printf("\t    ||                                                                                           ||\n");BoldYellow();Sleep(10);
printf("    _/    _/    _/_/    _/_/_/_/_/    _/_/    _/          _/_/      _/_/_/       \t                 ");reset();printf("|| \n");BoldYellow();Sleep(10);
printf("   _/  _/    _/    _/      _/      _/    _/  _/        _/    _/  _/               \t                 ");reset();printf("|| \n");BoldYellow();Sleep(10);
printf("  _/_/      _/_/_/_/      _/      _/_/_/_/  _/        _/    _/  _/  _/_/            \t                 ");reset();printf("|| \n");BoldYellow();Sleep(10);
printf(" _/  _/    _/    _/      _/      _/    _/  _/        _/    _/  _/    _/              \t                 ");reset();printf("|| \n");BoldYellow();Sleep(10);
printf("_/    _/  _/    _/      _/      _/    _/  _/_/_/_/    _/_/      _/_/                   \t                 ");reset();printf("|| \n");              Sleep(10);                                                                                                             
printf("\t    ||                                                                                           ||\n");Sleep(10);
printf("\t    ||                             .                                                             ||\n");         Sleep(10);          
printf("\t    ||                        ,--./,-.                                /""*.         _              ||\n");Sleep(10);
printf("\t    ||                       / #      \\                          .-*'`    `*-.._.-'/             ||\n");Sleep(10);
printf("\t    ||                      |          |                        < * ))     ,       (             ||\n");Sleep(10);
printf("\t    ||                       \\        /                          `*-._`._(__.--*''.\\             ||\n");Sleep(10);
printf("\t    ||                        `._,._,'                                                           ||\n");Sleep(10);
printf("\t    ||                                                                                           ||\n");Sleep(10);
printf("\t    ||                    "); arrowKatalog(1,poss);  printf(" Buah-Buahan                          ");arrowKatalog(4,poss); printf(" Mainan Anak               ||\n");Sleep(10); 
printf("\t    ||");printf("                                                                                           ||\n");Sleep(10);
printf("\t    ||");printf("            _______________________                              __                        ||\n"); Sleep(10);	            
printf("\t    ||");printf("           /                     _/\\                          .'''.''.                     || \n");Sleep(10);
printf("\t    ||");printf("          /          IC         / \\/\\                        :._.''._.:                    || \n");Sleep(10);
printf("\t    ||");printf("         /_____________________/\\                            :  \\__/  :                    || \n");Sleep(10);
printf("\t    ||");printf("         \\_____________________\\/                             './  \\.'                     || \n");Sleep(10);
printf("\t    ||");printf("          \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\                               ''''                       || \n");          Sleep(10);                                                                    
printf("\t    ||                                                                                           ||\n");Sleep(10);
printf("\t    ||                    "); arrowKatalog(2,poss);printf(" Elektronik  "); 				printf("                         ");arrowKatalog(10,poss); printf(" Bahan-bahan Pokok         ||\n");Sleep(10);
				printf("      .--------------------.                                                                             ||\n");Sleep(10);
				printf("      |   Back to Menu! ");arrowKatalog(3,poss);printf("|                                                                             ||\n");Sleep(10);
				printf("      '--------------------'                                                                             ||\n");    Sleep(10);
printf("\t     '==========================================================================================='\n");Sleep(10);

}

void bantuan(){
	
	void hidecursor();
	int back = 0;
	system("cls");
	
	
	
	while(back != 13){
		printf("\n\n Admin Mode: CTRL + SHIFT + 2\n  Enter to Back!");	
		
		back = getch();
		if(back != 13){
			return bantuan();
		}
		else{
			logo();
			return menu();
		}
		
		
	}
	
}

void about(){
	void hidecursor();
	int back = 0;
	system("cls");
	
	
	
	while(back != 13){
		printf("\n  .~~~~~~~~~~~~~~~~~~~~~~~.\n");
		printf("  |       ABOUT US        |\n");
		printf("  '~~~~~~~~~~~~~~~~~~~~~~~'\n\n");
		printf("\t  .-------------------------------------------\n");
		printf("\t  | \n");
		printf("\t  |  SIEN Digital Marketplace, Ltd. adalah sebuah prototype dari platform \n");
		printf("\t  |  layanan perbelanjaan digital, dimana kami ingin membuat kepercayaan dalam\n"); 
		printf("\t  |  berbelanja seperti layaknya di Supermarket dengan konsep yang cepat,\n");
		printf("\t  |  fleksibel dan efisien sehingga tidak memakan waktu berharga Anda.              \n");
		printf("\t                                                                                  \n"); 
		printf("\t     Anda bisa menggunakan aplikasi yang kami sediakan, atau mendatangi            | \n");
		printf("\t     Supermarket favorit Anda yang sudah tersedia layanan SIEN digital.            |\n");
		printf("\t     Cocok bagi Anda yang seorang mahasiswa atau seorang jomblo, aplikasi          |\n");
		printf("\t     SIEN Digital Marketplace adalah aplikasi idaman Anda.                         |\n");
		printf("\t                                                                                   |\n");
		printf("\t                                    -----------------------------------------------'\n\n");	
		printback();
		back = getch();
		if(back != 13){
			return about();
		}
		else{
			logo();
			return menu();
		}
		
		
	}
	
	
}

void keluar(){
	
	
int m=0;
double n;
char welcome[]= "\t  If you have any questions or concerns please do contact us:\n\t  alfian.firmansyah@ui.ac.id / 083870975096\n\t  fahri.alamsyah@ui.ac.id / 081316259144\n\t  Thank you :)\t\t\t\t\t\t\t\t\t\t";

system("cls");
printf("\n\n\n\n\n\n\n\n\n");
for(m=0;welcome[m]!='\0';m++){
    printf("%c",welcome[m]);
    for(n=0;n<=4999999;n++){}
}
exit(0);
}




void logo(){
	
printf("\t\t                                              ,g_\n");Sleep(10);
printf("\t\t                                           ,__¦¦¦¦¦¦\n");Sleep(10);
printf("\t\t                                     ,+_¦¦¦¦¦¦¦¦¦¦¦¦¦\n");Sleep(10);
printf("\t\t                               ,__o       +¯¯¯¯¦¦¦¦¦¦_\n");Sleep(10);
printf("\t\t                          __¦¦¦¦¯  _¦¦¦¯-     '¦¦¦¦¦¦¦µ\n");Sleep(10);
printf("\t\t                    +__¦¦¦¦¦¦¦¦- +¦¦¦¯  _¦¦¦¬ +_   ¯¦¦¦µ\n");Sleep(10);
printf("\t\t              ,__¦¦¦¦¦¦¦¦¦¦¦¦¦o ¬¦¦¦¯ ,¦¦¦¦¦¦¬ +¦¦  ¯¦¦¦\n");Sleep(10);
printf("\t\t        ,__¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦  ¦¦¦¦¦¦¦¦  ¦¦¦  ¦¦¦¦\n");Sleep(10);
printf("\t\t        ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦U  ¦¯¯  +¯¯++++-          ¦¯¦\n");Sleep(10);
printf("\t\t         ¯¦¦¦¦¦¦¦¦¦¦¦¦\n");Sleep(10);
printf("\t\t          ¯¦¦¦¦¦¦¦¦¦¦¦                                     ¦      |~\\o(~|o_|_ _ |\n");Sleep(10);
printf("\t\t           ¦¦¦¦¦¦¦¦¦¦¦                                     ¦_     |_/| _|| | (_||\n");Sleep(10);
printf("\t\t            ¦¦¦¦¦¦¦¦¦¦                                     ¦¦C\n");Sleep(10);
printf("\t\t             ¦¦¦¦¦¦¦¦¦                                     ¦¦¦;      |\\/| _ ._|  __|_\n");Sleep(10);
printf("\t\t             '¦¦¦¦¦¦¦¦                                     ¦¦¦¦      |  |(_|| |<}_ | \n");Sleep(10);
printf("\t\t              ¦¦¦¦¦¦¦¦                                     ¦¦¦¦¦\n");Sleep(10);
printf("\t\t               ¯¦¦¦¦¦¦                                     ¦¦¦¦¦¦       |~)| _  _ _\n");Sleep(10);
printf("\t\t                ¯¦¦¦¦¦                                     ¦¦¦¦¦¦_      |~ |(_|(_}_\n");Sleep(10);
printf("\t\t                 ¦¦¦¦¦                                     ¦¦¦¦¦¦¦Ç\n");  Sleep(10);
printf("\t\t                  ¦¦¦¦                                     ¦¦¦¦¦¦¦¦¬        | _|_ _|\n");Sleep(10);
printf("\t\t                   ¦¦¦                                     ¦¦¦¦¦¦¦¦¦.       |_ | (_|o\n");Sleep(10);
printf("\t\t                    ¦¦\n");Sleep(10);
printf("\t\t                     ¦  _¦¯¯¯¯¦¦¦¦  ¯¯¦¦¦¯¯ ¯¯¦¦¦¯¯¯¯¯¦¦¦  ¯¯¦¦¦¯¯    ¯¯¦¦¦¯¯\n");Sleep(10);
printf("\t\t                       ¦¦      ¯¦¦    ¦¦¦     ¦¦¦      ¯¦    ¦¦¦¦_      ¦¦¦\n");Sleep(10);
printf("\t\t                       ¯¦¦¦___.       ¦¦¦     ¦¦¦  _¦¦  ¯    ¦¦¦ ¯¦¦_   ¦¦¦\n");Sleep(10);
printf("\t\t                        '¯¯¦¦¦¦¦¦_    ¦¦¦     ¦¦¦¯¯¯¦¦       ¦¦¦   ¦¦¦_ ¦¦¦\n");Sleep(10);
printf("\t\t                       ¦_      +¦¦    ¦¦¦     ¦¦¦      ¦¦    ¦¦¦    ¦¦¦¦¦¦¦\n");Sleep(10);
printf("\t\t                       ¦¦_;    +¦¦    ¦¦¦     ¦¦¦     ¦¦¦    ¦¦¦      ¯¦¦¦¦\n");Sleep(10);
printf("\t\t                         ¯¯¦¦¦¦¯¯   ¯¯¯¯¯¯¯ ¯¯¦¦¦¯¯¯¯¯¦¦   ¯¯¦¦¦¯¯    ¯¯¦¦¦¯¯\n");Sleep(10);

}

void logoformenu_top(){
	
printf("\t\t                                              ,g_\n");
printf("\t\t                                           ,__¦¦¦¦¦¦\n");
printf("\t\t                                     ,+_¦¦¦¦¦¦¦¦¦¦¦¦¦\n");
printf("\t\t                               ,__o       +¯¯¯¯¦¦¦¦¦¦_\n");
printf("\t\t                          __¦¦¦¦¯  _¦¦¦¯-     '¦¦¦¦¦¦¦µ\n");
printf("\t\t                    +__¦¦¦¦¦¦¦¦- +¦¦¦¯  _¦¦¦¬ +_   ¯¦¦¦µ\n");
printf("\t\t              ,__¦¦¦¦¦¦¦¦¦¦¦¦¦o ¬¦¦¦¯ ,¦¦¦¦¦¦¬ +¦¦  ¯¦¦¦\n");
printf("\t\t        ,__¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦  ¦¦¦¦¦¦¦¦  ¦¦¦  ¦¦¦¦\n");
printf("\t\t        ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦U  ¦¯¯  +¯¯++++-          ¦¯¦\n");
printf("\t\t         ¯¦¦¦¦¦¦¦¦¦¦¦¦\n");
printf("\t\t          ¯¦¦¦¦¦¦¦¦¦¦¦                                     ¦      |~\\o(~|o_|_ _ |\n");
printf("\t\t           ¦¦¦¦¦¦¦¦¦¦¦                                     ¦_     |_/| _|| | (_||\n");
}

void logoformenu_bottom(){

printf("\t\t                  ¦¦¦¦                                     ¦¦¦¦¦¦¦¦¬        | _|_ _|\n");
printf("\t\t                   ¦¦¦                                     ¦¦¦¦¦¦¦¦¦.       |_ | (_|o\n");
printf("\t\t                    ¦¦\n");
printf("\t\t                     ¦  _¦¯¯¯¯¦¦¦¦  ¯¯¦¦¦¯¯ ¯¯¦¦¦¯¯¯¯¯¦¦¦  ¯¯¦¦¦¯¯    ¯¯¦¦¦¯¯\n");
printf("\t\t                       ¦¦      ¯¦¦    ¦¦¦     ¦¦¦      ¯¦    ¦¦¦¦_      ¦¦¦\n");
printf("\t\t                       ¯¦¦¦___.       ¦¦¦     ¦¦¦  _¦¦  ¯    ¦¦¦ ¯¦¦_   ¦¦¦\n");
printf("\t\t                        '¯¯¦¦¦¦¦¦_    ¦¦¦     ¦¦¦¯¯¯¦¦       ¦¦¦   ¦¦¦_ ¦¦¦\n");
printf("\t Developed by AlFa             ¦_      +¦¦    ¦¦¦     ¦¦¦      ¦¦    ¦¦¦    ¦¦¦¦¦¦¦\n");
printf("\t Alfian & Fahri                ¦¦_;    +¦¦    ¦¦¦     ¦¦¦     ¦¦¦    ¦¦¦      ¯¦¦¦¦\n");
printf("\t Copyright@2018                  ¯¯¦¦¦¦¯¯   ¯¯¯¯¯¯¯ ¯¯¦¦¦¯¯¯¯¯¦¦   ¯¯¦¦¦¯¯    ¯¯¦¦¦¯¯\n");
}

// Linked List


void printer(){
	system("cls");
	if(head == NULL){
int i = 0;
int tekan = 1;
while(tekan!=13){		
printf(

"          -=[ shopping cart ]=-                             \n"
"          ___                             \n"
"          '-||__/________                             \n"
"            |==/_|__|___/                             \n"
"            |=/__|__|__/                             \n"
"            |/|__|__|_/                             \n"
"              )_____(_                             \n"
"             [--------|                             \n"
"             (o)''''(o)                             \n");

printf(
"  .===========================================================================.\n"
"  | No  |               Items                    |  QTY  |       Harga        |\n"           
"  |-----|----------------------------------------|-------|--------------------|\n"
//"  |  ");
//printf("%d  |",nomor);
//          printf(" %s ",nama);for(i=0;i<38-strlen(nama);i++){printf(" ");}printf("|   %d   |    %d",quantity,harga);
//while(harga>0){harga=(harga-(harga%10))/10;digit++;}for(i=0;i<16-digit;i++){printf(" ");}printf("|\n");
//printf(
"  |     |         TIDAK ADA ITEM                 |       |                    |\n"
"  '---------------------------------------------------------------------------'\n"
);
printf("\n\n");
printback();
tekan = getch();


}

if(tekan !=13){
	return printer();
}
else{
return menu();
}


	}
	else{
		system("cls");
		tampil = head;


nomer = 0;
counter_total = 0;
printf(
"          -=[ shopping cart ]=-                             \n"
"          ___                             \n"
"       ~  '-||__/________                             \n"
"            |==/_|__|___/                             \n"
"        ~   |=/__|__|__/                             \n"
"            |/|__|__|_/                 Hapus Kart? Tekan [CTRL + D]            \n"
"         ~    )_____(_                             \n"
"             [--------|                             \n"
"             (o)''''(o)                             \n");
sum = 0;
temp_belanjaan = 0;
Sum(tampil);
printf("==================================================================-----. . .\n");
printf("                             Total Belanjaan Anda: Rp. %d,00               \n",sum);

printf("=============================================================----------' ' '\n\n\n");

temp_belanjaan = sum;
printf(
"  .===========================================================================.\n"
"  | No  |               Items                    |  QTY  |       Harga        |\n"           
"  |-----|----------------------------------------|-------|--------------------|\n"
);
		while (tampil != NULL){
			nomer++;
			counter_total++;



int digit = 0;
int i = 0;
	

				
		printf(
		"  |  ");
		printf("%d  |",nomer);
		printf(" %s ",tampil->nama);for(i=0;i<38-strlen(tampil->nama);i++){printf(" ");}
	
			printf(     "|   %d",tampil->quantity);
		
			if(quantityfix1>=0 && quantity1 == 1){
				quantityfix1 = quantityfix1 + quantity1;
				quantity[0] = quantityfix1;
			}
				else if(quantityfix2>=0 && quantity2 == 1){
					quantityfix2 = quantityfix2 + quantity2;
					quantity[1] = quantityfix2;
				}
					else if(quantityfix3>=0 && quantity3 == 1){
						quantityfix3 = quantityfix3 + quantity3;
						quantity[2] = quantityfix3;
					}
						else if(quantityfix4>=0 && quantity4 == 1){
							quantityfix4 = quantityfix4 + quantity4;
							quantity[3] = quantityfix4;
						}
							else if(quantityfix5>=0 && quantity5 == 1){
								quantityfix5 = quantityfix5 + quantity5;
								quantity[4] = quantityfix5;
							}
								else if(quantityfix6>=0 && quantity6 == 1){
									quantityfix6 = quantityfix6 + quantity6;
									quantity[5] = quantityfix6;
								}
									else if(quantityfix7>=0 && quantity7 == 1){
										quantityfix7 = quantityfix7 + quantity7;
										quantity[6] = quantityfix7;
									}	
										else if(quantityfix8>=0 && quantity8 == 1){
											quantityfix8 = quantityfix8 + quantity8;
											quantity[7] = quantityfix8;
										}
											else if(quantityfix9>=0 && quantity9 == 1){
												quantityfix9 = quantityfix9 + quantity9;
												quantity[8] = quantityfix9;
											}
												else if(quantityfix10>=0 && quantity10 == 1){
													quantityfix10 = quantityfix10 + quantity10;
													quantity[9] = quantityfix10;
												}
													else if(quantityfix11>=0 && quantity11 == 1){
														quantityfix11 = quantityfix11 + quantity11;
														quantity[10] = quantityfix11;
													}
														else if(quantityfix12>=0 && quantity12 == 1){
															quantityfix12 = quantityfix12 + quantity12;
															quantity[11] = quantityfix12;
														}
		
		printf("   |    %d",tampil->harga);
		a = kart[nomer-1];	  
		while(a>0){a=((a-(a%10))/10);digit++;}for(i=0;i<16-digit;i++){printf(" ");}printf("|\n");
		digit = 0;
		a = 0;
		
		
	
	
          
		  
		quantity1 = 0;
		quantity2 = 0;
		quantity3 = 0;
		quantity4 = 0;
		quantity5 = 0;
		quantity6 = 0;
		quantity7 = 0;
		quantity8 = 0;
		quantity9 = 0;
		quantity10 = 0;
		quantity11 = 0;
		quantity12 = 0;
		
		
				
		tampil = tampil->next;
	}
	printf(
"  |     |                                        |       |                    |\n"
"  '---------------------------------------------------------------------------'\n"
);
	}
	

	
//	total = 0;
//	for(j = 0 ; j<5 ; j++)
//	total = total + (temp_bs[j]*quantity[j]);
//	
//	total2 = 0;
//	for(j=5 ; j<8 ; j++)
//	total2 = total2 + (temp_el[j]*quantity[j]);
//
//	total3 = 0;
//	for(j=8 ;j<12; j++)			
//	total3 = total3 + (temp_sp[j]*quantity[j]);
	
	
	Sum(tampil);
		
printf("					                Total = Rp. %d,00\n",sum);

printf("\n\n\n                   [Press CTRL + B for Checkout your selected items]\n");


int tekan = 2;

tekan = getch();
if(tekan == 4){
	system("cls");
	pop_free();
}
if(tekan == 2){
	beli();
}
else{
	return yukBelanja();
}


}


void entry_katalog_buah(){
	
		quantity1 = 0;
		quantity2 = 0;
		quantity3 = 0;
		quantity4 = 0;
		quantity5 = 0;
	entry = (struct katalog *)malloc(sizeof(struct katalog));
	
	switch(posisi){
		case 1:
		
			strcpy(entry->nama,bs1);
			entry->harga=harga_bs1;
			entry->nomor=no_bs1;
			entry->quantity=1;
			loop++;
			kart[loop-1]=harga_bs1;
			
			quantity1 = 1;
			
		
			break;
		case 2:
			strcpy(entry->nama,bs2);
			entry->harga=harga_bs2;
			entry->nomor=no_bs2;
			entry->quantity=1;
			loop++;
			kart[loop-1]=harga_bs2;
			quantity2 = 1; 
			
		
			break;
		case 3:
			
			strcpy(entry->nama,bs3);
			entry->harga=harga_bs3;
			entry->nomor=no_bs3;
			entry->quantity=1;
			loop++;
			kart[loop-1]=harga_bs3;
			quantity3 = 1;
		
			break;
		case 4:
			
			strcpy(entry->nama,bs4);
			entry->harga=harga_bs4;
			entry->nomor=no_bs4;
			entry->quantity=1;
			loop++;
			kart[loop-1]=harga_bs4;
			quantity4 = 1;
		
			break;
		case 5:
		
			strcpy(entry->nama,bs5);
			entry->harga=harga_bs5;
			entry->nomor=no_bs5;
			entry->quantity=1;
			loop++;
			kart[loop-1]=harga_bs5;
			quantity5 = 1;
		
			break;
		case 6:				
			KatalogAnimation();
			return yukBelanja();
			break;
		default:
			printf("nothing");
	}
	
	entry->prev=NULL;
	entry->next=NULL;	
	
}

void entry_katalog_elektro(){
		quantity6 = 0;
		quantity7 = 0;
		quantity8 = 0;
	
	entry = (struct katalog *)malloc(sizeof(struct katalog));
	
	switch(posisi){
		case 1:
		
			strcpy(entry->nama,el1);
			entry->harga=harga_el1;
			entry->nomor=no_el1;
			entry->quantity=1;
			loop++;
			kart[loop-1]=harga_el1;
			
			quantity6 = 1;
			
		
			break;
		case 2:
			strcpy(entry->nama,el2);
			entry->harga=harga_el2;
			entry->nomor=no_el2;
			entry->quantity=1;
			loop++;
			kart[loop-1]=harga_el2;
			quantity7 = 1; 
			
		
			break;
		case 3:
			
			strcpy(entry->nama,el3);
			entry->harga=harga_el3;
			entry->nomor=no_el3;
			entry->quantity=1;
			loop++;
			kart[loop-1]=harga_el3;
			quantity8 = 1;
		
			break;
		default:
			printf("nothing");
	}
	
	entry->prev=NULL;
	entry->next=NULL;	
}

void daging_ikan(){
posisi = 1;
	int tekan = 9;
	while (tekan!=13){
			
		system("cls");
	printf("  Under Construction Katalog*\n\n");
	arrowKatalog(1,posisi); printf(" %s ... Rp. %d,00\n",sp1,harga_sp1);
	arrowKatalog(2,posisi); printf(" %s ... Rp. %d,00\n",sp2,harga_sp2);
	arrowKatalog(3,posisi); printf(" %s ... Rp. %d,00\n",sp3,harga_sp3);
	arrowKatalog(4,posisi); printf(" %s ... Rp. %d,00\n",sp4,harga_sp4);	 
	
	tekan = getch();
	if(tekan == 80 && posisi!=4){
		posisi++;
	}
		else if(tekan == 72 && posisi!=1){
			posisi--;
		}
		
			else{
				posisi = posisi;
				
			}
}

entry_katalog_sport();
AddKatalog();
	
}

void entry_katalog_sport(){
		quantity9 = 0;
		quantity10 = 0;
		quantity11 = 0;
		quantity12 = 0;
		
		entry = (struct katalog *)malloc(sizeof(struct katalog));
	switch(posisi){
	case 1:
		
			strcpy(entry->nama,sp1);
			entry->harga=harga_sp1;
			entry->nomor=no_sp1;
			entry->quantity=1;
			loop++;
			kart[loop-1]=harga_sp1;			
			quantity9 = 1;
		
		break;
	case 2:
				
			strcpy(entry->nama,sp2);
			entry->harga=harga_sp2;
			entry->nomor=no_sp2;
			entry->quantity=1;
			loop++;
			kart[loop-1]=harga_sp2;			
			quantity10 = 1;
			
		break;
	case 3:
				
			strcpy(entry->nama,sp3);
			entry->harga=harga_sp3;
			entry->nomor=no_sp3;
			entry->quantity=1;
			loop++;
			kart[loop-1]=harga_sp3;			
			quantity11 = 1;
		break;
			case 4:
				
			strcpy(entry->nama,sp4);
			entry->harga=harga_sp4;
			entry->nomor=no_sp4;
			entry->quantity=1;
			loop++;
			kart[loop-1]=harga_sp4;			
			quantity12 = 1;
		break;
	default:
		printf(" nothin");
}
}

void AddKatalog(){

	if(head==NULL)
{
head=entry;
tail=entry;
}
else
{
tail->next=entry;  
entry->prev=tail;
tail=entry;
}
printer();
}

void pop_free()
{
	system("cls");
int sisip,i;
tampil = head;
int no = 0;
int return_value = 0;

printf("\n\n  Pilih Kart yang akan Anda Hapus *(Ketikkan nomor list yang dihapus lalu tekan enter)\n\n");
while(tampil!=NULL){
	
	
	no++;
printf(
"  No %d: %s (ID : %d) Price: %d\n  ",
no,tampil->nama,tampil->nomor,tampil->harga

);
tampil = tampil->next;
}

return_value = scanf("  %d", &sisip);
while(getchar() != '\n');

tampil=head;

for(i=1;i<sisip-1;i++)
{
tampil=tampil->next;
}
hapus=tampil->next;
tampil2=tampil->next;
tampil->next=hapus->next;
tampil2->prev=tampil;
free(hapus);
printf("\n");

printer();

}

void beli(){
	int posisi = 1;
	int Press = 4;
	
	while(Press != 13){
	system("cls");
	gotoxy(52,12);
	printf("Checkout now?");
	gotoxy(44,14);
	arrowHere(1,posisi); printf("| YES | \n");
	gotoxy(44,16);
	arrowHere(2,posisi); printf("| NO  | \n");
	
	Press = getch();
		if(Press == 80 && posisi!=2){
		posisi++;
	}else if(Press == 72 && posisi!= 1){
		posisi--;
	}
	else{
		posisi = posisi;
	}
	
	}
	
	switch(posisi){
		case 1:
			isi_data();
			break;
			
			case 2:
				return printer();
				break;
				
				default:
					printf("");
					
	}
	
}

int Sum(katalog *head){
   while (head != NULL) {
     sum += head->harga; 
     head = head->next;
   }
   return sum;
}

void isi_data(){
	system("cls");
	printf(
	".==========================---... . .\n"
	"| Data Costumer                      >\n"
	"'=====================--------''' ' '\n"
	);
	
	entries = (struct costumer *)malloc(sizeof(struct costumer));
	
	
	
	printf("  Nama    : ");
	scanf(" %[^\n]s",entries->name);
	char *nama_costumer;
	nama_costumer = entries->name;
	printf("\n");
	printf("  Address : ");
	scanf(" %[^\n]s",entries->address);
	char *address_costumer;
	address_costumer = entries->address;
	char tekan = 0;
	
	printf("  Nama Anda %s beralamat %s.\n  Apakah Anda ingin melanjutkan? [ Y / N ]\n",entries->name,entries->address);
	
	tekan = getch();
	if (tekan == 'y' || tekan == 'Y'){

		//simpan ke database csv
		srand(time(NULL));
		a = rand()%100000;
		printf("Terima kasih, transaksi Anda akan diproses, nomor invoice Anda: %d",a);
		char filename[100] = "database";
		createfile(a,nama_costumer,address_costumer,sum);
	
		getch();
		logo();
		return menu();
	}
	else{
		return printer();
	}
	
	
}


void admin_mode() {
	system("cls");
    atas = NULL;
    char *product_name=NULL;
    int product_price=NULL;
    int n=NULL,i=NULL;
    char pilih;
	do{
		system("cls");
		printf("\n");
		printf("\t\t\t======================================================\n");
		printf("\t\t\t            INVENTARIS SUPERMARKET\n");
		printf("\t\t\t======================================================\n");
		printf("\n\n Menu :");
		printf("\n1  Input Barang.");
		printf("\n2  Delete Barang");
		printf("\n3  Urutkan Barang");
		printf("\n4  Cari Barang");
		printf("\n5  Tampilkan Data Inventaris Keseluruhan");
		printf("\n6  Exit");
		printf("\n Masukan Pilihan Anda : ");
		scanf(" %c",&pilih);
	    switch(pilih){
	    	case '1' :
	    	system("cls");
			printf("Berapa banyak barang yang anda ingin masukan ke inventaris : ");
	    	scanf("%d", &n); 
	    	printf("\n");
   		 for (i = 1; i <= n; i++){
        fflush(stdin);
        printf("Item %d nama: ",i);
        fflush(stdin);
        product_name = (char*) malloc(MAX_STRING_LENGTH*sizeof(char));
        gets(product_name); 
        printf("Harga: ");
        scanf("%d",&product_price);
        insert(product_name, product_price);
        }
	     char d=NULL;
	     print_the_list();
	       system("pause");
		 break;
		 
		 	case '2' :
		 		system("cls");
		 		 print_the_list();
			     delete_node();
			     print_the_list();
			     system("pause");
				 break;
			
			case '3' :
				system("cls");
				print_the_list();
				printf("Apakah kamu mau mengurutkan List Inventaris?(y/n): ");
    			fflush(stdin);
   				scanf("%c", &d);
    			if (d == 'y' || d == 'Y') {
     		    printf("Urutkan Sekarang !");
       			sort();
    		} else
      			  printf("Baiklah!");
      			  print_the_list();
      			    system("pause");
      			  break;
      			  
      		case '4' :
      			 system("cls");
      			 print_the_list();
      			 search();
      			 print_the_list();
      			   system("pause");
      			 break;
      			 
      		case '5' :
      			 system("cls");
      		     print_the_list();
      		       system("pause");
      			 break;
      			 
      		case '6' :
      			database_inventaris();
      			logo();
      			return menu();
      			break;
      			 
      		default :
      			printf("\n Input Salah.Pilih Kembali.\n");
      			
			 	
	}
	
}while(pilih!='6');

}


void insert(char* name, int price){
    Node* new_node = (Node* ) malloc(sizeof(Node));
    new_node->price = price;
    new_node->name   = name;
    new_node->next   = NULL;

    if (atas == NULL) {
        atas = new_node;
    }
    else {
        Node * temp = atas;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new_node;
    }
}

void print_the_list()
{
    printf("\n");
    printf("Data Inventaris Anda Sekarang : \n");
    Node* temp=atas;
    printf("\n");
    while(temp!=NULL)
    {
        printf("%25s",temp->name);
        printf("%25d",temp->price);
        temp=temp->next;
        printf("\n");
    }
}

void sort(){
    char *swap_ptr_name=NULL;
    int swap_ptr_price=NULL;
    Node* current_minimum=NULL;
    Node* current_node=NULL;
    for (current_minimum = atas; current_minimum != NULL; current_minimum = current_minimum->next) {
        for (current_node = current_minimum->next; current_node != NULL;  current_node = current_node->next) {
            if (strcmp(current_node->name,current_minimum->name) < 0) {
                swap_ptr_name   = current_minimum->name;
                swap_ptr_price = current_minimum->price;

                current_minimum->name   = current_node->name;
                current_minimum->price = current_node->price;

                current_node->name   = swap_ptr_name;
                current_node->price = swap_ptr_price;
            }
        }
    }
}

void search()
{
    char *keyword=NULL;
    Node* current=atas;
    printf("Masukan Barang Untuk Mengecek Harga : ");
    fflush(stdin);
    keyword=(char*) malloc(MAX_STRING_LENGTH*sizeof(char));
    gets(keyword);
    for (current=atas;current!=NULL;current=current->next)
    {
        if (strcmp(current->name,keyword)==0) {
            puts(current->name);
            printf("%d",current->price);
        }
    }
}




void delete_node()
{
    char *keyword=NULL;
    char d=NULL;
    Node* current=atas;
    Node* temp=NULL;
    printf("Masukan Item Yang Akan Di Hapus : ");
    fflush(stdin);
    keyword=(char*) malloc(MAX_STRING_LENGTH*sizeof(char));
    gets(keyword);
    for (current=atas;current!=NULL;current=current->next)
    {
        if (strcmp(current->name,keyword)==0) {
            puts(current->name);
            printf("%d\n",current->price);
            printf("Apakah Kamu Yakin Ingin Menghapus Item Tersebut ? [y/n]: ");
            fflush(stdin);
            scanf("%c",&d);
            if (d=='y' || d=='Y') {
                if (current==atas)
                {
                    atas=current->next;
                    free(current);
                }
                else
                {
                    temp->next=current->next;
                    free(current);
                }
            }
        }
        temp=current;
    }
}


void database_inventaris(){
	
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	char *namafile;
	printf("\n  Creating database inventaris.");
	FILE *file;
	
	namafile = "inventaris.csv";
	
	file = fopen(namafile,"a+");
	fprintf(file,"%d/%d/%d, %d:%d:%d, item, harga\n",
	tm.tm_year - 100, 
	tm.tm_mon + 1, 
	tm.tm_mday, 
	tm.tm_hour, 
	tm.tm_min, 
	tm.tm_sec
	);
	temp = atas;
	while(temp!=NULL){
		fprintf(file,",, %s, %d\n",temp->name,temp->price);
		temp = temp->next;
	} 
	 
	fclose(file);
	 
	printf("\n  %sfile created",namafile);
	Sleep(1000);
	
}

void createfile(int no_invoice, char *nama, char *address, int total){
	//time
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	
	char *filename;
	printf("\n  Creating database file");
	 
	FILE *fp;
	
	filename="database.csv";
	
	fp=fopen(filename,"a+");
	 
	fprintf(fp,"\n%d/%d/%d, %d:%d:%d, %d, %s, %s, %d, Item, Harga\n",tm.tm_year - 100, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec,no_invoice,nama,address,total);
	tampil  = head;

	while(tampil!=NULL){
		fprintf(fp,",,,,,, %s, %d\n",tampil->nama,tampil->harga);
		tampil = tampil->next;
	} 
	 
	fclose(fp);
	 
	printf("\n  %sfile created",filename);
	
	getch();
	

	
	
	//reset all node 
	tampil=head;
	
	while (head!=NULL){
	
		tampil = head;
		head = head->next;
		free(tampil);
	}

	
	
			
	
	
	sum = 0;
	a = 0;
	return menu();
}
 
 void prompt_admin(){
 	char i;
 	int tekan = 0;
 	int posisi = 1;
 	while (tekan != 13){
 system("cls");
 gotoxy(51,10);
 printf("AI: Hello, Admin.");
 gotoxy(43,12);
 arrowHere(1,posisi);printf("[1] Login");
 gotoxy(43,14);
 arrowHere(2,posisi);printf("[2] Back");
tekan = getch();

if(tekan == 80 && posisi!=2){
	posisi++;
	
}
else if (tekan == 72 && posisi !=1){
	posisi--;
}
else if(tekan == 27){
	logo();
	return menu();
}
else{
	posisi = posisi;
}

}
switch(posisi){
	case 1:
		//halaman admin
		login();
		break;
	case 2:
		logo();
		return menu();
		break;
	default:
		printf("");
}

 
 }

void login(){
	system("cls");
	gotoxy(45,14);
	printf("PASSCODE :",maxPasswordLength);
	
	while(1){
		ch = getch();
		if( ch == 13 ){
			break;
		}else if( ch == 8 ){
			if( characterPosition > 0){
				characterPosition--;
				password[characterPosition] = '\0';
				printf("\b \b");
			}
		}else if( ch == 32 || ch == 9){
			continue;
		}else{
			if( characterPosition < maxPasswordLength ){
				password[characterPosition] = ch;
				characterPosition++;
				printf(" *");
			}else{
				printf("\n Your Input Exceeds Maksimum Password length of %d. So only First %d characters will be considered",maxPasswordLength,maxPasswordLength);
				break;
			}
		}
		
		
	}
	password[characterPosition]= '\0';
	printf("\n");
	if( strlen(password) ==0){
		printf("No Password Entered");
	}else{
		if(strcmp(password,loginpassword)==0){
			gotoxy(45,16);
			Green();
			printf("Login Success");
			reset();
			//reset
			int o = 0;
			for(o = 0;o<15;o++){
				password[o] = 0;
			}
			ch = 0;
			characterPosition = 0;
			Sleep(1000);
			admin_mode();
		}else{
			gotoxy(45,16);
			red();
			printf("Login Failure");
			reset();
			//reset
			int o = 0;
			for(o = 0;o<15;o++){
				password[o] = 0;
			}
			ch = 0;
			characterPosition = 0;
			Sleep(1000);
			return prompt_admin();
		}
	}
	
}

void fullscreen()
{
	keybd_event(VK_MENU,0x38,0,0);
	keybd_event(VK_RETURN,0x1c,0,0);
	keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

void hide_scrollbar()
{
     SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);

    HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hstdout, &csbi);

    csbi.dwSize.X = csbi.dwMaximumWindowSize.X;
    csbi.dwSize.Y = csbi.dwMaximumWindowSize.Y;
    SetConsoleScreenBufferSize(hstdout, csbi.dwSize);

    HWND x = GetConsoleWindow();
    ShowScrollBar(x, SB_BOTH, FALSE);

    int output;
    bool done = false;
	
}

