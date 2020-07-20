# POST TEST 2 PEMROGRAMAN C

1. Buatlah program yang menerima inputan nama, tempat lahir, tanggal lahir, alamat dan hoby, sehingga output seperti di bwah ini :
<pre>
Jution Candra Kirana
Natar, 3 Juli 1995
Bandar Lampung
Membaca Buku
</pre>

2. Pada Tugas ini Kamu harus bisa menentukan, jam kegiatan<br>
Contoh = jika jam 8 sampai jam 11 maka akan mencetak “WAKTU BELAJAR” dan sama untuk jam 13 sampai jam 17, Ketika jam 12 maka akan mencetak “WAKTU ISTIRAHAT”, jika jam 4 sampat jam 5 maka akan mencetak “WAKTU BANGUN”, selain dari jam tersebut akan mencetak “WAKTU MAIN”, bila user menginput melebihi 24 jam maka akan mencetak “HANYA ADA 24 JAM DALAM SEHARI”<br>
<b>KriteriaM/b>
<pre>
Gunakan <, >, <=, >=, ||, && dan if, else, else if
Dapat menginput angka dari para meter function
</pre>
<b>Skeleton Code</b>
<pre>
#include&lt;stdio.h&gt;
int main ()
{
  int inputJam;
  printf("Masukkan Jam :");
  scanf("%d", &inputJam);
  
  if(inputJam > ){
      //kode disini
   } else if(input < ){
      //kode disini
   } else {
      //kode disini
   }
   
}
</pre>
<b>Output</b>
<pre>
// input Waktu(9)

Waktu Belajar

// input Waktu(12)

Waktu Istirahat

// input Waktu(4)

Waktu Bangun

// input Waktu(25)

Hanya Ada 24 jam dalam sehari

// input Waktu(20)

Waktu Main
</b>
