#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"

int main()
{

   struct Box b1;

   initBox(&b1, 1.3, 3.2, 5.8, 4.5);
   assertEquals("ul=(1.3,3.2),w=5.8,h=4.5", boxToString(b1,1), "boxToString(b1,1)");
   assertEquals("ul=(3.12,2.34),w=4.11,h=3.24", boxToString(b1,2), "boxToString(b1,2");
   assertEquals("ul=(3.1,2.3),w=4.1,h=3.2", boxToString(b1,3), "boxToString(b1,3)");
   assertEquals("ul=(3.123,2.341),w=4.111,h=3.243", boxToString(b1,4), "boxToString(b1,4)");
   assertEquals("ul=(3.1234,2.3412),w=4.1112,h=3.2431", boxToString(b1,5), "boxToString(b1,5)");
   assertEquals("ul=(3.123,2.3412),w=4.1112,h=3.2431", boxToString(b1,6), "boxToString(b1,6)");
   return 0;
}
