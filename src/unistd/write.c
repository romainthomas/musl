#include <unistd.h>
#include "syscall.h"
#include "libc.h"

ssize_t write(int fd, const void *buf, size_t count)
{
	return syscall_cp(SYS_write, fd, buf, count);
}

ssize_t __write(int fd, const void *buf, size_t count)
{
	return write(fd, buf, count);
}
