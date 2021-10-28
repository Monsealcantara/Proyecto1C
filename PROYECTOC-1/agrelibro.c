enum boolean agrelibro(char *book,int id){
FILE *libro;
libro=fopen("libros.txt","a+t");
 lista *nue=(lista*)malloc(sizeof(lista));
 lista *neu=(lista*)malloc(sizeof(lista));
	if(neu!=NULL){
        if(first==NULL){
 			(*neu).name=book;
 			(*neu).next=first;
			first=neu;
			first->next=NULL;
			last=neu;
			return true;
        }else{
           last->next=nue;
            (*neu).name=book;
 			(*neu).next=NULL;
			last=neu;
			return true;
        }
	}else{
	    printf("No hay memoria suficiente");
	    return false;
	}
    if(nue!=NULL){
		if(prim==NULL){
			(*nue).elem=id;
 			(*nue).sig=prim;
 			prim=nue;
			prim->sig=NULL;
			ult=nue;
			return true;
		}else{
			ult->sig=nue;
			(*nue).elem=id;
 			(*nue).sig=NULL;
			ult=nue;
			return true;
		}
 	    }else{
 	    printf("No hay memoria suficuiente");
        return false;
        }
        fclose(libro);
}//Por Alcántara Correa Monserrat
