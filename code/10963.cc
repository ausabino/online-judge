#include <stdlib.h>
#include <iostream>

using namespace std;

int main ()
{
  short num_cases = 0;
  cin >> num_cases;

  for (int sample = 0; sample < num_cases; ++sample)
    {
      short columns = 0;
      cin >> columns;
      short north_gap = 0;
      short south_gap = 0;
      short abs_diff  = 0;
      cin >> north_gap;
      cin >> south_gap;
      abs_diff  = abs (north_gap - south_gap);
      bool gap = false;

      for (int column = 1; column < columns; ++column)
        {
          cin >> north_gap;
          cin >> south_gap;
          gap = (abs (north_gap - south_gap) != abs_diff) ? true : gap;
        }

      if (!gap)
        cout << "yes\n";
      else
        cout << "no\n";
      if (sample < num_cases - 1) cout << endl;
    }
}

// INPUT
// 3

// 5
// 2 1
// 0 -1
// 1 0
// 1 0
// 2 1

// 3
// 2 1
// 0 -1
// 2 0

// 4
// 1 0
// -6 -10
// 0 -1
// 2 1

// OUTPUT
// yes

// no

// no
