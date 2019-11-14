#include <stdio.h>
#include <time.h>
#include <sys/stat.h>

int main() {
    struct stat s;
    struct stat *p = &s;
    stat("main.c", p);
    printf("[%s]: ", "main.c");
    printf("%ld bytes | ", p->st_size);
    printf("Mode %o | ", p->st_mode % 512);
    printf("%s", ctime(&p->st_atime));
    return 0;
}
