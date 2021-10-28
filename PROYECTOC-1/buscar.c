enum boolean buscar(int nume){
FILE *ide;
ide=fopen("Ide.txt","a+t");
 if(ide!=NULL){
        while(feof(ide)==0){
        fscanf(ide,"%d\n",&id);
        if(id==nume){
            return true;
        }
     }
     return false;
   }
}
