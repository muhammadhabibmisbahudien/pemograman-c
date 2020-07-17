# POST TEST PEMROGRAMAN C

1. Buatlah program dengan output seperti di bwah ini :
<pre>
Jution Candra Kirana
Natar, 3 Juli 1995
Bandar Lampung
Keahlian
Web Design, Web Application, Android, iOS
</pre>

2. Pada tugas ini kamu disediakan dua variabel yaitu variabel a bernilai 15 dan variabel b bernilai 20. Kamu diminta untuk menukar nilai dari kedua variabel tersebut dan  tidak boleh merubah langsung nilai variabelnya.<br>
<b>Kriteria:</b><br>
gunakan tipe data bertipe number<br>
tidak boleh merubah langsung nilainya<br>
<b>Skeleton Code</b>
<pre>
#include&lt;stdio.h&gt;
int main ()
{
  int a = 15;
  int b = 20;

  // kode disini
}
</pre>
Output :
<pre>
a = 20, b = 15
</pre>

3. Pada tugas ini kamu disediakan dua variabel yaitu variabel alas bernilai 20 dan variabel tinggi bernilai 25. Kamu diminta untuk menghitung luas segitiga dari kedua veriabel tersebut.<br>
<b>Skeleton Code</b>
<pre>
#include&lt;stdio.h&gt;
int main ()
{
  int alas = 15;
  int tinggi = 20;

  // kode disini
}
</pre>
Output:
<pre>
luas segitiga dengan alas = "x" & tinggi "x" hasilnya "x"
</pre>

4. Pada tugas ini kamu diminta untuk membuat game sederhana. Untuk memulai game ini diperlukan 2 variabel yaitu nama dan peran. Kedua Variabel ini tidak boleh kosong harus ada nilainya, untuk peran sendiri terdapat 2 jenis peran yaitu Superhero & Monster. Untuk selain 2 peran tersebut kalian harus memberikan peringatan. Tugas kalian adalah untuk mengecek masing masing variabel nama dan peran tersebut.<br>
<b>Kriteria</b>
Variabel Nama dan Peran dapat diisi apa saja<br>
Buatlah if - else percabangan untuk mengecek Nama dan Peran</br>
<b>Skeleton Code</b>
<pre>
#include<stdio.h>
int main ()
{
  char nama[10] = "saitama";
  char peran[10] = "superhero";

  // kode disini
  if() {
    // kondisi 1
  } else if() {
    // kondisi 2
  } else {
    // kondisi ...n
  }
}
</pre>
Output:
<pre>
// Jika Nama & Peran Kosong

"Nama dan Peran Harus Di Isi"



// Jika Nama Diisi & Peran Kosong

"Peran Harus Di Isi"



// Jika Nama Diisi & Peran Diisi Superhero

"Selamat Datang Superhero Saitama, Kalahkan Semua Monster Di Muka Bumi"



// Jika Nama Diisi & Peran Diisi Monster

"Selamat Datang Monster Saitama, Hancurkan Semua Superhero Yang Ada"


// Jika Nama Diisi & Peran Diisi Bukan Superhero atau Monster

"Selamat Datang Saitama, Pilih Peranmu Untuk Melanjutkan Game Ini"
</pre>

5. Pada tugas ini kamu diminta untuk mengkonversi variabel menjadi sebuah format tanggal. Misalkan tanggal = 21, bulan = 4, tahun = 2020 maka hasil output yang akan di keluarkan adalah 21 April 2020. Gunakanlah Switch Case untuk mengerjakan tantangan ini!<br>
<b>Kriteria</b>
Variabel tanggal, bulan dan tahun harus bertipe angka<br>
Buatlah switch case untuk mengkonversi variabelnya menjadi format tanggal<br>
<b>Skeleton Code</b>
<pre>
#include&lt;stdio.h&gt;
int main ()
{
  // input
  int tanggal = 21;
  int bulan = 4;
  int tahun = 2020;
  
  // kode disini
  switch(bulan) {
    case 1:
      printf("Januari");
      break;
    case 2:
      printf("Februari");
      break;
     
    default:
      printf("Bulan hanya sampai Desember");
  }
}
</pre>
Output:
<pre>
// int tanggal 21, bulan 4, tahun 2020

"21 April 2020"
</pre>
