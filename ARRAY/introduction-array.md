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

Output

<pre>
c
</pre>

### Mengisi Ulang Data pada Array

<pre>
#include &lt;stdio.h&gt;

void main(){
    // isi awal array
    char huruf[5] = {'a', 'b', 'c', 'd', 'e'};

    // mengubah isi array
    huruf[2] = 'z';

    // mencetak isi array
    printf("Huruf: %c\n", huruf[2]);
}
</pre>

Output

<pre>
z
</pre>

Contoh lain: <br>

<pre>
#include &lt;stdio.h&gt;

void main(){
    // membuat array kosong
    int nilai[5];

    // mengisi array
    nilai[0] = 32;
    nilai[1] = 42;
    nilai[2] = 76;
    nilai[3] = 31;
    nilai[4] = 57;

    // mencetak isi array
    printf("Nilai ke-1: %d\n", nilai[0]);
    printf("Nilai ke-2: %d\n", nilai[1]);
    printf("Nilai ke-3: %d\n", nilai[2]);
    printf("Nilai ke-4: %d\n", nilai[3]);
    printf("Nilai ke-5: %d\n", nilai[4]);
}
</pre>

Output :<br>

<pre>
Nilai ke-1: 32
Nilai ke-2: 42
Nilai ke-3: 76
Nilai ke-4: 31
Nilai ke-5: 57
</pre>

### Mengambil Panjang Array

Fungsi <code>sizeof()</code> untuk mengambil panajang atau ukuran array.<br>
Fungsi sizeof() sebenarnya akan mengambil ukuran memori dari array.<br>
Misalkan saya punya array seperti ini:<br>

<pre>
int nilai[2] = {1,2};
</pre>

Isi array-nya berupa integer, tipe data integer memiliki ukuran 4 byte dalam memori. Maka ukuran array tersebut adalah 8 byte.<br>
Lalu bagaimana cara mendapatkan banyaknya isi array?<br>
Bahasa pemrograman C belum memiliki fungsi khusus untuk mengambil banyaknya isi array.<br>
Tapi kita bisa mengambil panjang array dengan membagi besar array dan ukuran pointernya.<br>
Contoh:

<pre>
#include &lt;stdio.h&gt;

void main(){
    // membuat array
    int nilai[5] = {33, 22, 11, 44, 21};

    //  mengambil banyaknya isi array
    int length = sizeof(nilai) / sizeof(*nilai);

    printf("Banyaknya isi array nilai: %d\n", length);
}
</pre>

Output :

<pre>
Banyaknya isi array nilai: 5
</pre>
