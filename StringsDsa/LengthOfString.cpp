#include <iostream>  

using namespace std; 

int main(){ 

char name[] = "Hridyanshu"; 

int nameSize = 0; 

for(int i =0 ; name[i]!='\0'; i++){ 

nameSize++; 

} 

cout<<"The length of the string name is "<<nameSize; 

} 