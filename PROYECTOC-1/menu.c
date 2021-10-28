void menu(){
int op,a=0,b=0;
    FILE *libro;
    FILE *ide;
    FILE *leer;
    FILE *pts;
    FILE *leidos;
	do{
	printf("\n»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»");
	printf("\n\n    Mi biblioteca digital\n\n");
	printf("»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»");
	mospuntos();
	printf("\n1:Agregar un libro a mi lista\n\n");
	printf("2:%cQuieres agregar el libro a leer? Elige esta opcion.\n\n",168);
	printf("3:%cYa leiste el libro? Obten tus puntos.\n\n");
	printf("4:Ver libros agregados.\n\n");
	printf("5:Ver los libros que pretendes leer.\n\n");
	printf("6:Ver los libros que ya leiste\n\n");
	printf("7:Salir\n\n");
	printf("\n»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»");
	printf("\n\nSelecciona una opcion->");
	scanf("%i",&op);
		switch(op){
			case 1:
                 libro=fopen("libros.txt","a+t");
                 ide=fopen("Ide.txt","a+t");
				printf("Ingresa el nombre del libro separandolo por guion bajo:\n");
                  scanf(" %[^\n]",&book);
                printf("Ingresa el ID del libro:\n");
                  scanf("%d",&id);
                agrelibro(book,id);
                 fprintf(libro,"%s\n",book);
                 fprintf(ide,"%i\n",id);
                 printf("Libro registrado exitosamente:\n");
                 fclose(libro);
                 fclose(ide);
                 mostrarl();
                break;
			case 2:
			    mostrarl();
			    leer=fopen("leer.txt","a+t");
                if(a<10){
                    printf("Ingresa el ID del libro:\n");
                     scanf("%d",&nume);
                    if(clibro(nume)){
                     fprintf(leer,"%i\n",nume);
                    printf("Libro guardado exitosamente:\n");
                    }
                    a=a+1;
                }else{
                    printf("Ya no puedes agregar otro libro");
                }
                fclose(leer);
                 break;
            case 3:
                mostleer();
                leidos=fopen("leidos.txt","a+t");
                pts=fopen("puntos.txt","w");
                if(b<10){
                    printf("Ingresa el ID del libro que ya haz leido:\n");
                    scanf("%d",&num);
                    if(plibro(num)){
                    fprintf(leidos,"%i\n",num);
                    y=y+10;//para sumar los puntos
                    printf("Ya tienes tus puntos");
                    }
                     fprintf(pts,"%i\n",y);
                 b=b+1;
                }else{
                    printf("ya no puedes agregar libro o no haz leido ese libro");
                }
                fclose(leidos);
                fclose(pts);
                 break;
            case 4:
                mostrarl();
                break;
            case 5:
                 mostleer();
                 break;
            case 6:
                mostleidos();
                break;
            case 7:
                printf("Vuelve pronto:)");
                free(prim);
				free(first);
				free(uno);
				free(pr);
                break;
			default:
			printf("/*/*/*/*/Selecciona la opcion correcta/*/*/*/*/");
		}
	}while(op!=7);
}
