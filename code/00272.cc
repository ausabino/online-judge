#include <iostream>

using namespace std;

int main ()
{
  char letter;
  unsigned int count = 0;
  do
    {
      if ((letter = getchar ()) == EOF) break;

      if (letter == '"')
        {
          if ((count % 2) == 0)
            cout << "``";
          else
            cout << "''";
          ++count;
        }
      else
        cout << letter;
    }
  while (true);
  return 0;
}

// INPUT
// Is branched in ""my up strictly "remember. "
// Songs but chief has ham widow downs. Genius or so up vanity cannot.
// '''```Large do tried ``goi"'``''ng" about water defer by. "Silent" son man she wished mother.
// Distrusts allowance do knowledge eagerness assurance additions to.
// We """"diminution preference "thoroughly if. "Joy deal pain ';`392view" much her time. Led young gay would now state."
// Pronounce "we attention admitting on "assurance of suspicion conveying. That his west quit had met ""till"". Of advantage he
// attending "hous""ehold" at do perceived"." Middleton in objection "discovery" as agreeable. Edward thrown dining so he my around to.

// OUTPUT
// Is branched in ``''my up strictly ``remember. ''
// Songs but chief has ham widow downs. Genius or so up vanity cannot.
// '''```Large do tried ``goi``'``''ng'' about water defer by. ``Silent'' son man she wished mother.
// Distrusts allowance do knowledge eagerness assurance additions to.
// We ``''``''diminution preference ``thoroughly if. ''Joy deal pain ';`392view`` much her time. Led young gay would now state.''
// Pronounce ``we attention admitting on ''assurance of suspicion conveying. That his west quit had met ``''till``''. Of advantage he
// attending ``hous''``ehold'' at do perceived``.'' Middleton in objection ``discovery'' as agreeable. Edward thrown dining so he my around to.
