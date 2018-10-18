/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 3
 * Title:			PointerFun
 * Author:    Thomas Atzlesberger
 * ----------------------------------------------------------
 * Description:
 *
 * ----------------------------------------------------------

*/

#include <stdio.h>

void print_integers(int int_pointer){
  printf("%d\n",int_pointer );
}

int main(int argc, char const *argv[]) {

  int int_value;
  int *int_pointer;

  int_value = 257;

  int_pointer = &int_value;

  print_integers(*int_pointer);

  return 0;
}
