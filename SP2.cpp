#include <iostream>
using namespace std;
  
int shellSort(int arr[], int N)
{
for (int gap = N/2; gap > 0; gap /= 2) {
 for (int i = gap; i < N; i += 1) {
      
int temp = arr[i];
int j;
for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
arr[j] = arr[j - gap];
   
      arr[j] = temp;
   }
}
return 0;
}
  
int main()
{
int arr[] = {45,23,53,43,18};
   
int N = sizeof(arr)/sizeof(arr[0]);
  
 cout << "Array sebelum diurutkan: \n";
 for (int i=0; i<N; i++)
 cout << arr[i] << " ";
  
 shellSort(arr, N);
  
cout << "\nArray setelah diurutkan: \n";
for (int i=0; i<N; i++)
cout << arr[i] << " ";
 
 return 0;
}
