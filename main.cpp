#include <iostream>
#include <locale>
#include <time.h>
#include <unistd.h>
#include "bilgiler.h"

int main(int argc, char** argv) {

//De�i�kenlerimiz
int no, password;
int secim=0;
int islemtutar=0;
int bakiye=0;
int maxkredi=0;
int borc=0;


//TT�rk�e Karakter
	setlocale(LC_ALL, "Turkish");
	
	
// Giri� K�sm�
giris:
	printf("M��teri Numaran�z� Giriniz: ");
	scanf("%d",&no);
	printf("M��teri �ifrenizi Giriniz: ");
	scanf("%d",&password);

if(no==musterino && password==sifre){
system("cls");
}
else{
	system("cls");
	printf("Bilgilerinizi yanl�� girdiniz, l�tfen tekrar deneyin.\n\n\n"); 
	goto giris;
}

// Men� - ��lemler
menu: 

//Sonsuz D�ng�
for(;;){ 

// Ba�ar�s�z i�lemleri d�ng� i�erisine al�p, ba�ar�l� olana kadar d�nd�rebilmek i�in.
int onay=0;

// Maksimum �ekebilece�i krediyi belirleme 
maxkredi=bakiye*krediorani;



	printf("Ho�geldiniz %s bey.\n\n",isim);
	printf("1 - Para Yat�rma");
	printf("\n2 - Para �ekme");
	printf("\n3 - Kredi Ba�vurusu");
	printf("\n4 - Bor� �de"); 
	printf("\n5 - Hesap �zeti");
	printf("\n6 - ��k�� Yap");
	
	printf("\n\nSe�iminizi giriniz: ");
	scanf("%d",&secim);

switch(secim)
{
	// Para Yat�rma
	case 1: 
	printf("Yat�rmak istedi�iniz tutar� giriniz: ");
	scanf("%d",&islemtutar); 
	
	// Bakiye'ye kullan�c�n�n girdi�i paray� ekleyelim.
	bakiye+=islemtutar;
	
	system("cls");
	printf("\nYeni bakiyeniz: %d\n\n",bakiye);
	break;
	
	// Para �ekme
	case 2:
	for(;onay=1;){
	printf("\n�ekmek istedi�iniz tutar� giriniz: ");
	scanf("%d",&islemtutar); 

	if(islemtutar<bakiye){
		onay=1;
		bakiye-=islemtutar; // veya bakiye=bakiye-islemtutar; olarakta yaz�labilir.
		system("cls");
		printf("\n��leminiz ger�ekle�tirildi. Yeni Bakiyeniz: %d\n\n",bakiye);
		break;
	}
	else{
		system("cls");
		printf("Hesab�n�zda yeterli bakiye yok, l�tfen tekrar deneyiniz.");
	}
		}
	
	case 3:
	for(;onay=1;){
	printf("�ekebilece�iniz maksimum tutar: %d\n\n",maxkredi); 
	printf("\n�ekmek istedi�iniz kredi tutar�n� giriniz: ");
	scanf("%d",&islemtutar); 
	if(maxkredi<islemtutar){
		system("cls");
		printf("\n\n Krediniz onaylanmad�."); printf(".");sleep(1);printf(".");sleep(1);
		system("cls");
	}
	else{
		system("cls");
		printf("��leminiz ba�ar�yla ger�ekle�tirildi.\n");
		
		// Kredi ��lemleri
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
