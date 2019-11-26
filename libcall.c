#include<stdio.h>
#include<stdlib.h>
int main(int args ,char const *argv[]){
    int fd;
    fd=fopen("desd.txt","r+");
    if(fd==NULL){
        perror("error opening file");
        exit(1);
    }
    fwrite("hello",6,1,fd);
    return 0;

}