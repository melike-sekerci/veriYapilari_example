
#include<stdio.h>
#include<stdlib.h>
 
typedef struct list {
    int sayi;
    struct list *sonraki;
} liste;
liste *ilk = NULL, *son = NULL, *yeni, *silGecici, *gecici;
 
void menu();
void ekle();
void sil(int );
void listele();
void arama(int );
void ekranTemizle();
void bekle();
 
int main() {
    while (1) {
        menu();
    }
    return 0;
}
 
void ekle(int veri) {
 
    yeni = (liste *) malloc(sizeof (liste));
    yeni->sayi = veri;
    yeni->sonraki = NULL;
 
    if (ilk == NULL) { 
        ilk = yeni;
        son = ilk;
    } else {
        son->sonraki = yeni;
        son = son->sonraki;
    }
}
 
void sil(int veri) {
    int kontrol = 0;
    if (ilk->sayi == veri) {
        silGecici = ilk;
        ilk = ilk->sonraki;
        free(silGecici);
        kontrol = 1;
    } else {
        gecici = ilk;
        while (gecici->sonraki != NULL) {
 
 
            if (gecici->sonraki->sayi == veri) {
                kontrol = 1;
                silGecici = gecici->sonraki;
 
                if (silGecici == son)
                    son = gecici;
                gecici->sonraki = silGecici->sonraki;
                free(silGecici);
                break;
 
            }
            gecici = gecici->sonraki;
        }
    }
    if (kontrol == 0)
        printf("Silmek istediginiz eleman listede yok...\n");
    else
        printf("%d sayisi listeden silindi...\n", veri);
}
 
void listele() {
    gecici = ilk;
    while (gecici != NULL) {
        printf("%d\n", gecici->sayi);
        gecici = gecici->sonraki;
 
    }
}
 
void menu() {
    int secim, sayi;
 
    printf("1-Veri Ekleme\n");
    printf("2-Listeleme\n");
    printf("3-Veri Silme\n");
    printf("4-Cikis\n");
    printf("Lutfen Secim Yapiniz --> ");
    scanf("%d", &secim);
 
    switch (secim) {
        case 1:
            ekranTemizle();
            printf("Sayi Giriniz: ");
            scanf("%d", &sayi);
            ekle(sayi);
            printf("%d sayisi listeye eklendi\n",sayi);
            bekle();
            break;
        case 2:
            ekranTemizle();
            if (ilk == NULL) {
                printf("Listeniz Bos. Lutfen eleman ekledikten sonra listeleme yapiniz..\n");
                bekle();
                break;
            }
            listele();
            bekle();
            break;
        case 3:
            ekranTemizle();
            if (ilk == NULL) {
                printf("Liste Bostur. Lutfen eleman ekledikten sonra silme yapiniz..\n");
                bekle();
                break;
            }
            printf("Sayi Giriniz: ");
            scanf("%d", &sayi);
            sil(sayi);
            bekle();
            break;
        case 4:
            ekranTemizle();
            printf("Program Bitti!\n");
            exit(0);
            break;
        default:
            ekranTemizle();
            printf("Hatali Secim\n");
            bekle();
    }
}
 
void ekranTemizle() {
    system("cls");
}
 
void bekle() {
    char temp;
    printf("Devam etmek icin Enter'a basiniz!\n");
    temp = getchar();
    temp = getchar();
    ekranTemizle();
 
}
