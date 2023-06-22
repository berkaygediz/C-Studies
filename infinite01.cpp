#include <stdio.h>

int main(void){
    baslangic:
    for(int i = 0; i < 2; i++)
    {	
	    printf("%d",i);
        if (i == 1)
        goto baslangic;
    }
}
