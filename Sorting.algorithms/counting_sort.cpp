#include <iostream>
#include <vector>
using namespace std;
void counting_sort(vector<int>& vec) {
  int n=vec.size();
  int max_number=vec[0];
  for(int i=1;i<n;i++){
    max_number=max(max_number,vec[i]);
  }
  int array[max_number+1];
  for(int i=0;i<max_number+1;i++){
    array[i]=0;
  }
  for(int i=0;i<n;i++){
    array[vec[i]]++;
  }
  for(int i=1;i<max_number+1;i++){
       array[i]+=array[i-1];    
  }
  int temp[n];
  for(int i=0;i<n;i++){
      temp[--array[vec[i]]]=vec[i]; 
  }
   for(int i=0;i<n;i++){
    vec[i]=temp[i];
   }
}
