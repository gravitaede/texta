///////////////////////////////////////////////////////////////////////
//   File: evtake.hpp
//
// Author: $author$
//   Date: 4/5/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVTAKE_HPP
#define _EVTAKE_HPP

#include "evbase.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvTake
//
// Author: $author$
//   Date: 4/5/2007
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvTake
: virtual public EvBase
{
public:
    typedef EvBase CImplements;
    typedef EvTake CDerives;

    ///////////////////////////////////////////////////////////////////////
    // Function: Take
    //
    //   Author: $author$
    //     Date: 4/5/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError Take
    (UINT amount=1,
     LONG waitMilliSeconds=INFINITE) = 0;
};
#endif // _EVTAKE_HPP
