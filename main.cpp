#include <iostream>
#include <locale>
#include <time.h>
#include <unistd.h>
#include "bilgiler.h"

int main(int argc, char** argv) {

//Deðiþkenlerimiz
int no, password;
int secim=0;
int islemtutar=0;
int bakiye=0;
int maxkredi=0;
int borc=0;


//TTürkçe Karakter
	setlocale(LC_ALL, "Turkish");
	
	
// Giriþ Kýsmý
giris:
	printf("Müþteri Numaranýzý Giriniz: ");
	scanf("%d",&no);
	printf("Müþteri Þifrenizi Giriniz: ");
	scanf("%d",&password);

if(no==musterino && password==sifre){
system("cls");
}
else{
	system("cls");
	printf("Bilgilerinizi yanlýþ girdiniz, lütfen tekrar deneyin.\n\n\n"); 
	goto giris;
}

// Menü - Ýþlemler
menu: 

//Sonsuz Döngü
for(;;){ 

// Baþarýsýz iþlemleri döngü içerisine alýp, baþarýlý olana kadar döndürebilmek için.
int onay=0;

// Maksimum çekebileceði krediyi belirleme 
maxkredi=bakiye*krediorani;



	printf("Hoþgeldiniz %s bey.\n\n",isim);
	printf("1 - Para Yatýrma");
	printf("\n2 - Para Çekme");
	printf("\n3 - Kredi Baþvurusu");
	printf("\n4 - Borç Öde"); 
	printf("\n5 - Hesap Özeti");
	printf("\n6 - Çýkýþ Yap");
	
	printf("\n\nSeçiminizi giriniz: ");
	scanf("%d",&secim);

switch(secim)
{
	// Para Yatýrma
	case 1: 
	printf("Yatýrmak istediðiniz tutarý giriniz: ");
	scanf("%d",&islemtutar); 
	
	// Bakiye'ye kullanýcýnýn girdiði parayý ekleyelim.
	bakiye+=islemtutar;
	
	system("cls");
	printf("\nYeni bakiyeniz: %d\n\n",bakiye);
	break;
	
	// Para Çekme
	case 2:
	for(;onay=1;){
	printf("\nÇekmek istediðiniz tutarý giriniz: ");
	scanf("%d",&islemtutar); 

	if(islemtutar<bakiye){
		onay=1;
		bakiye-=islemtutar; // veya bakiye=bakiye-islemtutar; olarakta yazýlabilir.
		system("cls");
		printf("\nÝþleminiz gerçekleþtirildi. Yeni Bakiyeniz: %d\n\n",bakiye);
		break;
	}
	else{
		system("cls");
		printf("Hesabýnýzda yeterli bakiye yok, lütfen tekrar deneyiniz.");
	}
		}
	
	case 3:
	for(;onay=1;){
	printf("Çekebileceðiniz maksimum tutar: %d\n\n",maxkredi); 
	printf("\nÇekmek istediðiniz kredi tutarýný giriniz: ");
	scanf("%d",&islemtutar); 
	if(maxkredi<islemtutar){
		system("cls");
		printf("\n\n Krediniz onaylanmadý."); printf(".");sleep(1);printf(".");sleep(1);
		system("cls");
	}
	else{
		system("cls");
		printf("Ýþleminiz baþarýyla gerçekleþtirildi.\n");
		
		// Kredi Ýþlemleri
		bakiye=bakiye+islemtutar; 
		borc=islemtutar*faiz; 
		
		printf("\nYeni bakiyeniz: %d",bakiye); 
		printf("\nBorcunuz: %d\n",borc);
		break;
		
	}
	
	}
	
	case 6:
	break;
	system("cls");
	goto giris;
	
}
	
}
	
}
