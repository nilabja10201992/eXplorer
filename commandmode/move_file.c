/*
This file implements the move of file in block sizes of 4096 from source folder to destination destination folder
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "copy_block.h"
#include "move_file.h"

int move_file(char *path_of_file_name_1, char *path_of_file_name_2){
    copy_block(path_of_file_name_1,path_of_file_name_2);
    remove(path_of_file_name_1);
    return 0;
}