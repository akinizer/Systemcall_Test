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
