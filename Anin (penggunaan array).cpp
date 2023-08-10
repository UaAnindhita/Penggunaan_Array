#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
//mendeklarasikan array dan variabel
int array1 [5] = {7, 6, 9, 1, 16};
int array2 [5];
int tambah, kurang, kali;

//memberikan nilai beberapa elemen array 2
array2 [0] = 2;
array2 [1] = 3;
array2 [2] = 4;

//membuat persamaan Matematika
tambah = array1[2] + array2[0];
kurang = array1[3] - array2[1];
kali = array1[4] * array2[2];

//menampilkan hasil persamaan
cout << "Array1[2] + Array2[0] = " << tambah << endl;
cout << "Array1[3] - Array2[1] = " << kurang << endl;
cout << "Array1[4] * Array2[3] = " << kali << endl;

system ("PAUSE");
return 0;
}
