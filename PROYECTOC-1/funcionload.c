enum boolean funcionload(struct user usuario){//recibe como parametro un dato de tipo estructura
	FILE *inises;
	inises=fopen("usuario.txt","r");
  if(inises!=NULL){
		char linea[81];
		char us[50];
		char psw[30];
		printf("Estos son nuestros registros:\n");
    while(feof(inises)==0){
    	fscanf(inises,"%s",us);
    	fscanf(inises,"%s",psw);
    	printf("%s-->%s\n",us,psw);
    	if(strcmp(usuario.usu,us)==0 && strcmp(usuario.contr,psw)==0){//compara lo ingresado con lo que hay en el archivo
            return true;
    	}
	}
	  fclose(inises);
	  return false;
    }
    return false;
}
