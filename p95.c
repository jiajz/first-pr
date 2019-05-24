#include <stdio.h>

int main() 
{
    char *astring = "this is a string";
    size_t location = (size_t)astring;
    printf("%s\n", location);
    printf("location: %zu\n", location);
    printf("astring : %ld\n", astring);
}
