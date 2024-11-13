#include <stdio.h>

int main()
{
    
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(short));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(long));

    //char 可以表示 -128到127
    char a = -123;
    printf("a = %d\n",a);

    char b  = 126;
    printf("b = %d\n",b);

    char c = 129;
    printf("c = %d\n",c);
    //unsigned char 可以表示 0到255
    unsigned char d = 129;

    printf("d = %d\n",d);

    //short 可以表示 -32,768到32,767
    short e = 1280;
    printf("e = %d\n",e);
    
    return 0;
}