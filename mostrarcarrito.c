
void mostrarcarrito(){
	long g;
	int h=0;
	int l=1;
	
	do{
	g=car[h][0];
	printf("\n%i ",l);
	printf("%s",produ[g]);
    printf("\n%ld",car[h][1]);
	
    h=h+1;
    l=l+1;
	}
    while(car[h][1]!=0);//Aquí se indica que si
    printf("\nTotal de compra: %ld",precio);
    Menu();
}//Por Alcántara Correa Monserrat
