#include <stdio.h>
#include "msg.h"				/* msg.h generated by rpcgen */
 
int *
printmessage_1_svc(msg, req)
	char **msg;	
	struct svc_req *req;		/* details of call */
{
	static int result;			/* must be static! */
	// FILE *f;
 
	// f = fopen("/dev/console", "w");
	// if (f == (FILE *)NULL) {
	// 	result = 0;
	// 	return (&result);
	// }
	// fprintf(f, "%s\n", *msg);
	// fclose(f);
    printf("%s\n",*msg);
	result = 1;
	return (&result);
}