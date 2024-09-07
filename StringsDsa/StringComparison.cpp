#include <iostream> 

using namespace std; 

  

int main() { 

    char string1[] = "man"; 

    char string2[] = "mantle"; 

  

    int i = 0; 

    for (i;string1[i] != '\0' && string2[i] != '\0';i++) { 

        if (string1[i] != string2[i]) { 

            if (string1[i] < string2[i]) { 

  

                cout << "The string 1 comes earlier in the dictionary." << endl; 

            }  

            else { 

                cout << "The string 2 comes earlier in the dictionary." << endl; 

            } 

            break; 

        } 

    } 

  

    if (string1[i] == '\0' && string2[i] == '\0') { 

  

        cout << "Both strings are equal." << endl; 

    }  

    else if (string1[i] == '\0') { 

  

        cout << "The string 1 comes earlier in the dictionary." << endl; 

    }  

    else { 

  

        cout << "The string 2 comes earlier in the dictionary." << endl; 

    } 

  

    return 0; 

} 