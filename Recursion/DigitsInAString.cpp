#include<iostream>
using namespace std;
int digitsInString(char str[],int size,int i,int count){
    if(i==size){
        return count;
        }
    if(str[i] >= '0'&& str[i]<='9'){
            count++;
    }
    return digitsInString(str,size,i+1,count);
    
}
int main(){
    char str[] = "Hriday1934";
    int size = sizeof(str)/sizeof(str[0])-1;
    int i = 0, count = 0;
    int element = 4;
    cout<<digitsInString(str,size,i,count)<<endl;
}