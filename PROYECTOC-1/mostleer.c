void mostleer(){
int i=0;
FILE *leer;
leer=fopen("leer.txt","r");
 printf("\n\nEstos son los ID de tus libros\n");
    if(leer!=NULL){
        while(feof(leer)==0){
            fscanf(leer,"%i\n",&nume);
            printf("Libro%i: %i\n",i+1,nume);
            i++;
        }
    }
    fclose(leer);
}
