void mostrarl(){
    int i=0,e=0;
FILE *libro;
libro=fopen("libros.txt","r");
FILE *ide;
ide=fopen("Ide.txt","r");
        printf("\n\nEstos son tus libros\n");
    if(libro!=NULL){
        char delim[]="_";
        while(feof(libro)==0){
            fscanf(libro,"%s\n",&book);
            printf("Libro:%i %s\n",i+1,book);
            i++;
        }
    }
    printf("\n");
    if(ide!=NULL){
        while(feof(ide)==0){
        fscanf(ide,"%d\n",&id);
        printf("ID del disco:%i es->%d\n",e+1,id);
        e++;
     }
   }
    fclose(libro);
    fclose(ide);
}
