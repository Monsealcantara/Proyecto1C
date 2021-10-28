void mostleidos(){
    int i=0;
FILE *leidos;
leidos=fopen("leidos.txt","r");
 printf("\n\nEstos son los ID de tus libros leidos\n");
    if(leidos!=NULL){
        while(feof(leidos)==0){
            fscanf(leidos,"%i\n",&num);
            printf("Libro%i: %i\n",i+1,num);
            i++;
        }
    }
    fclose(leidos);
}
