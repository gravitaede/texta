///////////////////////////////////////////////////////////////////////
//   File: evcscheckin.hpp
//
// Author: $author$
//   Date: 5/29/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVCSCHECKIN_HPP
#define _EVCSCHECKIN_HPP

#include "evcscheck.hpp"
#include "evfilesystementrytimes.hpp"
#include "evinstance.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvcsCheckIn
//
// Author: $author$
//   Date: 5/29/2007
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvcsCheckIn
: virtual public EvcsCheck
{
public:
    typedef EvcsCheck CImplements;
    typedef EvcsCheckIn CDerives;
    ///////////////////////////////////////////////////////////////////////
    // Function: Open
    //
    //   Author: $author$
    //     Date: 5/29/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError Open
    (const char* evcName, 
     const EvFileSystemEntryTimes& fileTimes,
     bool isBinary=false) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: Close
    //
    //   Author: $author$
    //     Date: 5/29/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError Close
    (bool onlyClose=false) = 0;
};
#endif // _EVCSCHECKIN_HPP