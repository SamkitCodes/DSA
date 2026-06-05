#include "RecursionBasics.h"

#include <iterator>



int RecursionBasics::calculateFactorial(int n) {
    int factorial = 0;
    if (n == 1) {
        return 1;
    }

    factorial = n * calculateFactorial(n-1);
    return factorial;
}

void  RecursionBasics::reverseArray(int* arr, int index, int length) {

    if (index > length/2) {
        return;
    }
    std::swap(arr[index], arr[(length-1-index)]);
    reverseArray(arr, index+1, length);



}

bool RecursionBasics::stringPalindromeCheck(std::string& word) {

    std::string filtered;

    for (char c: word){
        if(isalnum(c)){
            filtered += static_cast<char>(tolower(c));
        }
    }

    for (int i = 0, j = static_cast<int>(filtered.size()-1); i < j; i++ , j--){
        if(filtered[i] != filtered[j]){
            return false;
        }
    }

    return true;


}

