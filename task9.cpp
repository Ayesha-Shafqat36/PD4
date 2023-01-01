#include <iostream>
using namespace std;
void TrueFalse(string word);
main()
{
  string word;
  cout << "Enter Word:";
  cin>> word;
  TrueFalse(word);

}
void TrueFalse(string word)
{
 if (word == "true")
 {
  cout << "False" <<endl;
 }
 if (word == "false")
  {
   cout << "True" << endl;
  }
}