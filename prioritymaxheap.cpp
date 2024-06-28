 
#include <iostream>
#include <vector>


using namespace std;
 
void swap(int *a, int *b) {
  int temp = *b;
  *b = *a;
  *a = temp;

}

 
void heapify(vector<int> &hT, int i) {
  int size = hT.size();
  
  int largest = i;
  int l = 2 * i + 1;
  int r = 2 * i + 2;
  
  if (l < size && hT[l] > hT[largest])
    largest = l;


  if (r < size && hT[r] > hT[largest])
    largest = r;
    
     if (largest != i) {
    swap(&hT[i], &hT[largest]);
    heapify(hT, largest);
    
  }
}