### Apa itu pointer

Setiap variabel yang kita buat pada program akan memiliki alamat memori.<br>
Alamat memori berfungsi untuk menentukan lokasi penyimpanan data pada memori (RAM).<br>
Alamat memori biasnya direpresentasikan dalam bilangan heksa desimal.<br>
Contoh:<br>
Coba perhatikan program berikut!<br>

<pre>
#include &lt;stdio.h&gt;

void main () {

   int  a;
   char b[10];

   printf("Alamat memori variabel a: %x\n", &a);
   printf("Alamat memori variabel b: %x\n", &b);

}
</pre>

Pada program tersebut, kita menggunakan simbol & untuk mengambil alamat memori dari variabel a dan b.<br>
Outputnya:

<pre>
Alamat memori variabel a: c1b9bf08
Alamat memori variabel b: c1b9bf0e
</pre>

\*Alamat memori bisa saja berbeda, yang jelas alamat memori menghasilkan nilai hash<br>
Lalu apa hubungannya alamat memori dengan pointer?<br>

Mari kita bahas…<br>

### Apa itu Pointer?

Pointer adalah sebuah variabel berisi alamat memori dari variabel yang lain.<br>
Cek gambar disini : https://www.petanikode.com/img/c/pointer/pointer.webp <br>
Cara membuat pointer:

<pre>
int *nama_pointer;
double *nama_pointer;
float *nama_pointer;
char *nama_pointer;
</pre>

Pointer selalu diawali dengan tanda bintang (\*) di depannya. Simbol ini akan menandakan, kalau ini adalah sebuah pointer.<br>
Tipe data yang digunakan pada pointer tergantung dari tipe data variabel yang akan menjadi referensinya.<br>
Contoh:<br>

<pre>
float a = 4.12;
float *pa = &a;
</pre>

Pointer *pa akan menyimpan alamat memori dari variabel a. Pointer *pa juga akan bisa mengakses dan mengubah nilai dari variabel a.<br>

### Cara Menggunakan Pointer

Ada beberapa langkah yang harus dilakukan saat menggunakan pointer:<br>

1. Membuat Pointer;
2. Mengisinya dengan alamat memori;
3. Mengakses nilai dari pointer.
<br>Mari kita coba lihat contohnya:
<pre>
#include &lt;stdio.h&gt;

void main () {

int x = 20; /_ membuat variabel x _/
int _px; /_ membuat pointer untuk variabel x \*/

px = &x; /_ mengisi alamat memori variabel x ke dalam pointer px _/

printf("Alamat memori variabel x: %x\n", &x );

/_ alamat memori yang disimpan pointer _/
printf("Alamat memori di pointer px: %x\n", px );

/_ mengambil nilai x menggunakan pointer _/
printf("Nilai pada *px: %d\n", *px );

}

</pre>
Lihatlah perpedaanya saat kita menggunakan pa dan *pa. pa akan berisi alamat memori sedangkan *pa akan berisi nilai dari variabel yang alamat memorinya tersimpan pada pointer pa.<br>
Melalui pointer, kita juga bisa mengubah nilai dari variabel x.<br>
Contoh Lain:
<pre>
#include &lt;stdio.h&gt;

void main () {

int x = 20; /_ membuat variabel x _/
int _px; /_ membuat pointer untuk variabel x \*/

px = &x; /_ mengisi alamat memori variabel x ke dalam pointer px _/

printf("Alamat memori variabel x: %x\n", &x );

/_ alamat memori yang disimpan pointer _/
printf("Alamat memori di pointer px: %x\n", px );

/_ mengambil nilai x menggunakan pointer _/
printf("Nilai pada *px: %d\n", *px );

/_ mencetak isi variabel x sebelum diubah_/
printf("Nilai x sebelum: %d\n", x );

/_ mengubah isi nilai variabel x melalui pointer _/
\*px = 48;

/_ mencetak isi variabel x sesudah diubah _/
printf("Nilai x sesudah: %d\n", x );

}

</pre>
***Mengapa bisa begitu?***<br>
Karena pointer *px memiliki alamat memori dari variabel x jadi dia bisa melakukan apa saja dengannya.
