/*
** EPITECH PROJECT, 2019
** Tests generic
** File description:
** This set of tests test the program function by function
*/

#include "n4s.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
int main_test(void);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(main_test, stop_loop, .init = redirect_all_std)
{
    int dest = 0;

    fprintf(cr_get_redirected_stdin(), "%s", "\n1:OK:No errors so far:600.0:675.0:700.0:750.0:800.0:850.0:975.0:1050.0:1125.0:1225.0:1375.0:2500.0:2500.0:2750.0:2750.0:2750.0:2750.0:2750.0:1500.0:1225.0:1050.0:975.0:850.0:750.0:700.0:625.0:575.0:525.0:500.0:475.0:437.5:425.0:Track Cleared: [0][145s 452749380ns]\n\n\n\n");
    dest = main_test();
    cr_assert_eq(dest, 0);
}

Test(get_dir, 1501, .init = redirect_all_std)
{
    char *str = "1:OK:No errors so far:600.0:675.0:700.0:750.0:800.0:850.0:975.0:1050.0:1125.0:1225.0:1375.0:2500.0:2500.0:2750.0:2750.0:2750.0:2750.0:2750.0:1500.0:1225.0:1050.0:975.0:850.0:750.0:700.0:625.0:575.0:525.0:500.0:475.0:437.5:425.0:Track Cleared: [0][145s 452749380ns]";
    char **tab = my_str_to_wordarray(str, ':');
    int dest = 0;
    float mid = 2500.0;

    fprintf(cr_get_redirected_stdin(), "%s", "\n1:OK:No errors so far:600.0:675.0:700.0:750.0:800.0:850.0:975.0:1050.0:1125.0:1225.0:1375.0:2500.0:2500.0:2750.0:2750.0:2750.0:2750.0:2750.0:1500.0:1225.0:1050.0:975.0:850.0:750.0:700.0:625.0:575.0:525.0:500.0:475.0:437.5:425.0:Track Cleared: [0][145s 452749380ns]\n\n\n\n");
    dest = get_dir(tab, mid);
    cr_assert_eq(dest, 0);
}

Test(get_speed, 2500, .init = redirect_all_std)
{
    int dest = 0;
    float mid = 2500.0;

    fprintf(cr_get_redirected_stdin(), "%s", "\n1:OK:No errors so far:600.0:675.0:700.0:750.0:800.0:850.0:975.0:1050.0:1125.0:1225.0:1375.0:2500.0:2500.0:2750.0:2750.0:2750.0:2750.0:2750.0:1500.0:1225.0:1050.0:975.0:850.0:750.0:700.0:625.0:575.0:525.0:500.0:475.0:437.5:425.0:Track Cleared: [0][145s 452749380ns]\n\n\n\n");
    dest = get_speed(mid);
    cr_assert_eq(dest, 0);
}

Test(get_speed, 1800, .init = redirect_all_std)
{
    int dest = 0;
    float mid = 1800.0;

    fprintf(cr_get_redirected_stdin(), "%s", "\n1:OK:No errors so far:600.0:675.0:700.0:750.0:800.0:850.0:975.0:1050.0:1125.0:1225.0:1375.0:2500.0:2500.0:2750.0:2750.0:2750.0:2750.0:2750.0:1500.0:1225.0:1050.0:975.0:850.0:750.0:700.0:625.0:575.0:525.0:500.0:475.0:437.5:425.0:Track Cleared: [0][145s 452749380ns]\n\n\n\n");
    dest = get_speed(mid);
    cr_assert_eq(dest, 0);
}

Test(get_speed, 1300, .init = redirect_all_std)
{
    int dest = 0;
    float mid = 1300.0;

    fprintf(cr_get_redirected_stdin(), "%s", "\n1:OK:No errors so far:600.0:675.0:700.0:750.0:800.0:850.0:975.0:1050.0:1125.0:1225.0:1375.0:2500.0:2500.0:2750.0:2750.0:2750.0:2750.0:2750.0:1500.0:1225.0:1050.0:975.0:850.0:750.0:700.0:625.0:575.0:525.0:500.0:475.0:437.5:425.0:Track Cleared: [0][145s 452749380ns]\n\n\n\n");
    dest = get_speed(mid);
    cr_assert_eq(dest, 0);
}

Test(get_speed, 800, .init = redirect_all_std)
{
    int dest = 0;
    float mid = 800.0;

    fprintf(cr_get_redirected_stdin(), "%s", "\n1:OK:No errors so far:600.0:675.0:700.0:750.0:800.0:850.0:975.0:1050.0:1125.0:1225.0:1375.0:2500.0:2500.0:2750.0:2750.0:2750.0:2750.0:2750.0:1500.0:1225.0:1050.0:975.0:850.0:750.0:700.0:625.0:575.0:525.0:500.0:475.0:437.5:425.0:Track Cleared: [0][145s 452749380ns]\n\n\n\n");
    dest = get_speed(mid);
    cr_assert_eq(dest, 0);
}

Test(get_speed, 500, .init = redirect_all_std)
{
    int dest = 0;
    float mid = 500.0;

    fprintf(cr_get_redirected_stdin(), "%s", "\n1:OK:No errors so far:600.0:675.0:700.0:750.0:800.0:850.0:975.0:1050.0:1125.0:1225.0:1375.0:2500.0:2500.0:2750.0:2750.0:2750.0:2750.0:2750.0:1500.0:1225.0:1050.0:975.0:850.0:750.0:700.0:625.0:575.0:525.0:500.0:475.0:437.5:425.0:Track Cleared: [0][145s 452749380ns]\n\n\n\n");
    dest = get_speed(mid);
    cr_assert_eq(dest, 0);
}

Test(get_speed, 100, .init = redirect_all_std)
{
    int dest = 0;
    float mid = 100.0;

    fprintf(cr_get_redirected_stdin(), "%s", "\n1:OK:No errors so far:600.0:675.0:700.0:750.0:800.0:850.0:975.0:1050.0:1125.0:1225.0:1375.0:2500.0:2500.0:2750.0:2750.0:2750.0:2750.0:2750.0:1500.0:1225.0:1050.0:975.0:850.0:750.0:700.0:625.0:575.0:525.0:500.0:475.0:437.5:425.0:Track Cleared: [0][145s 452749380ns]\n\n\n\n");
    dest = get_speed(mid);
    cr_assert_eq(dest, 0);
}
