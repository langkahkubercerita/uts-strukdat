#include <iostream>
#include <queue> 
// Menggunakan pustaka queue untuk kemudahan manipulasi antrian

int main() {
  std::queue<int> myQueue; 
  // Deklarasi antrian dengan tipe data integer

  // Menambahkan elemen ke antrian
  myQueue.push(10);
  myQueue.push(20);
  myQueue.push(30);

  // Menampilkan elemen antrian (dari depan ke belakang)
  std::cout << "Isi antrian: ";
  while (!myQueue.empty()) {
    std::cout << myQueue.front() << " ";
    myQueue.pop();
  }
  std::cout << std::endl;

  return 0;
}

