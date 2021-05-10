#include "strlen_test.h"

int strlen_launcher(void)
{
    t_unit_test *testlist;
    ut_puts("STRLEN:");
    // list[0]=Basic test;
    ut_load_test(&testlist, "Basic test", &strlen_basic_test);
    // list[1]=NULL test;
    ut_load_test(&testlist, "NULL test", &strlen_null_test);
    //load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */
    // puts tests
    ut_run_test(&testlist);
    return(launch_tests(&testlist));
}
