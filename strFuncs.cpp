#include "strFuncs.h"
#include <cctype>

using namespace std;


/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *
 * Palindromes are NOT case-sensitive - "RaCecaR" is a valid palindrome
 *
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
    int j = s1.length();
    for(int i = 0; i < j/2; i++){
            if(s1[i]!=s1[j-1-i]){
                return false;
            }
        }
    return true;
}
