///////////////////////////////////////////////////////////////////////
//   File: evdatetime.cpp
//
// Author: $author$
//   Date: 5/14/2008
///////////////////////////////////////////////////////////////////////

#include "evdatetime.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvDateTime
//
// Author: $author$
//   Date: 5/14/2008
///////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////
// Function: EvDateTime::CreateInstance
//
//   Author: $author$
//     Date: 5/14/2008
///////////////////////////////////////////////////////////////////////
EvDateTime* EvDateTime::CreateInstance
(EvError& error) 
{
    EvDateTime* instance = 0;
    error = EV_ERROR_NOT_IMPLEMENTED;
    return instance;
}
///////////////////////////////////////////////////////////////////////
// Function: EvDateTime::DestroyInstance
//
//   Author: $author$
//     Date: 5/14/2008
///////////////////////////////////////////////////////////////////////
EvError EvDateTime::DestroyInstance
(EvDateTime& instance) 
{
    EvError error = EV_ERROR_NOT_IMPLEMENTED;
    return error;
}
