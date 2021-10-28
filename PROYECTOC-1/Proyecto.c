#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"globales.c"
#include"buscar.c"
#include"buscardos.c"
#include"plibro.c"
#include"clibro.c"
#include"agrelibro.c"
#include"mostleidos.c"
#include"mostleer.c"
#include"mostrarl.c"
#include"mospuntos.c"
#include"menu.c"
#include"funcionload.c"
#include"login.c"
int main(){
    enum boolean res=login();
    if(res){
        printf("Inicia Menu:\n");
        menu();
    }else{
        printf("Has superado el numero maximo de intentos\n");
    }
	return 7;
}//Por Alcántara Correa Monserrat
