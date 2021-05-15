#include "ft_printf.h"
#include <limits.h>


int	main(int ac, char **av)
{
  int	ret[2];
  char	*str = "astek";
  char	stre[] = {'a', 's', 10, 'e', 'k', 0};

  printf("##### Tests simple : 1 point par test reussi #####\n");
  printf(   "0) Modulo [%%] : {%%}\n");
  ft_printf("=> Modulo [%%] : {%%}\n");
  printf(   "1) Nombre signe [d] : {%d}\n", 42);
  ft_printf("=> Nombre signe [d] : {%d}\n", 42);
  printf(   "2) Nombre signe [i] : {%i}\n", 42);
  ft_printf("=> Nombre signe [i] : {%i}\n", 42);
  printf(   "4) Nombre non signe [u] : {%u}\n", 42);
  ft_printf("=> Nombre non signe [u] : {%u}\n", 42);
  printf(   "5) Nombre hexadecimal [x] : {%x}\n", 0x12345);
  ft_printf("=> Nombre hexadecimal [x] : {%x}\n", 0x12345);
  printf(   "6) Nombre hexadecimal [X] : {%X}\n", 0x12345);
  ft_printf("=> Nombre hexadecimal [X] : {%X}\n", 0x12345);
  printf(   "8) Caractere [c] : {%c}\n", 42);
  ft_printf("=> Caractere [c] : {%c}\n", 42);
  printf(   "9) Chaine [s] : {%s}\n", str);
  ft_printf("=> Chaine [s] : {%s}\n", str);
  printf(   "11) Pointeur [p] : {%p}\n", str);
  ft_printf("=>  Pointeur [p] : {%p}\n", str);
  printf(   "12) Mauvais parametre [k] : {%k}\n", 42);
  ft_printf("=>  Mauvais parametre [k] : {%k}\n", 42);

  printf("Appuyez sur [entree] pour continuer...\n");
  getchar();

  printf("\n##### Tests pour verifier #####\n");
  printf(   "1) Affichage multiple [d d d] : {%d} {%d} {%d}\n", 0, 42, 2147483647);
  ft_printf("=> Affichage multiple [d d d] : {%d} {%d} {%d}\n", 0, 42, 2147483647);
  printf(   "2) Affichage multiple [d d d] : {%d} {%d} {%d}\n", -0, -42, -2147483648);
  ft_printf("=> Affichage multiple [d d d] : {%d} {%d} {%d}\n", -0, -42, -2147483648);
  printf(   "3) Affichage multiple [c d s] : {%c} {%d} {%s}\n", 42, 42, str);
  ft_printf("=> Affichage multiple [c d s] : {%c} {%d} {%s}\n", 42, 42, str);
  printf(   "4) Affichage multiple [X p d] : {%X} {%p} {%d}\n", 0x12345, str, 42);
  ft_printf("=> Affichage multiple [X p d] : {%X} {%p} {%d}\n", 0x12345, str, 42);
  printf(   "5) Affichage long [d d d ...] : %d %d %d %d %d %d %d %d %d %d %d %d\n", 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xA, 0xB, 0xC);
  ft_printf("=> Affichage long [d d d ...] : %d %d %d %d %d %d %d %d %d %d %d %d\n", 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xA, 0xB, 0xC);


  printf("Appuyez sur une touche pour continuer...\n");
  getchar();

  printf("\n##### Formatage : 1pt pour 3 tests reussis  #####\n");
  printf(   "4) Formatage simple [0d] : {%0d}\n", 42);
  ft_printf("=> Formatage simple [0d] : {%0d}\n", 42);
  printf(   "5) Formatage simple [5d] : {%5d}\n", 42);
  ft_printf("=> Formatage simple [5d] : {%5d}\n", 42);
  printf(   "7) Formatage simple [-d] : {%-d}\n", 42);
  ft_printf("=> Formatage simple [-d] : {%-d}\n", 42);
  printf(   "10) Formatage multiple [ 5d] : {% 5d}\n", 42);
  ft_printf("=>  Formatage multiple [ 5d] : {% 5d}\n", 42);
  printf(   "16) Formatage ultracompose [-6.3x] : {%-6.3x}\n", 0x12345);
  ft_printf("=>  Formatage ultracompose [-6.3x] : {%-6.3x}\n", 0x12345);
  printf(   "20) Formatage pourcent [30%%] : {%30%}\n");
  ft_printf("=>  Formatage pourcent [30%%] : {%30%}\n");
  printf(   "21) Formatage pourcent [-30pourcent] : {%-30%}\n");
  ft_printf("=>  Formatage pourcent [-30pourcent] : {%-30%}\n");
  printf(   "1) BONUS Formatage simple [#d] : {%#d}\n", 42);
  ft_printf("=> BONUS Formatage simple [#d] : {%#d}\n", 42);
  printf(   "2) BONUS Formatage simple [#x] : {%#x}\n", 0x12345);
  ft_printf("=> BONUS Formatage simple [#x] : {%#x}\n", 0x12345);
  printf(   "3) BONUS Formatage simple [#o] : {%#o}\n", 012345);
  ft_printf("=> BONUS Formatage simple [#o] : {%#o}\n", 012345);
  printf(   "8) BONUS Formatage simple [+d] : {%+d}\n", 42);
  ft_printf("=> BONUS Formatage simple [+d] : {%+d}\n", 42);
  printf(   "9) BONUS Formatage simple [+d] : {%+d}\n", -42);
  ft_printf("=> BONUS Formatage simple [+d] : {%+d}\n", -42);
  printf(   "12) BONUS Formatage multiple [-10+d] : {%+-10d}\n", 12345);
  ft_printf("=>  BONUS Formatage multiple [-10+d] : {%-10+d}\n", 12345);
  printf(   "18) BONUS Formatage ultracompose [#-6.3d] : {%#-6.3d}\n", -2147483648);
  ft_printf("=>  BONUS Formatage ultracompose [#-6.3d] : {%#-6.3d}\n", -2147483648);
  printf(   "19) BONUS Formatage long [p x lx] : {%p} {%x} {%lx}\n", 0x42424242, 0x42424242, 0x42424242);
  ft_printf("=>  BONUS Formatage long [p x lx] : {%p} {%x} {%lx}\n", 0x42424242, 0x42424242, 0x42424242);
  printf(   "23) Verification de la valeur de retour [d] : {%d}\n", printf("je suis un test"));
  ft_printf("=>  Verification de la valeur de retour [d] : {%d}\n", ft_printf("je suis un test"));


  return(0);
}
