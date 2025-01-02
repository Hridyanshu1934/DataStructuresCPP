#include <iostream>  

using namespace std; 

int main(){ 

char name[] = "hridyanshu"; 

int nameSize = 0; 

int vowelsInName = 0; 

int consonantsInName = 0; 

for(int i =0 ; name[i]!='\0'; i++){ 

nameSize++; 

if(name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U' 

||name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'  ) 

{  

vowelsInName++; 

} 

else if(name[i] >= 97 && name[i]<= 122 || name[i] >= 65 && name[i]<= 90){  

consonantsInName++; 

} 

} 

cout<<"The vowelsInName is "<<vowelsInName<<endl; 

cout<<"The consonantsInName is "<<consonantsInName<<endl; 

int spaceCounter = 0; 

for(int j =0 ; name[j]!='\0'; j++){ 

if(name[j] == ' '){ 

spaceCounter++; 

} 

} 

cout<<"The no of spaces are "<<spaceCounter; 

} 
