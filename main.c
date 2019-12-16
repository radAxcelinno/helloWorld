#include <stdio.h>
#include "add.h"
#include "multiply.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    printf("Hello, World!\n");
    
    int addResult = add(3, 4);
    printf("Sum = %d\n",addResult);
    
    int multiplyResult = multiply(2, 5);
    printf("Mult = %d\n",multiplyResult);

    return 0;
}
