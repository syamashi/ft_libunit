#include "strlen_test.h"

int main()
{
	setbuf(stdout, NULL); //printf always flush
	int err;

	err = 0;
	err |= strlen_launcher();
	return (err);
}
