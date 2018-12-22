# Sien Digital Marketplace, Ltd.

<p align="center"><img src="https://raw.githubusercontent.com/bloodberrys/SienDigitalMarketplace/master/Logo_DigitalMarketplace.png"></p>

* [Description](#description)
* [Installation](#installation)
* [How Does It Works](#documentation)
* [Contact Person](#contact)

## Description
SIEN Digital Marketplace, Ltd. adalah sebuah prototype dari sebuah platform layanan perbelanjaan digital, dimana kami ingin membuat kepercayaan dalam berbelanja seperti layaknya di Supermarket dengan konsep yang cepat, fleksibel dan efisien sehingga tidak memakan waktu berharga Anda. 

Anda bisa menggunakan aplikasi yang kami sediakan, atau datang langsung ke supermarket favorit Anda yang sudah tersedia layanan SIEN digital. Cocok bagi Anda yang seorang mahasiswa atau seorang jomblo, SIEN Digital Marketplace adalah aplikasi idaman Anda.

## Installation
1. Download atau clone repository ke desktop Anda
2. Ekstrak dalam satu folder dan pastikan bahwa semua source code diletakkan di dalam satu branch.
3. Jalankan dengan membuka `main.c`dengan menggunakan IDE C/C++ language
4. `Compile dan Run` 


## Documentation
Flowchart Program Belanja:
<p align="center"><img src = "https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/flowchart.png"></p>

Flowchart Menu untuk Admin:
<p align = "center"><img src = "https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/admin_mode.png"></p>
															      

Fullscreen Prompt:
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

Menu:
<p align="center"><img src="https://github.com/bloodberrys/SienDigitalMarketplace/blob/master/Documentation/yuk_belanja.png"></p>
Pada program belanja, semua menggunakan fungsi `arrow.h` sehingga input pilihan yang dilakukan hanya menggunakan tombol arrow pada keyboard user (kiri, kanan, atas, dan bawah).

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
Berhubung program ini merupakan program prototype dari sebuah platform, kami menggunakan ASCII Art untuk tampilan program yang didapatkan dari beberapa sumber:
- [https://asciiart.eu/electronics](https://asciiart.eu/electronics)
- [http://www.asciiworld.com/](http://www.asciiworld.com/)
- [https://manytools.org/hacker-tools/convert-images-to-ascii-art/](https://manytools.org/hacker-tools/convert-images-to-ascii-art/)
- [https://www.ascii-art-generator.org/](https://www.ascii-art-generator.org/)
- [http://asciiflow.com/](http://asciiflow.com/)



## Contact
For more further information, questions or any concerns please do contact us:

alfian.firmansyah@ui.ac.id / 083870975096

fahrialamsyah231@gmail.com / 081316259144





