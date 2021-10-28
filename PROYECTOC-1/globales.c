typedef struct user{
	char usu[30];
	char contr[30];
}user;
typedef struct lista{
	int elem;
	char *name;
	struct lista *sig;
	struct lista *next;
}lista;
lista *prim=NULL;
lista *ult=NULL;
lista *first=NULL;
lista *last=NULL;

typedef struct cola{
	int elmdat;
	struct cola *sigg;
}cola;
cola *uno=NULL;
cola *dos=NULL;

typedef struct Pila{
	int element;
	struct Pila *nex;
}pila;
pila *pr=NULL;

enum boolean{false,true};
char book[80],nombre[80],contr[18];
int id,nume,num,y=0;
void varglobales(){
}
