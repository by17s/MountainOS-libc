#ifndef MOS_H_
#define MOS_H_

typedef unsigned int fd_t;
typedef unsigned int pid_t;

typedef unsigned int size_t;
typedef unsigned int off_t;

void exit(int code) {
    asm volatile("int $0x80" : : "a"(1), "b"(code));
}

pid_t fork(void) {
    return 0;
}

size_t read(fd_t __fd, char *__buf, size_t __nbytes) {
    size_t ret;
    asm volatile("int $0x80" : "=a"(ret) : "a"(3), "b"(__fd), "c"(__buf), "d"(__nbytes));
    return ret;
}

size_t write(fd_t __fd, const char *__buf, size_t __n) {
    size_t ret;
    asm volatile("int $0x80" : "=a"(ret) : "a"(4), "b"(__fd), "c"(__buf), "d"(__n));
    return ret;
}

fd_t open(const char* __path, int __flags) {
    fd_t ret;
    asm volatile("int $0x80" : "=a"(ret) : "a"(5), "b"(__path), "c"(__flags));
    return ret;
}

int close(fd_t __fd) {
    fd_t ret;
    asm volatile("int $0x80" : "=a"(ret) : "a"(6), "b"(__fd));
    return ret;
}

off_t lseek(fd_t __fd, off_t __offset, int __whence) {
    fd_t ret;
    asm volatile("int $0x80" : "=a"(ret) : "a"(6), "b"(__fd), "c"(__offset), "d"(__whence));
    return ret;
}

off_t tell(int __fd) {
    return lseek(__fd, 0, 1);
}

pid_t getpid(void) {
    pid_t ret;
    asm volatile("int $0x80" : "=a"(ret) : "a"(20));
    return ret;
}

#endif MOS_H_