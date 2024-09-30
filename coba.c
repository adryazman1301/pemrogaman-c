/*1*/
#include<stdio.h>
#include<stdint.h>
int main()
{
    int8_t a = 0x1a;
    int8_t b = 0x2;
    print("0x%x + 0x%x\n",a,b,(a+b));
    print("0x%x - 0x%x\n",a,b,(a-b));
    print("0x%x * 0x%x\n",a,b,(a*b));
    print("0x%x / 0x%x\n",a,b,(a/b));
    print("0x%x %% 0x%x\n",a,b,(a%b));
    return 0;
}
/*2*/
#include <stdio.h>
#include <stdint.h>
int main () {
int8_t a = 032;
int8_t b = 02;
printf ("0%o + 0%o = 0%o\n", a, b, (a+b));
printf ("0%o - 0%o = 0%o\n", a, b, (a-b));
printf ("0%o * 0%o = 0%o\n", a, b, (a*b));
printf ("0%o / 0%o = 0%o\n", a, b, (a/b));
printf ("0%o %% 0%o = 0%o\n", a, b, (a%b));
return 0;
}

/*3*/
#include <stdio.h>
void bin (long n) {
if (n) {
bin (n >> 1);
printf ("%c", (n&1) ? '1':'0');
}
}
int main () {
int i;
for (i=1; i<=32;i++) {
printf ("%2d = 0b",i);
bin (i);
printf("\n");
}
return 0;
}
/*4*/

#include <stdio.h>
int main () {
double a = 123.456789;
double b = 12345.6789;
printf ("%16.101f\n",a);
printf ("%16.61f\n",a);
printf ("%16.21f\n",a);
printf ("%16.101f\n",b);
printf ("%16.61f\n",b);
printf ("%16.21f\n",a);
return 0;
}
/*5*/

#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {
printf ("%-20s: %d..%d\n","char",CHAR_MIN, CHAR_MAX);
printf ("%-20s: %d..%d\n","signed char",SCHAR_MIN, SCHAR_MAX);
printf ("%-20s: %d..%d\n","unsigend char", 0, UCHAR_MAX);
printf ("%-20s: %d..%d\n","short",SHRT_MIN, SHRT_MAX);
printf ("%-20s: %d..%d\n","unsigned short",0,USHRT_MAX);
printf ("%-20s: %d..%d\n","int", INT_MIN, INT_MAX);
printf ("%-20s: %d..%u\n","unsigned int",0,UINT_MAX);
printf ("%-20s: %ld..%ld\n","long", LONG_MIN, LONG_MAX);
printf ("%-20s: %d..%lu\n","unsigned long",0,ULONG_MAX);
printf ("%-20s: %lld..%lld\n","long long", LLONG_MIN, LLONG_MAX);
printf ("%-20s: %d..%llu\n","unsigned long long",0,ULLONG_MAX);
printf ("%-20s: %e..%e\n","float", FLT_MIN, FLT_MAX);
printf("%-20s: %e..%e\n","double", DBL_MIN, DBL_MAX);
printf("%-20s: %Le..%Le\n","long double", LDBL_MIN, LDBL_MAX);
return 0;
}
/*6*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
char *inttostr (long long n){
int digits = 20 + 1;
char *result = malloc(digits);
snprintf (result, digits, "%lld", n);
return result;
}
int main()
{
printf("Hasil konversi : %s\n", inttostr(CHAR_MIN));
printf ("Lebar strinng: %ld\n\n", strlen(inttostr (CHAR_MIN)));
printf ("Hasil konversi : %s\n", inttostr (INT_MAX));
printf ("Lebar string: %ld\n\n", strlen (inttostr (INT_MAX)));
printf ("Hasil konversi: %s\n", inttostr (LLONG_MAX));
printf ("Lebar string: %ld\n", strlen (inttostr (LLONG_MAX)));
return 0;
}
/*7*/

#include <stdio.h>
#include <stdlib.h>
int main() {
printf("Hasil konversi atoi (): %d\n", atoi ("12345"));
printf("Hasil konversi atol (): %ld\n", atol ("2147483647"));
printf("Hasil konversi atoll (): %lld\n", atoll ("9223372036854775807"));
printf("Hasil konversi atof (): %lf\n", atof ("12345.6789"));
return 0;
}
/*8*/

#include <stdio.h>
#include <math.h>
int main() {
double val = 123.416128;
printf("val : %lf\n", val);
printf ("round (val) : %.0lf\n", round (val));
printf ("ceil (val) : %.0lf\n", ceil (val));
printf ("floor (val) : %.0lf\n", floor (val));
return 0;
}
/*9*/

#include <stdio.h>
#include <math.h>
int main() {
printf("pow (2,5) : %0.lf\n", pow (2,5));
printf("pow (2,64) : %0.lf\n", pow (2,64));
printf("pow (3.0,3) : %lf\n", pow (3.0,3));
printf("pow (5.2,2) : %lf\n", pow (5.2,2));
return 0;
}
/*10*/

#include <stdio.h>
#include <math.h>
int main() {
printf("sqrt (25) : %0.lf\n", sqrt (25));
printf("sqrt (100) : %0.lf\n", sqrt (100));
printf("sqrt (5) : %lf\n", sqrt (5));
printf("sqrt (12) : %lf\n", sqrt (12));
return 0;
}
/*11*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
int n, magicNumber;
srand (time (NULL));
magicNumber = rand() % 10; /* rentang 0...9*/
for (;;) {
printf ("Tebak Angka (0..9) : ");
scanf ("%d, &n");
if (n > magicNumber){
printf ("Tebakan Anda Masih lebih besar.\n\n");
}else if (n < magicNumber){
printf ("Tebakan Anda Masih lebih kecil.\n\n");
} else {
break;
}
}
printf("Selamat! Tebakan Anda benar.");
return 0;
}
/*12*/

#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897932384626433827
double degreetoradian (double deg){
return (deg * PI) / 180;
}
int main() {
printf("sin (0) : %lf\n", sin(0));
printf("sin (30) : %lf\n", sin(degreetoradian (30)));
printf("sin (45) : %lf\n", sin(degreetoradian (45)));
printf("sin (60) : %lf\n", sin(degreetoradian (60)));
printf("sin (90) : %lf\n", sin(degreetoradian (90)));
printf("cos (0) : %lf\n", cos (0));
printf("cos (30) : %lf\n", cos(degreetoradian (30)));
printf("cos (45) : %lf\n", cos(degreetoradian (45)));
printf("cos (60) : %lf\n", cos(degreetoradian (60)));
printf("cos (90) : %lf\n", cos(degreetoradian (90)));
printf("tan (45) : %lf\n", tan(degreetoradian (45)));
return 0;
}
/*13*/

#include <stdio.h>
#include <time.h>
int main() {
time_t t;
struct tm now;
t = time (NULL);
now = *localtime (&t);
printf("Tanggal dan waktu saat ini\n");
printf("Hari ke- : %d\n", now.tm_mday);
printf("Bulan : %d\n", now.tm_mon + 1);
printf("Tahun : %d\n", now.tm_year + 1900);
printf("Jam : %d\n", now.tm_hour);
printf("Menit : %d\n", now.tm_min);
printf("Detik : %d\n", now.tm_sec);
return 0;
}
/*14*/

#include <stdio.h>
#include <time.h>
const char * const HARI [7] =
{"Minggu","Senin","Selasa","Rabu","Kamis","Jumat","Sabtu"};
const char * const BULAN [12] =
{"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};
int main() {
time_t t;
struct tm now;
t = time (NULL);
now = *localtime (&t);
printf("Tanggal dan Waktu Saat ini:\n");
printf("%s, %d %s %d %d:%d:%d\n",
HARI [now.tm_wday],
now.tm_mday,
BULAN [now.tm_mon],
now.tm_year + 1900,
now.tm_hour,
now.tm_min,
now.tm_sec);
return 0;
}
/*15*/

#include <stdio.h>
#include <time.h>
const char * const HARI [7] = {"Minggu","Senin","Selasa","Rabu","Kamis","Jumat","Sabtu"};
const char * const BULAN [12] =
{"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};
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
/*16*/

#include <stdio.h>
#include <time.h>
void printtime (struct tm t){
printf ("%d/%d/%d %d:%d:%d\n",
t.tm_mday,
t.tm_mon + 1,
t.tm_year + 1900,
t.tm_hour,
t.tm_min,
t.tm_sec);
}
int main(){
time_t t1, t2;
struct tm tm1, tm2;
double seconds;
/* mengisi tanggal dan waktu pertama */
/* 14/03/2016 23:20:5 */
tm1.tm_mday = 14;
tm1.tm_mon = 2;
tm1.tm_year = 2016 - 1900;
tm1.tm_hour = 23;
tm1.tm_min = 20;
tm1.tm_sec = 5;
/* mengisi tanggal dan waktu kedua */
/* 15/03/2016 23:00:0 */
tm2.tm_mday = 15;
tm2.tm_mon = 2;
tm2.tm_year = 2016 - 1900;
tm2.tm_hour = 23;
tm2.tm_min = 0;
tm2.tm_sec = 0;
/* mengisi nilai ke variabel t1 dan t2 */
t1 = mktime (&tm1);
t2 = mktime (&tm2);
/* menghitung selisih detik */
seconds = difftime (t2, t1);
printf("Waktu Pertama : ");
printtime (tm1);
printf ("Waktu Kedua : ");
printtime (tm2);
printf ("Selisih: %lf detik\n", seconds);
return 0;
}
/*17*/

#include <stdio.h>
#include <time.h>
#include <limits.h>
int main() {
time_t starttime, endtime;
struct tm starttm, endtm;
double seconds;
starttime = time (NULL);
starttm = *localtime (&starttime);
/* awal proses */
unsigned int i;
for (i=0; i<400000000; i++) {
;
}
/* akhir proses */
endtime = time (NULL);
endtm = *localtime (&endtime);
seconds = difftime (mktime (&endtm), mktime (&starttm));
printf ("Waktu eksesuksi: %.4lf detik\n", seconds);
return 0;
}