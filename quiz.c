#include <stdio.h>
#include <string.h>
struct palabra{
	char *name;
	int line;
	
};

struct palabra2{
	char *name;
	int conc;
	
};

struct palabra words[100];

void ordenar(){
	
}

void read_words () {
	
	char line[256];
	FILE *file = fopen("test.txt","r");
	int lineno=1;
	int i=0;
    while (fgets(line, sizeof(line), file)) {
        
        
    char * pch;
  	pch = strtok (line," ,.-");
  	while (pch != NULL)
  	{
  		if(strcmp(pch,"el")!=0 && strcmp(pch,"la")!=0 && strcmp(pch,"los")!=0 && strcmp(pch,"las")!=0 && strcmp(pch,"\n")!=0) {
		  
    	printf("Palabra: %s linea %d\n",pch,lineno);
    	
    	struct palabra pal;
		pal.name=pch;
		pal.line=lineno;
		words[i]=pal;
		i++;
    	pch = strtok (NULL, " ,.-");
		}else{
		pch = strtok (NULL, " ,.-");
		}
  	}
        lineno=lineno+1;
		 
    }
    

    fclose(file);

}
int main()
{
	read_words();
    return 0;
}
