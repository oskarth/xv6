#include "types.h"
#include "user.h"
#include "date.h"

int
main(int argc, char *argv[])
{
  struct rtcdate r;

  if (date(&r)) {
    printf(2, "date failed\n");
    exit();
  }

  // could do some padding or whatever but this is fine
  printf(1, "%d-%d-%d %d:%d:%d\n",
         r.year, r.month, r.day, r.hour, r.minute, r.second);
  exit();
}
