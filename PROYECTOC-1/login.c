enum boolean login(){
    user tmp;
int cont=0;
	do{
       printf("Ingresa nombre de usuario\n");
       scanf("%s",tmp.usu);
       printf("Ingresa contrase�a\n");
       scanf("%s",tmp.contr);
       printf("Usuario:%s\ncontrase�a: %s\n",tmp.usu,tmp.contr);
        enum boolean res=funcionload(tmp);
		     if(res){
		    return true;//retun, regresa a a la funcion que lo mando llamar, en este caso al main
	         }
            printf("\nEl nombre de usuario o contrase�a son incorrectos, intentalo de nuevo.\n");
		     cont++;
    }while(cont<3);
    return false;
}
