enum boolean clibro(int nume){
	enum boolean res=buscar(nume);
	if(res==false){
		printf("\n-/-/-/Ese libro no esta en tu biblioteca-/-/-/-/\n");
    	return false;
    }else{
    	cola *nue=(cola*)malloc(sizeof(cola));
    	if(nue!=NULL){
		if(uno==NULL){
			(*nue).elmdat=nume;
 			(*nue).sigg=uno;
 			uno=nue;  //uno=prim       dos=ult
			uno->sigg=NULL;
			dos=nue;
			return true;
		}else{
			dos->sigg=nue;
			(*nue).elmdat=nume;
 			(*nue).sigg=NULL;
			dos=nue;
			return true;
		}
 	    }else{
 	    printf("No hay memoria suficuiente");
        return false;
        }
 }
}//Por Alcántara Correa Monserrat
