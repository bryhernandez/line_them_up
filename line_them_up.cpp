#include <iostream>
using namespace std;

string check_order(string a[], int size){
  string status = "NEITHER";
  int countA = 0;
  int countD = 0;
  for(int i = 0; i < size; i ++){
    for(int j = i; j < size; j++){
      if(a[i] > a[j]){
        status = "DECREASING";
        countD++;
      }
      else if(a[i] < a[j]){
        status = "INCREASING";
        countA++;
      }
    }
  }
  if(countA >= 1 && countD >= 1)
    return "NEITHER";

  return status;
}

int main() {
  int size;
  cin >> size;

  string peeps[size];

  for(int i = 0; i < size; i++)
    cin >> peeps[i];

  cout << check_order(peeps, size);
}
