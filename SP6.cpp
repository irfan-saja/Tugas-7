#include<iostream>  
using namespace std;
int main ()
{
   int i, j,temp;
   int a[5] = {10,2,0,43,12};
   cout <<"Array :  ...\n";
   for(i = 0; i<5; i++) {
   cout <<a[i]<<"\t";
}
cout<<endl;
for(i = 0; i<5; i++) {
   for(j = i+1; j<5; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
}
cout <<"Setelah diurut...\n";
for(i = 5; i > 0; i--) {
   cout <<a[i]<<"\t";
   }
return 0;
}
