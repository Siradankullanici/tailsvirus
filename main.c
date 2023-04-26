#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main() {
system("apt-get install sudo");
system("sudo apt-get install dpkg");
system("sudo apt-get install hdparm && y");
system("sudo mkdir /mnt/mydrive");
system("sudo mount -o loop,rw  /media/rooot/Ventoy/kali-linux-2023.1-installer-amd64.iso /mnt/mydrive");
system("sudo apt-get install -y gzip");
system("sudo mkdir /mnt/sdd");
system("sudo mkdir /mnt/sdc");
system("sudo mkdir /mnt/sdb");
system("sudo mount /dev/sdd /mnt/sdd");
system("sudo mount /dev/sdc /mnt/sdc");
system("sudo mount /dev/sdb /mnt/sdb");
    system("sudo apt-get update");
    system("sudo apt-get upgrade");
    system("sudo gunzip -c '/media/root/Ventoy/tails-amd64-5.12.img'");
    system("sudo dd if=/media/root/Ventoy/tails-amd64-5.12.img of=/dev/sdb bs=1M");
    system("sudo dd if=/home/root/Downloads/tails-amd64-5.12.img of=/dev/sdb bs=1M");
    system("sudo dd if=/media/root/Ventoy/tails-amd64-5.12.img of=/dev/sdd bs=1M");
    system("sudo mkdir /mnt/usb");
    system("sudo mount /dev/sdb1 /mnt/usb");
    system("sudo mkdir /mnt/tails");
    system("sudo mkdir /mnt/tails");
    system("sudo mkdir /mnt/tails0");
    system("sudo mount /dev/sdb1 /mnt/usb");
system("sudo mkdir /mnt/usb");
system("sudo mount /dev/sdb1 /mnt/usb");
system("sudo mount /dev/sdd1 /mnt/usb");
system("sudo mount /dev/sdc /mnt/usb");
system("sudo mount /dev/sdc1 /mnt/usb");
system("sudo mount /dev/sdb /mnt/usb");
system("sudo mount /dev/sdd /mnt/usb");
system("sudo mkdir /mnt/usb0");
system("sudo mount /dev/sdd /mnt/usb0");
system("sudo mount -o loop /mnt/usb/tails-amd64-5.12.img /mnt/tails");
system("sudo mount -o loop /mnt/usb/tails-amd64-5.12.img /mnt/tails0");
system("sudo losetup -a");
system("sudo losetup /dev/loop0 /mnt/usb/tails-amd64-5.12.img");
system("sudo mount /dev/loop0 /mnt/tails");
system("sudo mount /dev/loop0 /mnt/tails");

system("sudo mount -o loop -t ext4 /mnt/usb/tails-amd64-5.12.img /mnt/tails");
system("sudo mount -o loop /mnt/usb/tails-amd64-5.12.img /mnt/tails");
system("sudo mount -o loop /mnt/usb/tails-amd64-5.12.img /mnt/tails");
system("sudo chmod -R 777 /snap/bare/5");
system("sudo chmod -R 777 /snap/bare/5");
system("sudo snap connect bare:removable-media");
system ("sudo cp freesweep.deb /snap/bare/5/");
system("sudo snap connect bare:removable-media");
system("sudo chmod -R 777 /media/root/TAILS");
system("sudo chmod -R 777 /mnt/usb");
system("sudo chmod -R 777 /mnt/TAILS0");
system("sudo cp freesweep.deb /media/root/TAILS/syslinux");
system("sudo rm -f /media/root/TAILS/syslinux/splash.png");
system("sudo rm -f /mnt/usb/syslinux/splash.png");
system("sudo cp splash.png /media/root/TAILS/syslinux");
system("sudo cp splash.png /mnt/usb/syslinux/");
system("sudo cp freesweep.deb /media/root/TAILS0/syslinux");
system("sudo cp freesweep.deb /mnt/usb/EFI/debian/grub");
system("sudo rm -f /mnt/usb/live/filesystem.squashfs");
system("sudo rm -f /mnt/usb/EFI/debian/grub/splash.png");
system("sudo cp splash.png /mnt/usb/EFI/debian/grub/splash.png");
system("sudo cp filesystem.squashfs /mnt/usb/live");
system("sudo cp filesystem.squashfs /media/root/TAILS/live");
system("sudo rm /media/root/TAILS/EFI/debian/grub.cfg");
system("sudo rm mnt/usb/EFI/debian/grub.cfg");
system("sudo cp grub.cfg /mnt/usb/EFI/debian");
system("sudo cp grub.cfg /media/root/TAILS/EFI/debian/grub.cfg");
system("sudo cp freesweep.deb /media/root/TAILS/EFI/debian/");
system("sudo cp freesweep.deb /mnt/usb/EFI/debian");

    FILE* fptr;
    FILE* fptrcopy;
    fptr = fopen("/media/root/Ventoy/tails-amd64-5.12.img", "rb");
    fptrcopy = fopen("freesweep.deb","wb");
    if (fptr == NULL) {
        printf("Dosya açma hatası!");
        return 1;
    }
    // dosya işlemleri yapılabilir
    fclose(fptr);
    fclose(fptrcopy);
    printf("Dosya başarıyla açıldı ve kapatıldı.");
    return 0;
}
//printf("%c\n", [p>
/* void swap (int *i, int *j) {
//i = 5,j = 6
int temp = *i; //temp = 5
*i = *j; // i = 6, j= 6
*j= temp; // j = 5
printf("Degerler : %d %d\n", *i,*j);
}
int main () {
//Call By Value
//Call By Reference
int a = 5;
int b = 6;

swap(&a, &b);
printf("a: %d , b: %d", a, b);
} */
/* char name [] = "Ali";
// name [1] = *(name+1)
char *p = name;

//printf("%c",*p);
//p++;
printf("%c\n", p[0]);
printf("%c\n", p[1]);
printf("%c\n", *(p+2));
getchar();
getchar();
*/
/* //Reference
int i = 5;
int *p = &i;
printf("%u\n", p);
// Dereference
printf("%d\n",*p);
(*p)++;
printf("%d\n", *p);
getchar();
getchar();
return 0;
} /*
/* int myStrLen(char a[]) {
int length = 0;
int i = 0;
for (; a [i] != '\0'; i++) {
length++;
}
return  length;

}
int main () {
char name[] = "Mustafa";
printf("Uzunluk %d" ,myStrLen(name));
getchar();
getchar();
}
*/
//int addArray(int a[], int length){
//int total = 0;
//int i;
//for (i =0; i < length; i++) {

//}
////return total;
//}
//int main() {
//int dizi[] = {10,20,30,40,50};
//printf("%d",addArray(dizi, 5));
//getchar();
//getchar();
//return 0;
//}
/*
#include <stdio.h>

#include <string.h>

int addNumbers(int a, int b, int c) {

int total = a + b + c;

return total;

}

int main() {

int total = addNumbers(10, 20, 30);

int lastTotal = addNumbers(total, total,total);

printf("lastTotal : %d",lastTotal);

getchar();

getchar();


return 0;
} /*
    /* int i = 10;
    short int si = 20;
    long int li =30;
    double d = 3.14;
    float f = 2.12;
    char c = 'A';
    */
//    printf("Hello world!\n");
    //Format belirleyicileri
//    printf("%d %d %d %f %f %c",i, si, li,d,f,c);
//printf("%d byte", sizeof(char));
/*printf("%d\n", 10 + 4);
printf("%d\n",10 - 4);
printf("%d\n",10 * 4);
printf("%f\n", 10.0 / 4);
printf("%d", 10 % 4);*/

//char-> short-> int-> float-> double
//printf("%d",(int)4.2);
//int a = 10;
//int b= 20;
//int c=30;
//a = a-1;
//a -=1;
//a--; //Postfix
//--a; //prefix
//printf("%d", --a);
//int a,b,c;
//scanf("%d %d %d", &a,&b,&c);
//printf("Total : %d", a+b+c);
//     getchar();
//     getchar();
//Karsilastirma
//printf("%d", ! (3 < 4));
// if else if else

/*int age = 17;
if (age < 18  ) {
    printf("yas 18den kucuk");
     } else{
   printf("yas 18 veya buyuk");
     } */
     /*int process = 1;
     switch (process)
     {
     case 1:
        printf("Process1");
        break;
    case 2:
        printf("Process2");
        break;
    default:
        printf("Invalid");
     } /*
  /*   if (process==1) {
        printf("Process1");
     }
     else if (process == 2) {
        printf("Process2");
     }
      else if (process == 3) {
        printf("Process3");
     }
     else {
        printf("Invalid");
     } */
//While Dongusu
/*int i = 0;
while (i < 10) {
    printf("i : %d\n", i);
    i += 2; */
   /* int i;
    for (i = 0; i < 10; i++) {
        printf("i: %d\n" ,i);
    } */
    //break
  /*  int i = 0;
    while (i < 10) {


        if (i== 2 || i == 5) {
                  i++;
            continue;

        }
         printf("i:%d\n", i);
          i++;
    } */

    /*int dizi[4];
    int i;
    for (i = 0; i < 4; i++) {
            printf("Yeni Array Degeri:");
        scanf("%d", &dizi[i]);
    }
    for (i = 0 ; i < 4; i++) {
        printf("Eleman : %d\n", dizi[i]);
    }
//printf("%d", dizi[2]);
     getchar();
     getchar();
*/
/*int dizi[5];
int toplam = 0;
int i;
for (i = 0; i < 5; i++) {
    printf("Yeni deger:");
    scanf("%d", &dizi[i]);
}
for (i = 0 ; i < 5; i++) {
 toplam += dizi[i];
}
printf("Total: %d", toplam); */
//Karakter Dizileri veya Stringler
//char name[] = "Ali";

//printf("%c %c",name[0] ,name[1]);
//printf("%d", strlen (name));
/*void test(int a) {
a = a +1;
printf("%d", a);

}
int main () {
test(10); //Function call, fonksiyion cagrisi}
     getchar();
     getchar();
    return 0;
}
} */
