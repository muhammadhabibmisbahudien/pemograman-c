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
   <b>Kriteria</b>
   <pre>
   Gunakan <, >, <=, >=, ||, && dan if, else, else if
   Dapat menginput angka dari keyboard
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

</pre>

3. Pada tugas ini kamu harus bisa membuat algoritma tahun kabisat, kabisat adalah tahun dimana dia memiliki tanggal 29 februari, kejadian ini terjadi 4 tahun sekali<br>Contoh = Jika menginput tahun dan BUKAN tahun kabisat maka akan mencetak “BUKAN TAHUN KABISAT”, jika benar tahun itu tahun kabisat maka akan mencetak “TAHUN KABISAT”<br>
   <b>Kriteria</b>
   <pre>
   Dapat menginput angka dari keyboard
   Menggunakan modulus dan if, else, else if
   </pre>
   <b>Skeleton Code</b>
   <pre>
   #include&lt;stdio.h&gt;
   int main ()
   {
     int inputTahun;
     printf("Masukkan Tahun :");
     scanf("%d", &inputTahun);

if(inputTahun % ){
//kode disini
} else if(inputTahun % ){
//kode disini
} else {
//kode disini
}

}

</pre>
<b>Output</b>
<pre>
// input Tahun(2020)

"TAHUN KABISAT”

// input Tahun(2019)

“BUKAN TAHUN KABISAT”

</pre>

4. Pada tugas ini kamu diminta untuk mencetak suara binatang dari hasil inputan nama binatangnya<br>
   <b>Kriteria</b>
   <pre>
   Gunakan metode switch case
   </pre>
   <b>Skeleton Code</b>
   <pre>
   #include&lt;stdio.h&gt;
   int main ()
   {
     char *inputBinatang;
     printf("Masukkan Jenis Binatang :");
     scanf("%s", &inputBinatang);

switch(inputBinatang) {
case :
?????
break

}

}

</pre>
<b>Output</b>
<pre>//input SwitchCase(kucing)

Meowww~

//input SwitchCase(anjing)

Guk Guk

//input SwitchCase(sapi)

Moooooo

</pre>
