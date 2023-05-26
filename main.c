
#include "header.h"



int main() {
    print_menu();
      int verif;
	int size_row, size_col;
	

  do{
    printf("Nombre de lignes superieur à 3  : \n");
       verif=  scanf("%d",&size_row);
    vide_buffer();
    if (size_row<3)  {
        printf("Le nombre de lignes n'est pas valable \n");
    }
  }while( (size_row <3) || (verif!=1));
      
  do{
    printf("Nombre de colonnes superieur à 3 :\n");
   verif= scanf("%d", &size_col);
        vide_buffer();
    if ( size_col <3 ) {
        printf("Le nombre de colonnes n'est pas valable \n");
    }
  }while( (size_col <3) || (verif!=1));
  
    do{
      printf("Nombre de symboles (entre 4 et 6) : \n");
     verif= scanf("%d", &num_symbols);
        vide_buffer();
      if ((num_symbols < MIN_SYMBOLS) || (num_symbols>MAX_SYMBOLS) ) {
          printf("Le nombre de symboles n'est pas valable\n");
          
      }
    }while(((num_symbols < MIN_SYMBOLS) || (num_symbols>MAX_SYMBOLS)) || (verif!=1)  );

    
    

    int score = play_game();
    printf("Votre score final: %d\n", score);

    return 0;
}


