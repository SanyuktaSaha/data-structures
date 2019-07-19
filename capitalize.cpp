
#include <iostream>
#include <cstring>

using namespace std;

string LetterCapitalize(string str) { 

 char ch;
 int i,l;
 l = str.length();
 // code goes here
  for(i=0;i<l;i++)
  {
      if(i==0)
      {
         str[i] = str[i] - 32;
      }
      if(str[i] ==' ')
      {
          str[i+1] = str[i+1] - 32;
      }
      else
      {
          continue;
      }
  }
  return str; 
            
}

int main() { 
  
  // keep this function call here
  cout << LetterCapitalize(gets(stdin));
  return 0;
    
}