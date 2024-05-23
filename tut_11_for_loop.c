#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,j;
    for (i = 0, j=0; i < 6, j < 6; i++, j++) // for mulitple variable in one loop also same for single var.
    {
        printf("%d %d\n",i,j);

    }
    
    return 0;
}
