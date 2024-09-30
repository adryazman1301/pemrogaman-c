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