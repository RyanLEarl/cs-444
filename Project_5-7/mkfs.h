#ifndef MKFS_H
#define MKFS_H

#define NUM_OF_BLOCKS 1024
#define DIRECTORY_FLAG 2
#define DIRECTORY_ENTRY_SIZE 32
#define DIRECTORY_SIZE 64
#define FILE_OFFSET 2

void mkfs(void);

#endif