#include <stdio.h>
#include <stdlib.h>

    int i;
    char texto[100];
    void text();

int main()
{
    printf("Digite um texto:");
    scanf("%[^\n]", &texto);
    text();
    return 0;
}

void text(){
    for(i=0; texto[i]!='\0'; i++)
    {
        if(texto[i]>='A'&& texto[i]<='Z'){
         printf("%c",texto[i]);
        }
        else{continue;}
        }
}
