#include <stdio.h>

int main()
{
    int a,kode,c; float harga_asli,diskon, harga_diskon;char kata;
do
{

    printf("Ini Adalah Toko Gadget\n Barang-Barang Yang Dijual Berikut Ini :\n");
    printf("Barang ke-1 : Handphone Samsul J1000");
    printf("\nHarga   : 100.000");
    printf("\nBarang ke-2 : Handphone Anjas mi");
    printf("\nHarga   : 50.000");
    printf("\nBarang ke-3 : Handphone Sinai");
    printf("\nHarga   : 210.000");
    printf("\nBarang ke-4 : Handphone ssam");
    printf("\nHarga   : 150.000");
    printf("\nBarang ke-5 : Handphone sna");
    printf("\nHarga   : 40.000");
    printf("\nBarang ke-6 : Handphone Amksa");
    printf("\nHarga   : 120.000\n Silahkan Pilih\n");
    scanf("%d",&a);

    if (a > 0 && a < 7)
    {
        if (a == 1)
        {
            kode = 1;
            harga_asli=100.000;
            printf("harga sebelum diskon :Rp %f\n",harga_asli);
        }else if (a == 2)
        {
            kode = 2;
            harga_asli=50.000;
            printf("harga sebelum diskon :Rp %f\n",harga_asli);
        }else if (a == 3)
        {
            kode = 2;
            harga_asli=210.000;
            printf("harga sebelum diskon :Rp %f\n",harga_asli);
        }else if (a == 4)
        {
            kode = 1;
            harga_asli= 150.000;
            printf("harga sebelum diskon :Rp %f\n",harga_asli);
        }else if (a == 5)
        {
        kode =2;
        harga_asli= 40.000;
        printf("harga sebelum diskon :Rp %f\n",harga_asli);
        }else if (a ==6)
        {
            kode =2;
        harga_asli= 120.000;
        printf("harga sebelum diskon :Rp %f\n",harga_asli);
        }else{
            printf("Pilih Yang bener tot");
        }
        
    }
    if (kode == 1)
    {
        diskon = harga_asli * 0.10 ;
        printf("anda mendapatkan diskon sebesar: RP %f\n",diskon);
        harga_diskon = harga_asli - diskon;
        printf("harga sesudah diskon :Rp %f",harga_diskon);
    }else if (kode == 2)
    {
        if (harga_asli < 50000)
        {
            diskon = harga_asli * 0.15 ;
            printf("anda mendapatkan diskon sebesar: RP %f\n",diskon);
            harga_diskon = harga_asli - diskon;
            printf("harga sesudah diskon :Rp.%f",harga_diskon);
        }else if (harga_asli<200000)
        {
            diskon = harga_asli * 0.20 ;
            printf("anda mendapatkan diskon sebesar: RP %f\n",diskon);
            harga_diskon = harga_asli - diskon;
            printf("harga sesudah diskon :Rp.%f",harga_diskon);
        }else
        {
            diskon = harga_asli * 0.25 ;
            printf("anda mendapatkan diskon sebesar: RP %f\n",diskon);
            harga_diskon = harga_asli - diskon;
            printf("harga sesudah diskon :Rp.%f",harga_diskon);
        }
    }

    printf("\nMau Beli Lagi?\n ketik y/n\n");
    scanf(" %c", &kata);

} while (kata == 'y');

    printf("Terimakasih dah belanja");

 return 0;
}




// #include <stdio.h>  
// #include <string.h>

// int main (){
//     char kata_masuk[100];
//     int berapa_kata;
//     printf("Kalimat :");
//     scanf("%s", kata_masuk);
//     int panjang_kata = strlen(kata_masuk);
//     printf("Baris ?");
//     scanf("%d", &berapa_kata);
//     char arr[berapa_kata][panjang_kata];
 
//     for (int k = 0; k < berapa_kata; k++)
//     {
//         for (int i = 0; i <panjang_kata; i++){
//             arr[k][i] = kata_masuk[i];
//         }
//     }

//     for (int k = 0; k < berapa_kata; k++)
//     {
//         for (int i = 0; i <panjang_kata; i++){            
//             printf("%c", arr[k][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//     for (int i = 0; i <panjang_kata; i++){
//         printf("Baris ?");
//         scanf("%d", &berapa_kata);
//         for (int j = 2; j > berapa_kata; j++)
//         {
//            printf("%c", arr[j]);
//         }
//     }

    
    
//       for (int i = 0; i <panjang_kata; i++)
//     {
//         printf("%s",&i);
//     }
//     for (int i = 0 ; i < panjang_kata; i++){
//     arr[i]++;
//         for (int j = 0; j > berapa_kata; j++){
            
//         }    
//     }   
//     return 0 ;
// }