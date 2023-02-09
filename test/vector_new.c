/*
 * E89 Pedagogical & Technical Lab
 * project:     test
 * created on:  2023-02-06 - 15:46 +0100
 * 1st author:  dylan.le - dylan.le
 * description: testnew
 */

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include "vector.h"

Test(new_vector, normal) {
    int el_size;
    int initial_capa;
    stu_vector_t *ve;
    int table[8] = {1, 3, 564, 88, 94, 4, 1, 8};

    el_size = sizeof(int);
    initial_capa = 8;
    ve = stu_vector_new(el_size, initial_capa);
    stu_memcpy(ve->array, table, el_size * initial_capa);
    cr_assert(eq(int[8], ve->array, table));
    free(ve);
}
