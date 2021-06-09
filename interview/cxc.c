#include <stdio.h>
#include <stdlib.h>
#define sum(a, b) #a "+"#b "=%d"

int main(){
printf("\n%d\n", printf(sum(6,9), 6+9));
}

