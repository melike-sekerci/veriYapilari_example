#include <stdio.h>
#include <stdlib.h>


int main() {
   //Genel de�i�kenlerimizi okuduk
   int dizi[50], sayi, i, lokasyon;
 
   //Kullan�c�dan ka� adet eleman girilece�i bilgisini al�yoruz
   printf("\nKac Adet Eleman Gireceksiniz? :");
   scanf("%d", &sayi);
 
   //Elemanlar� kullan�c�dan al�p diziye aktar�yoruz
 
   for (i = 0; i < sayi; i++) {
      printf("%i. Sayiyi Girin ...", i + 1);
      scanf("%d", &dizi[i]);
   }
 
   //A�a��daki d�ng� dizinin mevcut halini ekrana bas�yor
   for (i = 0; i < sayi; i++)
   {
      printf("\ndizi[%d] ==> %d",i, dizi[i]);
   }
   printf("\nDizinin mevcut hali yukaridaki gibidir...");
 
   //Burada kullan�c�dan indis numaras� istiyoruz. Dikkat edin silinmek istenen eleman� istemiyoruz, indisi istiyoruz. 
   printf("\n Hangi Indisteki Elemani Silmek Istiyorsunuz :");
   scanf("%d", &lokasyon);
 
   //A�a��daki d�ng� hem silme i�lemini yap�yor, hem de silmek istedi�imiz lokasyondan b�y�k say�lar� dizide bir indis geri kayd�r�yor.
   while (lokasyon < sayi) {
      dizi[lokasyon - 1] = dizi[lokasyon];
      lokasyon++;
   }
    
   //Dizimizden 1 eleman sildi�imiz i�in sayi de�i�keni 1 azald�.
   sayi--;
 
   //Bu for d�ng�s� dizideki eleman� sildikten sonraki halini bas�yor.
   for (i = 0; i < sayi; i++)
      printf("\ndizi[%d] => %d", i, dizi[i]);
 
   printf("\nDizinin yeni hali yukaridaki gibidir...");
 
   return (0);
}
