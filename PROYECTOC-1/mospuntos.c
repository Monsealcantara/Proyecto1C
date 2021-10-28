void mospuntos(){
FILE *pts;
pts=fopen("puntos.txt","r");
 printf("\n\nTotal de puntos:\n");
    if(pts!=NULL){
        while(feof(pts)==0){
            fscanf(pts,"%i\n",&y);
            printf("%ipts.\n",y);
        }
    }
    fclose(pts);
}
