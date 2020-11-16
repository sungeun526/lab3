// filename: six.c
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    char *arg[argc];
    printf("Running %s with execvp\n", argv[1]);
    
    for (i=0; i<(argc-1); i++) {
       arg[i]= argv[i+1];
    }
    
    arg[i] = (char *)0;
   
    execvp(argv[1], arg);
    printf("execvp failed to run %s\n", argv[1]);
    exit(0);
}

