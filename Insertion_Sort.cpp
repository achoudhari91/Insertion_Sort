#include<iostream>
using namespace std;

int main()
{
  int i;
  int n = 6;
  int a[6] = {17, 3, 2, 1, 8, 9};
  
  cout<<"\n Array Elements Before Insertion Sort: ";
  for(i = 0; i < n; i++)
  {
    cout<<a[i]<<"\t";
  }
  
  for(i = 1; i <= n; i++)
  { 
    int temp = a[i]; 
    int j;
    
    for (j = i - 1; j >= 0 && a[j] > temp; j--)//For Shifting
    {
      a[j + 1] = a[j];
    }
    a[j + 1] = temp;
    
    cout << "\n Array Elements After Insertion Sort: ";
    for (int j = 0; j < n; j++)
    {
      cout << a[j] << " \t ";
    }
  }
  
  return 0; 
}

