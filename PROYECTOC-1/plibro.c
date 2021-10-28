enum boolean plibro(int num){
	enum boolean res=buscardos(num);
	if(res==false){
	printf("\n-/-/-/ID incorrecto o no has leido este libro-/-/-/-/\n");
	return false;
	}else{
	pila *neu=(pila*)malloc(sizeof(pila));
	if(neu!=NULL){
		(*neu).element=num;
		(*neu).nex=pr;
		pr=neu;
		return true;
	}else{
		printf("No hay memoria suficuiente");
		return false;
	}
 }
}//Por Alcántara Correa Monserrat
