#include <iostream>
using namespace std;
void combinationUtil(int arr[], int n, int r, int index, int combo[], int i){
   if (index == r){
	   cout<<"\n"<<index<<i<<"\n\n";
      for (int j = 0; j < r; j++)
         cout << combo[j] << " ";
         cout<<"\n";
         return;
   }
   if (i >= n)
      return;
   combo[index] = arr[i];
   cout<<index<<i<<"\n";
   combinationUtil(arr, n, r, index + 1, combo, i + 1);
   combinationUtil(arr, n, r, index, combo, i+1);
}
int main(){
   int arr[] = {1, 2, 3, 4, 5};
   int r = 3;
   int n = 5;
   int combo[r];
   cout<<"The combination is : \n";
   combinationUtil(arr, n, r, 0, combo, 0);
   return 0;
}
