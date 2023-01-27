#include <stdio.h> // for printf
#include <stdlib.h> // for malloc
#include <string.h> // for strcpy
#include <unistd.h> // for access
 
int main(int argc, char **argv) {
    int result;
    //allocate memory of 512 bytes
    char *filename = (char *)malloc(512);
    if (argc < 2) {
        strcpy(filename, "/usr/bin/adb");
    } else {
        strcpy(filename, argv[1]);
    }
    result = access (filename, R_OK); // R_OK for readable
    if ( result == 0 ) {
        printf("%s is readable\n",filename);    
    } else {
        printf("%s is not readable\n",filename);    
    }
 
    result = access (filename, W_OK); // W_OK for writeable
    if ( result == 0 ) {
        printf("%s is Writeable\n",filename);   
    } else {
        printf("%s is not Writeable\n",filename);   
    }
 
    result = access (filename, X_OK); // X_OK for executable
    if ( result == 0 ) {
        printf("%s is executable\n",filename);  
    } else {
        printf("%s is not executable\n",filename);  
    }
    //free allocated memory
    free(filename);
    return 0;
}
