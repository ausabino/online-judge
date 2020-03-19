#include <iostream>

using namespace std;

int binary_search (string arr[], string word, int first, int last)
{
  if (last >= first)
    {
      int mid = first + (last - first) / 2;
      if (arr[mid] == word)
        return mid;
      else if (arr[mid] > word)
        return binary_search (arr, word, first, mid - 1);
      else
        return binary_search (arr, word, mid + 1, last);
    }
  return -1;
}

int main ()
{
  string greetings[6] = {"BONJOUR", "CIAO", "HALLO",
                         "HELLO",   "HOLA", "ZDRAVSTVUJTE"};
  string countries[6] = {"FRENCH",  "ITALIAN", "GERMAN",
                         "ENGLISH", "SPANISH", "RUSSIAN"};

  string olar;
  int count = 1;
  do
    {
      cin >> olar;
      int index = binary_search (greetings, olar, 0, 5);
      if (index != -1)
        cout << "Case " << count << ": " << countries[index] << endl;
      else if (olar.compare ("#") != 0)
        cout << "Case " << count << ": "
             << "UNKNOWN" << endl;
      else
        break;
      ++count;
    }
  while (true);

  return 0;
}

// INPUT
// ZDRAVSTVUJTE
// HALLO
// UDEBUG
// HELLO
// HOLA
// CIAO
// BONJOUR
// HELLLO
// HOLAA
// BANGLADESH
// #

// OUTPUT
// Case 1: RUSSIAN
// Case 2: GERMAN
// Case 3: UNKNOWN
// Case 4: ENGLISH
// Case 5: SPANISH
// Case 6: ITALIAN
// Case 7: FRENCH
// Case 8: UNKNOWN
// Case 9: UNKNOWN
// Case 10: UNKNOWN
