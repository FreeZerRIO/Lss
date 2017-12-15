//
//  main.c
//  Lss
//
//  Created by Алексей Баринов on 15.12.2017.
//  Copyright © 2017 Era Company. All rights reserved.
//

#include <stdio.h>
#include <dirent.h>
#include <string.h>

int main(int argc, char **argv)
{
    DIR *dfd;
    struct dirent *dp;
    char filename[225];
    
    if ( argc < 2 )
        strcpy(filename, ".");
    else
        strcpy(filename, argv[1]);
    
    printf("%s\n\n", filename);
    dfd=opendir(filename);
    
    while( (dp=readdir(dfd)) != NULL )
        printf("%s\n", dp->d_name);
    
    closedir(dfd);
    return 0;
}
