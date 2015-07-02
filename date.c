#include "types.h"
#include "user.h"
#include "date.h"

// Super small
// so it is in the date call. Where is it defined?
// In user. It takes a pointer to a rtcdate struct.

int
main(int argc, char *argv[])
{
//  struct rtcdate r;
//  date(&r);
  int foo = date(); // so it prints 446 for some reason
  printf(2, "%d\n", foo);

// so this date call fails comp. Can we do something else?

//  if (date(&r)) {
//    printf(2, "date failed\n");
//    exit();
//  }

  // print time in some format
  printf(2, "hello?\n");
  //printf(2, "%d\n", r);

  exit();
}
