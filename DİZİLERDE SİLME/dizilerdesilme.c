#include <stdio.h>
#include <stdlib.h>


int main() {
   //Genel deðiþkenlerimizi okuduk
   int dizi[50], sayi, i, lokasyon;
 
   //Kullanýcýdan kaç adet eleman girileceði bilgisini alýyoruz
   printf("\nKac Adet Eleman Gireceksiniz? :");
   scanf("%d", &sayi);
 
   //Elemanlarý kullanýcýdan alýp diziye aktarýyoruz
 
   for (i = 0; i < sayi; i++) {
      printf("%i. Sayiyi Girin ...", i + 1);
      scanf("%d", &dizi[i]);
   }
 
   //Aþaðýdaki döngü dizinin mevcut halini ekrana basýyor
   for (i = 0; i < sayi; i++)
   {
      printf("\ndizi[%d] ==> %d",i, dizi[i]);
   }
   printf("\nDizinin mevcut hali yukaridaki gibidir...");
 
   //Burada kullanýcýdan indis numarasý istiyoruz. Dikkat edin silinmek istenen elemaný istemiyoruz, indisi istiyoruz. 
   printf("\n Hangi Indisteki Elemani Silmek Istiyorsunuz :");
   scanf("%d", &lokasyon);
 
   //Aþaðýdaki döngü hem silme iþlemini yapýyor, hem de silmek istediðimiz lokasyondan büyük sayýlarý dizide bir indis geri kaydýrýyor.
   while (lokasyon < sayi) {
      dizi[lokasyon - 1] = dizi[lokasyon];
      lokasyon++;
   }
    
   //Dizimizden 1 eleman sildiðimiz için sayi deðiþkeni 1 azaldý.
   sayi--;
 
   //Bu for döngüsü dizideki elemaný sildikten sonraki halini basýyor.
   for (i = 0; i < sayi; i++)
      printf("\ndizi[%d] => %d", i, dizi[i]);
 
   printf("\nDizinin yeni hali yukaridaki gibidir...");
 
   return (0);
}
