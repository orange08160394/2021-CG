#include <stdlib.h>
int main(int argc, char *argv[])
{
    printf("�{�b�� argc�O:%d\n",argc);
    for(int i=0;i<argc;i++){
        printf("argc�O:[%d]�O:%s\n",i,argv[i]);
    }
}
