enum boolean buscardos(int num){
FILE *leer;
leer=fopen("leer.txt","a+t");
 if(leer!=NULL){
        while(feof(leer)==0){
        fscanf(leer,"%d\n",&id);
        if(id==num){
            return true;
        }
     }
     return false;
   }
}
