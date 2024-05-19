#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* next;
};

Node* head = NULL; // Deklarasi pointer head untuk awal linked list

void insertAtBeginning(int data) {
  Node* newNode = new Node; // Buat node baru
  newNode->data = data; // Isi data pada node baru
  newNode->next = head; // Hubungkan node baru ke head
  head = newNode; // Perbarui head ke node baru
}

void printLinkedList() {
  Node* temp = head; // Inisialisasi pointer temp ke head
  if (temp == NULL) {
    cout << "Linked list kosong!" << endl;
    return;
  }

  cout << "Isi linked list: ";
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  insertAtBeginning(10);
  insertAtBeginning(20);
  insertAtBeginning(30);

  printLinkedList();

  return 0;
}
