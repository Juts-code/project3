#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no of elements: ";
    cin>>n;
   int arr[n];
   cout << "Enter elements: ";
   for(int i = 0; i <n; ++i)
      cin>>arr[i];

   int *ptr = &arr[0];
   cout<<"The values in the array are: ";
   for(int i=0;i<n;i++){
      cout<< *ptr <<" ";
      ptr++;
   }

   return 0;
}
