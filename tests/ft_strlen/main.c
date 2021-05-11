#include "strlen_test.h"

int main()
{
	setbuf(stdout, NULL); //printf always flush
	int err;

	err = 0;
	err |= strlen_launcher();
	ut_puts("fin\n");
	return (err);
}
