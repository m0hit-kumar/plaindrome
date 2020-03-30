#include<iostream.h>
#include <stdlib.h> 
int main() 
{
	system (" cls"); 
	char string[80],c;
	cout<<"Enter a string(max. 79 characters)";
	cin.getline(string,80);

for(int len = 0; string[len] != '\0'; ++len);
 int i, j, flag = 1;
  for(i = 0, j = len -1;i<len/2; ++i, --j)
   { if (string[i] != string[j]) 
   { flag = 0; 
   break ;}
   }

if (flag)

cout << "It is palindrome \n";

else

cout << "It is not a palindrome \n";

return 0;
}
