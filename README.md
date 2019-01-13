# Systemcall_Test
1)Write briefly about your installation choices and experience in your report.
Firstly, I downloaded and installed VMWare Workstation application from its
official website. Then, I made a research and found an available OVA file for
linux operating system in a Bilkent CS342 course page. In VMWare, I imported 
the file from its directory and loaded it to the application. When it was ready as
a miniature desktop page located in VMWare, I started with observing ubuntu
linux system. There were some interesting features such as Firefox, Office and
even Amazon. Then, I suprisingly found out that Alt + Tab shortcut was also
working for Ubuntu to switch between in-Ubuntu applications quickly. I opened
terminal. Then, I started with checking help section and observe available
command list. I checked out command I could use for course works. As the
next, I applied requests in the following questions below.
Linux commands:
pwd = path windows
ls = list subdirectory
cd = change directory
--help = help section
cp = copy files
mkdir = make directory
rmdir = remove directory
? = help section
exit = terminate session
debug = change debugging mode
ping = show ping status
2) Write down the location (directory) of Linux kernel executable
/lib/modules/$(uname -r)/build
Write the version number in your report.
4.10.0-28-generic
3) Subdirectories:
arch, Documentation, include, Kconfig, mm, scripts, tools, zfs, block,
drivers, init, kernel, Module.symvers, security, ubuntu, certs, firmware, pic, lib,
net, sound, usr, crypto, fs, Kbuild, Makefike, samples, spl, virt
4) strace cp:
execve("/bin/ls", ["ls"], [/* 70 vars */]) = 0
output:
brk(NULL) = 0x1859000
access("/etc/ld.so.nohwcap", F_OK) = -1 ENOENT (No such file or directory)
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS,
-1, 0) = 0x7f18d3425000
access("/etc/ld.so.preload", R_OK) = -1 ENOENT (No such file or directory)
open("/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=87909, ...}) = 0
mmap(NULL, 87909, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f18d340f000
close(3) = 0
access("/etc/ld.so.nohwcap", F_OK) = -1 ENOENT (No such file or directory)
open("/lib/x86_64-linux-gnu/libselinux.so.1", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\260Z\0\0\0\0\0\0"...,
832) = 832
fstat(3, {st_mode=S_IFREG|0644, st_size=130224, ...}) = 0
mmap(NULL, 2234080, PROT_READ|PROT_EXEC, MAP_PRIVATE|
MAP_DENYWRITE, 3, 0) = 0x7f18d2fe0000
mprotect(0x7f18d2fff000, 2093056, PROT_NONE) = 0
mmap(0x7f18d31fe000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|
MAP_FIXED|MAP_DENYWRITE, 3, 0x1e000) = 0x7f18d31fe000
mmap(0x7f18d3200000, 5856, PROT_READ|PROT_WRITE, MAP_PRIVATE|
MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f18d3200000
close(3) = 0
access("/etc/ld.so.nohwcap", F_OK) = -1 ENOENT (No such file or directory)
open("/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0P\t\2\0\0\0\0\0"..., 832)
= 832
fstat(3, {st_mode=S_IFREG|0755, st_size=1868984, ...}) = 0
mmap(NULL, 3971488, PROT_READ|PROT_EXEC, MAP_PRIVATE|
MAP_DENYWRITE, 3, 0) = 0x7f18d2c16000
mprotect(0x7f18d2dd6000, 2097152, PROT_NONE) = 0
mmap(0x7f18d2fd6000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|
MAP_FIXED|MAP_DENYWRITE, 3, 0x1c0000) = 0x7f18d2fd6000
mmap(0x7f18d2fdc000, 14752, PROT_READ|PROT_WRITE, MAP_PRIVATE|
MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f18d2fdc000
close(3) = 0
access("/etc/ld.so.nohwcap", F_OK) = -1 ENOENT (No such file or directory)
open("/lib/x86_64-linux-gnu/libpcre.so.3", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0000\25\0\0\0\0\0\0"...,
832) = 832
fstat(3, {st_mode=S_IFREG|0644, st_size=456632, ...}) = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS,
-1, 0) = 0x7f18d340e000
mmap(NULL, 2552072, PROT_READ|PROT_EXEC, MAP_PRIVATE|
MAP_DENYWRITE, 3, 0) = 0x7f18d29a6000
mprotect(0x7f18d2a14000, 2097152, PROT_NONE) = 0
mmap(0x7f18d2c14000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|
MAP_FIXED|MAP_DENYWRITE, 3, 0x6e000) = 0x7f18d2c14000
close(3) = 0
access("/etc/ld.so.nohwcap", F_OK) = -1 ENOENT (No such file or directory)
open("/lib/x86_64-linux-gnu/libdl.so.2", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\240\r\0\0\0\0\0\0"...,
832) = 832
fstat(3, {st_mode=S_IFREG|0644, st_size=14608, ...}) = 0
mmap(NULL, 2109680, PROT_READ|PROT_EXEC, MAP_PRIVATE|
MAP_DENYWRITE, 3, 0) = 0x7f18d27a2000
mprotect(0x7f18d27a5000, 2093056, PROT_NONE) = 0
mmap(0x7f18d29a4000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|
MAP_FIXED|MAP_DENYWRITE, 3, 0x2000) = 0x7f18d29a4000
close(3) = 0
access("/etc/ld.so.nohwcap", F_OK) = -1 ENOENT (No such file or directory)
open("/lib/x86_64-linux-gnu/libpthread.so.0", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\260`\0\0\0\0\0\0"...,
832) = 832
fstat(3, {st_mode=S_IFREG|0755, st_size=138696, ...}) = 0
mmap(NULL, 2212904, PROT_READ|PROT_EXEC, MAP_PRIVATE|
MAP_DENYWRITE, 3, 0) = 0x7f18d2585000
mprotect(0x7f18d259d000, 2093056, PROT_NONE) = 0
mmap(0x7f18d279c000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|
MAP_FIXED|MAP_DENYWRITE, 3, 0x17000) = 0x7f18d279c000
mmap(0x7f18d279e000, 13352, PROT_READ|PROT_WRITE, MAP_PRIVATE|
MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f18d279e000
close(3) = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS,
-1, 0) = 0x7f18d340d000
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS,
-1, 0) = 0x7f18d340b000
arch_prctl(ARCH_SET_FS, 0x7f18d340b800) = 0
mprotect(0x7f18d2fd6000, 16384, PROT_READ) = 0
mprotect(0x7f18d279c000, 4096, PROT_READ) = 0
mprotect(0x7f18d29a4000, 4096, PROT_READ) = 0
mprotect(0x7f18d2c14000, 4096, PROT_READ) = 0
mprotect(0x7f18d31fe000, 4096, PROT_READ) = 0
mprotect(0x61d000, 4096, PROT_READ) = 0
mprotect(0x7f18d3427000, 4096, PROT_READ) = 0
munmap(0x7f18d340f000, 87909) = 0
set_tid_address(0x7f18d340bad0) = 4749
set_robust_list(0x7f18d340bae0, 24) = 0
rt_sigaction(SIGRTMIN, {0x7f18d258ab50, [], SA_RESTORER|SA_SIGINFO,
0x7f18d2596390}, NULL, 8) = 0
rt_sigaction(SIGRT_1, {0x7f18d258abe0, [], SA_RESTORER|SA_RESTART|
SA_SIGINFO, 0x7f18d2596390}, NULL, 8) = 0
rt_sigprocmask(SIG_UNBLOCK, [RTMIN RT_1], NULL, 8) = 0
getrlimit(RLIMIT_STACK, {rlim_cur=8192*1024, rlim_max=RLIM64_INFINITY}) =
0s
tatfs("/sys/fs/selinux", 0x7ffc528ee260) = -1 ENOENT (No such file or
directory)
statfs("/selinux", 0x7ffc528ee260) = -1 ENOENT (No such file or directory)
brk(NULL) = 0x1859000
brk(0x187a000) = 0x187a000
open("/proc/filesystems", O_RDONLY) = 3
fstat(3, {st_mode=S_IFREG|0444, st_size=0, ...}) = 0
read(3, "nodev\tsysfs\nnodev\trootfs\nnodev\tr"..., 1024) = 367
read(3, "", 1024) = 0
close(3) = 0
open("/usr/lib/locale/locale-archive", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=11654992, ...}) = 0
mmap(NULL, 11654992, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f18d1a67000
close(3) = 0
ioctl(1, TCGETS, {B38400 opost isig icanon echo ...}) = 0
ioctl(1, TIOCGWINSZ, {ws_row=24, ws_col=80, ws_xpixel=0, ws_ypixel=0}) =
0 open(".", O_RDONLY|O_NONBLOCK|O_DIRECTORY|O_CLOEXEC) =
3
fstat(3, {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
getdents(3, /* 27 entries */, 32768) = 904
getdents(3, /* 0 entries */, 32768) = 0
close(3) = 0
fstat(1, {st_mode=S_IFCHR|0620, st_rdev=makedev(136, 4), ...}) = 0
write(1, "Desktop Downloads\t Music "..., 52Desktop Downloads Music
Public Videos
) = 52
write(1, "Documents examples.desktop Pic"..., 49Documents
examples.desktop Pictures Templates
) = 49
close(1) = 0
close(2) = 0
exit_group(0) = ?
+++ exited with 0 +++
5) Write a simple C program to compare the cost (in terms of elapsed
time) of different system calls with different parameter values
available as “cost.c” in the folder
Source code:
//imports
#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
//WARNING: "./cost" to run make file
//get the actual time elapse in microseconds
long normalize(struct timeval time)
{return((time.tv_sec*1000000+time.tv_usec));}
//main function
void main(){
//constants and initial variables
long count=10000;
int int_test=0,value;
ssize_t read_test;
char data[1000];
struct timeval now, then;
//print predefined iteration count
printf("\nRequested amount= %li",count);
printf(" iterations\n");
//GETPID10000//
int checkpoint=gettimeofday(&now,NULL);
//operation loop
for (int i=0;i<count; i++){int_test=getpid();}
//get time variable
checkpoint=gettimeofday(&then,NULL);
//calculate time elapsed
float timecost = (normalize(then) - normalize(now))/(count*1.0);
//print results
printf("Time elapsed for getpid()= %f",timecost);
printf(" μs\n");
//print predefined iteration count
printf("\nRequested amount= %li",count+500);
printf(" iterations\n");
//GETPID10500//
checkpoint=gettimeofday(&now,NULL);
//operation loop
for (int i=0;i<(count+500); i++){int_test=getpid();}
//get time variable
checkpoint=gettimeofday(&then,NULL);
//calculate time elapsed
timecost = (normalize(then) - normalize(now))/(count*1.0);
//print results
printf("Time elapsed for getpid()= %f",timecost);
printf(" μs\n");
//print predefined iteration count
printf("\nRequested amount= %li",count);
printf(" iterations\n");
//READ10000//
checkpoint=gettimeofday(&now,NULL);
//operation loop
for (int i=0;i<count; i++){read(value,data,1000);}
//get time variable
checkpoint=gettimeofday(&then,NULL);
//calculate time elapsed
timecost = (normalize(then) - normalize(now))/(count*1.0);
//print results
printf("Time elapsed for read()= %f",timecost);
printf(" μs\n");
//print predefined iteration count
printf("\nRequested amount= %li",count+500);
printf(" iterations\n");
//READ10500//
checkpoint=gettimeofday(&now,NULL);
//operation loop
for (int i=0;i<(count+500); i++){read(value,data,1000);}
//get time variable
checkpoint=gettimeofday(&then,NULL);
//calculate time elapsed
timecost = (normalize(then) - normalize(now))/(count*1.0);
//print results
printf("Time elapsed for read()= %f",timecost);
printf(" μs\n\n");
}
Do timing experiments and report results
Measure mean and standard deviation of time spent to run a system
routine.
For 10000 iteration getpid() system call routine, these values are obtained from
10 observations.
0.003700, 0.010700, 0.004000, 0.012000, 0.008900, 0.012200, 0.010700,
0.008800, 0.010800, 0.010700 in microseconds.
For 10000 iteration read() system call routine, these values are obtained from
10 observations.
0.057700, 0.246600, 0.062400, 0.844000, 0.194700, 0.199600, 0.293100,
0.143100, 0.175800, 0.166400 in microseconds
Mean of getpid(): 0.04066 microseconds
Mean of read(): 0.23834 microseconds
Standard deviation for getpid(): 0.052422
Standard deviation for read(): 0.224855
