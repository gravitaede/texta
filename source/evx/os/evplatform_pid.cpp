///////////////////////////////////////////////////////////////////////
//   File: evplatform_pid.cpp
//
// Author: $author$
//   Date: 7/23/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#include "evplatform_pid.h"

#if defined(WIN32) 
// Windows
///////////////////////////////////////////////////////////////////////
// Function: getpid
//
//   Author: $author$
//     Date: 7/23/2007
///////////////////////////////////////////////////////////////////////
pid_t getpid
(void) 
{
    pid_t pid = INVALID_PID;
    return pid;
}
///////////////////////////////////////////////////////////////////////
// Function: getppid
//
//   Author: $author$
//     Date: 7/23/2007
///////////////////////////////////////////////////////////////////////
pid_t getppid
(void) 
{
    pid_t pid = INVALID_PID;
    return pid;
}
#else // defined(WIN32) 
// Unix
#endif // defined(WIN32)
