#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    struct stat buf;
    
    // Kiểm tra và lấy thông tin tệp unix.txt
    if (stat("unix.txt", &buf) < 0) {
        perror("stat error");
        exit(1);
    }

    printf("Inode = %lu\n", (unsigned long)buf.st_ino);
    printf("Mode = %o\n", (unsigned int)buf.st_mode);
    printf("Nlink = %lu\n",(unsigned long)buf.st_nlink);
    printf("UID = %d\n", (int)buf.st_uid);
    printf("GID = %d\n", (int)buf.st_gid);
    printf("SIZE = %ld\n", (long)buf.st_size);
    printf("Atime = %ld\n", (long)buf.st_atime);
    printf("Mtime = %ld\n", (long)buf.st_mtime);
    printf("Ctime = %ld\n", (long)buf.st_ctime);
    printf("Blksize = %ld\n", (long)buf.st_blksize);
    printf("Blocks = %ld\n", (long)buf.st_blocks);

    return 0;
}