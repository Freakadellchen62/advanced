#include <stdbool.h>

#ifndef _ARRAY_DATA_STORE_H_
#define _ARRAY_DATA_STORE_H_

void init(int n);
/* pre : n>0
  post: an in-memory data storage for n strings created
*/
void destroy();
/* pre : truepost: allocated memory de-allocated
*/
bool insert(char * str);
/* pre : str!=null and contains a string STR (\0 as sentinel), not
        necessary dynamically allocated, storage exists
   post: string STR stored in an available free storage slot and 1
        returned, or 0 returnedif there are no free storage slots.
*/
void delete(char * str);
/* pre : str!=null and contains a string STR (\0 as sentinel), not
        necessary dynamically allocated, storage exists.
  post: each stored string which matches STR removed, and storage slot set free
*/
void print();
/* pre : storage exists
  post: stored strings printed, one string per line
*/

#endif
