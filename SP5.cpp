#include<iostream>
using namespace std;
 
int selectionSort (int[],int); //fungsi selection sort mencari bilangan terkecil
int main ()
{
   int myarray[5] = {12,45,8,15,33};
   int pos,temp;
   cout<<"\n Masukkan elemnt yang akan diurut\n";
   for(int i=0;i<5;i++)
   {
      cout<<myarray[i]<<"\t";
   }
   for(int i=0;i<5;i++)
   {
      pos = selectionSort (myarray,i);
      temp = myarray[i];
      myarray[i]=myarray[pos];
      myarray[pos] = temp;
   }
   cout<<"\n Setelah di urut\n";
   for(int i=0;i<5;i++)
   {
      cout<<myarray[i]<<"\t";
   }
return 0;
}
int selectionSort(int myarray[],int i)
{
   int ele_small,position,j;
   ele_small = myarray[i];
   position = i;
   for(j=i+1;j<5;j++)
   {
      if(myarray[j]<ele_small)
      {
      ele_small = myarray[j];
      position=j;
      }
   }
   return position;
}
