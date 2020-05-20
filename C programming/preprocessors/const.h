#include "config.h"

#ifdef HAS_PRECISION		/* check the define of HAS_PRECISION */
# ifndef PI                  /* if not define PI */
#  define PI    3.14159265
# endif                      /* end of not define PI */
#else                       /* not enable the HAS_PRECISION */
# ifndef PI                  /* if not define PI */
#  define PI    3.14
# endif                      /* if not define PI */
#endif                      /* end of the HAS_PRECISION check */

/* declared the 2 times PI (netested one "PI") */
#define TWOPI   (2 * PI)

/* declared argumented marcos with nested */
#define C_AREA(r) (PI * r * r)

/* Using the feature of ANSI C Stringizing */
#define PRINT(C_AREA) #C_AREA
