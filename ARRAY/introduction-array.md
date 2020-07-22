# ARRAY

Apa yang akan kamu lakukan jika diminta untuk menyimpan banyak data di program?<br>
Mungkin saja, kita akan menyimpannya seperti ini:<br>

<pre>
char[32] namaKontak1 = "Ayu";
char[32] namaKontak2 = "Bunga";
char[32] namaKontak3 = "Cyntia";
char[32] namaKontak4 = "Deni";
char[32] namaKontak5 = "Elisa";
</pre>

Hal ini boleh-boleh saja..<br>
Akan tetapi, masalahnya:<br>
“Gimana nanti kalau ada banyak sekali data, pasti capek bikin variabel terus?”<br>
Karena itu, kita membutuhkan Array.<br>
Apa itu Array, dan bagaimana cara menggunakannya?<br>
Mari kita bahas…<br>
Apa itu Array?<br>
Array merupakan struktur data yang digunakan untuk menyimpan sekumpulan data dalam satu tempat.<br>
Setiap data dalam Array memiliki indeks, sehingga kita akan mudah memprosesnya.<br>
Indeks array selalu dimulai dari angka nol (0).<br>

### Cara Membuat Array pada C

<pre>
// membuat array kosong dengan tipe data integer dan panjang 10
int namaArray[10];

// membuat array dengan langsung diisi
int namaArr[3] = {0, 3, 2}
</pre>

### Cara Mengambil Data dari Array

<pre>
#include &lt;stdio.h&gt;

void main(){
    char huruf[5] = {'a', 'b', 'c', 'd', 'e'};

    printf("Huruf: %c\n", huruf[2]);
}
</pre>
