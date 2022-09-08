///////////////////////////////////////////////////////////////////////
//   File: evchar2datetimeevents.hpp
//
// Author: $author$
//   Date: 7/11/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVCHAR2DATETIMEEVENTS_HPP
#define _EVCHAR2DATETIMEEVENTS_HPP

#include "evdatetime.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvChar2DateTimeEvents
//
// Author: $author$
//   Date: 7/11/2007
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvChar2DateTimeEvents
: virtual public EvBase
{
public:
    typedef EvBase CImplements;
    typedef EvChar2DateTimeEvents CDerives;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnYear
    //
    //   Author: $author$
    //     Date: 7/11/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError OnYear
    (ULONG value, const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnMonth
    //
    //   Author: $author$
    //     Date: 7/11/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError OnMonth
    (ULONG value, const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnDay
    //
    //   Author: $author$
    //     Date: 7/11/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError OnDay
    (ULONG value, const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnHour
    //
    //   Author: $author$
    //     Date: 7/11/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError OnHour
    (ULONG value, const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnMinute
    //
    //   Author: $author$
    //     Date: 7/11/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError OnMinute
    (ULONG value, const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnSecond
    //
    //   Author: $author$
    //     Date: 7/11/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError OnSecond
    (ULONG value, const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnMillisecond
    //
    //   Author: $author$
    //     Date: 7/11/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError OnMillisecond
    (ULONG value, const char* chars,
     LONG length=-1) = 0;
};
#endif // _EVCHAR2DATETIMEEVENTS_HPP
