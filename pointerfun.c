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

void print_integers(int int_pointer, int int_value){
  printf("Got an integer %d and an address to an integer with value %d\n",int_value, int_pointer );
}

void change_integers(int* int_pointer, int int_value){
  int_value = 911;
  int_pointer = &int_value*
//The variable get's changed but it can't give it back
}


int main(int argc, char const *argv[]) {

  int int_value;
  int *int_pointer;

  int_value = 257;

  int_pointer = &int_value;

  //variables can get a value but if you add a number to an address
  //there will be some problems

  print_integers(*int_pointer, int_value);

  change_integers(int_pointer, int_value);

  printf("New Variable\n" );

  print_integers(*int_pointer, int_value);

  return 0;
}
