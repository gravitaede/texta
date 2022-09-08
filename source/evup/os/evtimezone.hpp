///////////////////////////////////////////////////////////////////////
//   File: evtimezone.hpp
//
// Author: $author$
//   Date: 6/21/2009
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVTIMEZONE_HPP
#define _EVTIMEZONE_HPP

#include "evbase.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvTimezone
//
// Author: $author$
//   Date: 6/21/2009
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvTimezone
: virtual public EvBase
{
public:
    typedef EvBase CImplements;
    typedef EvTimezone CDerives;
    ///////////////////////////////////////////////////////////////////////
    // Function: CreateInstance
    //
    //   Author: $author$
    //     Date: 5/14/2009
    ///////////////////////////////////////////////////////////////////////
    static EvTimezone* CreateInstance
    (EvError& error);
    ///////////////////////////////////////////////////////////////////////
    // Function: DestroyInstance
    //
    //   Author: $author$
    //     Date: 5/14/2009
    ///////////////////////////////////////////////////////////////////////
    static EvError DestroyInstance
    (EvTimezone& instance);
};
#endif // _EVTIMEZONE_HPP
