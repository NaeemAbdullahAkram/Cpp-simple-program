#include <iostream>

using namespace std;

int main()
{
  string *str_arr = new string [2];

  str_arr[0][0] = 'a';
  str_arr[0][1] = 'a';
  str_arr[0][2] = 'a';

  str_arr[1][0] = 'b';
  str_arr[1][1] = 'b';
  str_arr[1][2] = 'b';

  for(int i = 0; i<4; i++)
  {
    cout << str_arr[0][i] << endl;
  }

  cin.get();
  return 0;
}