#include <stdio.h>
#include <time.h>
const char * const HARI [7] = {"Minggu","Senin","Selasa","Rabu","Kamis","Jumat","Sabtu"};
const char * const BULAN [12] ={"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};
int main()
{
time_t t;
struct tm timeinfo;
int day, mounth, year;
t = time (NULL);
timeinfo = *localtime (&t);
/* Meminta user memasukkan tanggal*/
printf("Masukkan Hari : ");
scanf ("%d", &day);
printf("Masukkan Bulan : ");
scanf ("%d", &mounth);
printf("Masukkan Tahun : ");
scanf ("%d", &year);
/* Memodifikasi nilai variable timeinfo */
timeinfo.tm_mday = day;
timeinfo.tm_mon = mounth - 1;
timeinfo.tm_year = year - 1900;
mktime (&timeinfo);
printf ("\nTanggal yang anda masukkan : \n");
printf ("%s, %d %s %d\n",
HARI [timeinfo.tm_wday],
timeinfo.tm_mday,
BULAN [timeinfo.tm_mon],
timeinfo.tm_year + 1900);
return 0;
}