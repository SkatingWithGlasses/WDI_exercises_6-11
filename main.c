#include <stdio.h>
#include <stdlib.h>

void ascii(){
    for (int x=65, y=97; x<91 ; x++, y++){
        printf("%d -> %c   %d -> %c\n",x,x,y,y);
    }
}

int main()
{
    ascii();
    return 0;
}
