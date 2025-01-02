#include <iostream>  

using namespace std; 

int main(){ 

char name[] = "hridyanshu"; 

int nameSize = 0; 

for(int i =0 ; name[i]!='\0'; i++){ 

nameSize++; 

if(name[i] >= 65 && name[i]<= 90  ){ // upper case ascii 

name[i] = name[i] + 32; 

} 

if(name[i] >= 97 && name[i]<= 122){ // lower case ascii  

name[i] = name[i] - 32; 

} 

} 

cout<<"Lower to upper  "<<name; 

} 