#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    int tmp[2];
    if (argc >= 3)
    {
        tmp[0] = atoi(argv[1]);
        tmp[1] = atoi(argv[2]);
        int sum = tmp[0] + tmp[1];
        printf("Sum is %d\n", sum);
    }
    else
    {
        printf("Sufficient args not provided\n");
    }
    exit(0);
}