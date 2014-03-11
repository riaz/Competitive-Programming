#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main(){

	//Variables section
	time_t currTime = time(NULL);		
	char* c_time_string; //A character pointer

	//Checking if the currTime was obtained properly
	if(currTime == (time_t)-1){
		(void) fprintf(stderr,"Failure to compute the correct time.");
		return EXIT_FAILURE;
	}

	/* Converting the time to local time format*/
	c_time_string = ctime(&currTime);

	if(c_time_string == NULL)
	{
		(void) fprintf(stderr,"Failure to conver the current time");
		return EXIT_FAILURE;
	}else{	
		(void) printf("Current Time: %s\n",c_time_string);
		return EXIT_SUCCESS;
    }
	
	return 0;
}
