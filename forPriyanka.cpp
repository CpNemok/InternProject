#include <iostream>
#include <string>
using namespace::std

int main(){

 String s = "1259205810041023"; //random string
 int len = 16; //set to length of string s
 char numtoChar[] = {'0','1','2','3','4','5','6','7','8','9'}; //char array holding all digits
 int frequency[10] = {0}; //int array, initialized to frequencies of 0
 for(int i = 0; i < len; i ++){
  for(int j = 0; j < 10; j ++){
   if(s[i] == numtoChar[j]){
    frequency[j]++;
    break;
   }
  }
 }
 
 cout << "The frequency of each digit, 0 - 10, is: " << endl;
 for(int i = 0; i < 10; i ++){
  cout << frequency[i]
       << endl;
 } 

 return 0;

}  
