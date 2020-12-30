#include <stdio.h>
#include <stdlib.h>

int main() {
    //Genel deðiþkenlerimiz
   int dizi[30], eklenecekSayi, elemanSayisi, i, lokasyon;
 
   printf("\nDiziye kaç eleman giriceksiniz? :");
   scanf("%d", &elemanSayisi);
 
   for (i = 0; i < elemanSayisi; i++) {
      printf("\n Lutfen dizinin %d. indisindeki sayiyi girin... ", i);
      scanf("%d", &dizi[i]);
   }
 
   printf("\nDiziye Eklemek istediginiz sayiyi girin :");
   scanf("%d", &eklenecekSayi);
 
   printf("\nHangi Pozisyona (indis + 1) Eleman Eklemek Ýstiyorsunuz? .. ");
   scanf("%d", &lokasyon);
 
   //Belirtilen indis için boþluk oluþturuyoruz. En önemli yer burasý
   //Eklemek istediðimiz indisteki ve SONRAKÝ indisteki tüm sayýlar birer ileri kaydýrýlýr
   for (i = elemanSayisi; i >= lokasyon; i--) {
      dizi[i] = dizi[i - 1];
   }
 
   //diziye eleman eklediðimiz için eleman sayýsýný 1 artýyoruz.
   elemanSayisi++;
 
   //Diziler sýfýrdan baþladýðý için indis karþýlýðý lokasyonun 1 eksiði olacaktýr.
   //Burada lokasyona eleman yerleþtirmeyi yapýyoruz.
   dizi[lokasyon - 1] = eklenecekSayi;
 
  //Aþaðýdaki döngü dizimizin yeni halini ekrana basýyor.
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
