#include <iostream>
using namespace std;
int main()
{
    int x;
   cin >> x;

   cin.ignore(); 

   char s[100];

   //fgets(s,100,stdin) -> use this to take string without space

   cin.getline(s,100); // use this to take space in string
   cout << x << endl << s ;
    return 0;
}