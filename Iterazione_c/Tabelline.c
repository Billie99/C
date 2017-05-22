/* Tabellina.c */

#include <stdio.h>

int main()
{

 int count = 0;
 int due = 0;
 int uno = 0;
 int tre = 0;
 int quattro = 0;
 int cinque = 0;
 int sei = 0;
 int sette = 0;
 int otto = 0;
 int nove = 0;
 int dieci = 0;


 while ( count < 11 )
{

 /* tabellina dell 1 */
 if ( count == 1 )
{

 while ( uno < 11 )
{

 printf ("%d\t", uno);
 uno = uno + 1;

}

}

 /* tabellina del 2 */
 if ( count == 2 )
{

 while ( due < 21 )
{

 printf("%d\t", due);
 due = due + 2;

}

}

 /* tabellina del 3 */
 if ( count == 3 )
{

 while ( tre < 31 )
{

 printf("%d\t", tre);
 tre = tre + 3;

}

}

 /* tabellina del 4 */
 if ( count == 4 )
{

 while ( quattro < 41 )
{

 printf("%d\t", quattro);
 quattro = quattro + 4;

}

}

 /* tabellina del 5 */
 if ( count == 5 )
{

 while ( cinque < 51 )
{

 printf("%d\t",  cinque);
 cinque = cinque + 5;

}

}

 /* tabellina del 6 */
 if ( count == 6 )
{

 while ( sei < 61 )
{

 printf("%d\t", sei);
 sei = sei + 6;

}

}

 /* tabellina del 7 */
 if ( count == 7 )
{

 while ( sette < 71 )
{

 printf("%d\t", sette);
 sette = sette + 7;

}

}

 /* tabellina del 8 */
 if ( count == 8 )
{

 while ( otto < 81 )
{

 printf("%d\t", otto);
 otto = otto + 8;

}

}

 /* tabellina del 9 */
 if ( count == 9 )
{

 while ( nove < 91 )
{

 printf("%d\t", nove);
 nove = nove + 9;

}

}

 /* tabellina del 10 */
 if ( count == 10 )
{

 while ( dieci < 101 )
{

 printf("%d\t", dieci);
 dieci = dieci + 10;

}

}

 count = count + 1;
 printf("\n");

}

 return 0;
}
