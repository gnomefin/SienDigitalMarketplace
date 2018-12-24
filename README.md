# Sien Digital Marketplace, Ltd.

<p align="center"><img src="https://raw.githubusercontent.com/bloodberrys/SienDigitalMarketplace/master/Logo_DigitalMarketplace.png"></p>

* [Description](#description)
* [Installation](#installation)
* [How Does It Works](#how-does-it-works)
	+ [Flowchart](#flowchart)
	+ [User Usage Documentation](#user-usage-documentation)
	+ [Admin Usage Documentation](#admin-usage-documentation)
* [Contact Person](#contact-person)

## Description
**SIEN Digital Marketplace, Ltd.** adalah sebuah prototype dari sebuah platform layanan perbelanjaan digital, dimana kami ingin membuat kepercayaan dalam berbelanja seperti layaknya di Supermarket dengan konsep yang cepat, fleksibel dan efisien sehingga tidak memakan waktu berharga Anda. 

Anda bisa menggunakan aplikasi yang kami sediakan, atau datang langsung ke supermarket favorit Anda yang sudah tersedia layanan SIEN digital. Cocok bagi Anda yang seorang mahasiswa atau seorang jomblo, SIEN Digital Marketplace adalah aplikasi idaman Anda.

Kami membuat fitur ini murni berasal dari inspirasi diri dan pengaplikasian pembelajaran perkuliahan Pemrograman Lanjut 02 dimana kami berdiskusi melalui beberapa referensi seperti melalui amazon dan juga buku buku terkait pemrograman sehingga terciptalah ide ini dan juga relevansi implementasi program ini sangat berguna layaknya pada kehidupan sehari hari. 
## Installation
1. **Download** atau **clone** repository ke desktop Anda
2. Ekstrak dalam satu folder dan pastikan bahwa semua source code diletakkan di dalam satu branch.
3. Jalankan dengan membuka `main.c` dengan menggunakan IDE C/C++ language
4. `Compile dan Run` 


## How Does It Works

### Flowchart
**Flowchart Program Belanja:**
<p align="center"><img src = "https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/flowchart.png"></p>

**Flowchart Menu untuk Admin:**
<p align = "center"><img src = "https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/admin_mode.png"></p>
															      
### User Usage Documentation

**Fullscreen Prompt:**
<p align="center"><img src="https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/Fullscreen.PNG"></p>

Source Program `fullscreen` untuk membuat program yang dijalankan terlihat fullscreen, namun scrollbar masih muncul di sisi kanan, untuk itu dibutuhkan fungsi `hide_scrollbar` untuk menghapusnya:
```c
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
```
---

Berhubung program ini merupakan program prototype dari sebuah platform, kami menggunakan ASCII Art untuk tampilan program yang didapatkan dari beberapa sumber:
- [https://asciiart.eu/electronics](https://asciiart.eu/electronics)
- [http://www.asciiworld.com/](http://www.asciiworld.com/)
- [https://manytools.org/hacker-tools/convert-images-to-ascii-art/](https://manytools.org/hacker-tools/convert-images-to-ascii-art/)
- [https://www.ascii-art-generator.org/](https://www.ascii-art-generator.org/)
- [http://asciiflow.com/](http://asciiflow.com/)

---

**Menu:**
<p align="center"><img src="https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/menu.png"></p>

Pada program belanja, semua menggunakan fungsi *arrow.h* sehingga input pilihan yang dilakukan hanya menggunakan tombol arrow pada keyboard user (kiri, kanan, atas, dan bawah).

```c
void arrowKatalog(int realPosition, int arrowPosition){

	if(realPosition == arrowPosition){
		printf("[%lc]",(wint_t)251); //251 adalah simbol checklist, wint adalah fungsi dalam `wchar.h`
	}
	else{
		printf("[ ]");
	}
}	
	
	
void arrowHere(int realPosition, int arrowPosition){

	if(realPosition == arrowPosition){
		printf("        -> ");
	}
	else{
		printf("           ");
	}
}		
```

**Menu Katalog**, dimana user diminta untuk memilih item dengan katalog yang tersedia (fungsi arrow masih digunakan pada state ini):
<p align="center"><img src="https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/katalog.PNG"></p>

**Items:**
<p align="center"><img src="https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/item.png"></p>


Lalu menu **Kart**, dimana item disimpan dalam keranjang belanjaan beserta dengan rincian dan total harga (Hotkey fleksibilitas bisa dilakukan di state manapun dengan menekan tombol `SPACE` dan untuk menghapus kart `CTRL + D`):
<p align="center"><img src="https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/kart.PNG"></p>

**Pembelian** jika user menekan `CTRL + B`:
<p align="center"><img src="https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/checkout.PNG"></p>

Lalu User akan diminta untuk mengisi **form** singkat, yaitu nama dan alamat:
<p align="center"><img src="https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/form_database.PNG"></p>

Dari proses yang sudah dijalankan, semua data akan direcord untuk diletakkan di sebuah **database -.csv** (*Comma Separated Values Microsoft Excel*):
<p align="center"><img src="https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/database.PNG"></p>

*Note: Database csv dapat dibuka pada branch yang sama dengan file `main.c`, yaitu dengan nama `database.csv`.

Source code untuk database :
```c
void createfile(int no_invoice, char *nama, char *address, int total){
	//time
	time_t t = time(NULL);				//mencatat waktu
	struct tm tm = *localtime(&t);
	
	char *filename;
		printf("\n  Creating database file");
			FILE *fp;
				filename="database.csv";
	
	fp=fopen(filename,"a+");
		fprintf(fp,"\n%d/%d/%d, %d:%d:%d, %d, %s, %s, %d, Item, Harga\n",
		tm.tm_year - 100, tm.tm_mon + 1, 
		tm.tm_mday, 
		tm.tm_hour, 
		tm.tm_min, 
		tm.tm_sec,
		no_invoice,nama,address,total
		);
	
	tampil  = head;

	while(tampil!=NULL){
		fprintf(fp,",,,,,, %s, %d\n",tampil->nama,tampil->harga);
		tampil = tampil->next;
	} 
	 
	fclose(fp);
	printf("\n  %sfile created",filename);
	getch();
	
	//reset all node setelah melakukan transaksi, atau untuk mengosongkan kart
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
```

Lainnya: 
```c
printf("still under construction"); //hehehe
```


### Admin Usage Documentation
Untuk menggunakan menu admin `CTRL + SHIFT + 2` dan juga anda harus mengetahui password admin dari aplikasi yang kami sediakan dimana jika password tersebut salah maka akan ada warning mengenai hal tersebut, namun bila password benar maka program akan menuju menu inventaris. 

<p align="center"><img src="https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/Bantuan%202.PNG"></p>

Source Untuk Login dan Back dengan menggunakan Arrow : 
```c
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
 ```
 
Selain itu kami juga menampilkan fitur keamanan dalam menu admin kami dan berikut kami akan menampilkan source code dan outputnya :

<p align="center"><img src="https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/Bantuan%2014.PNG"></p>

Source code Password : 
```c
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
 ```
 
 Berikut adalah tampilan menu inventaris untuk awalan program : 

<p align="center"><img src="https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/Bantuan%205.PNG"></p>

Source code sebagai berikut :
```c
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
 ```
Kemudian didalam menu inventaris tersebut kita dapat menambahkan barang , menghapus barang , mengurutkan barang , dan mencari barang yang kita ingin sesuai keyword yang kita masukan. Berikut adalah tampilan outputnya : 

<p align="center"><img src="https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/bantuan%2013.PNG"></p>

Source Code Untuk `insert` , `delete_node` , `sort` , `search`, dan `print_the_list`:
```c
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
 ```
<p align="center"><img src="https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/Bantuan%2010.PNG"></p>
<p align="center"><img src="https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/Bantuan%2011.PNG"></p>

Dan disimpan pada database dengan bentuk **-.csv** (*Comma Separated Values Microsoft Excel*) :
<p align="center"><img src="https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/database_inventaris.PNG"></p>

Source Code untuk bagian ini adalah : 

 ```c
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
 ```

## Contact Person
For more further information, questions or any concerns please do contact us:

alfian.firmansyah@ui.ac.id / 083870975096

fahrialamsyah231@gmail.com / 081316259144





