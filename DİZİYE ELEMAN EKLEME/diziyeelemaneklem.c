#include <stdio.h>
#include <stdlib.h>

int main() {
    //Genel de�i�kenlerimiz
   int dizi[30], eklenecekSayi, elemanSayisi, i, lokasyon;
 
   printf("\nDiziye ka� eleman giriceksiniz? :");
   scanf("%d", &elemanSayisi);
 
   for (i = 0; i < elemanSayisi; i++) {
      printf("\n Lutfen dizinin %d. indisindeki sayiyi girin... ", i);
      scanf("%d", &dizi[i]);
   }
 
   printf("\nDiziye Eklemek istediginiz sayiyi girin :");
   scanf("%d", &eklenecekSayi);
 
   printf("\nHangi Pozisyona (indis + 1) Eleman Eklemek �stiyorsunuz? .. ");
   scanf("%d", &lokasyon);
 
   //Belirtilen indis i�in bo�luk olu�turuyoruz. En �nemli yer buras�
   //Eklemek istedi�imiz indisteki ve SONRAK� indisteki t�m say�lar birer ileri kayd�r�l�r
   for (i = elemanSayisi; i >= lokasyon; i--) {
      dizi[i] = dizi[i - 1];
   }
 
   //diziye eleman ekledi�imiz i�in eleman say�s�n� 1 art�yoruz.
   elemanSayisi++;
 
   //Diziler s�f�rdan ba�lad��� i�in indis kar��l��� lokasyonun 1 eksi�i olacakt�r.
   //Burada lokasyona eleman yerle�tirmeyi yap�yoruz.
   dizi[lokasyon - 1] = eklenecekSayi;
 
  //A�a��daki d�ng� dizimizin yeni halini ekrana bas�yor.
   for (i = 0; i < elemanSayisi; i++)
   {
      if(i == lokasyon - 1)
      {
          printf("\n dizi[%d] %d ==> Bu eleman diziye yeni eklendi", i, dizi[i]);
      }
      else
      {
          printf("\n dizi[%d] %d", i, dizi[i]);
      }
 
   }
 
 
   return (0);
}
