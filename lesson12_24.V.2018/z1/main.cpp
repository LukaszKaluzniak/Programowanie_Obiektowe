#include <iostream>
#include "array.h"

using namespace std;

int main(int argc, char *argv[])
{
  Array<int> arr(10);
  
  for(int i=0; i<10; i++)
    cout << arr[i] << endl;
  
  return 0;
}
