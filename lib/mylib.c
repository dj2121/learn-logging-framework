#include <stdio.h>
#include "mylib.h"

struct client_info
{
    /* data */
    char name[10];
    int id;
    struct client_info *next;

};

struct client_info *clients = NULL;

int register_client(char *name, int *client_id) {
    int ret = STATUS_FAIL;
    return ret;

}
