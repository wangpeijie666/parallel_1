#include <iostream>
#include <math.h>
#include<stdio.h>
#include<sys/time.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int main()
{
	const int len=pow(2.0,15);
	int *a=new int[len];
	int sum=0;
	srand((unsigned)time(NULL));
	for(int i=0;i<len;i++)
		a[i]=rand()%100;
	struct  timeval start;
	struct  timeval end;
	unsigned  long diff;
	gettimeofday(&start,NULL);
	for(int i=0;i<len;i++)
		sum+=a[i];
	gettimeofday(&end,NULL);
	diff = 1000000 * (end.tv_sec-start.tv_sec)+ end.tv_usec-start.tv_usec;
	cout<<"thedifference is"<< diff<<" ";
	cout<<sum;
	return 0;

}
