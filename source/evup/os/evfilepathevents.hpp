///////////////////////////////////////////////////////////////////////
//   File: evfilepathevents.hpp
//
// Author: $author$
//   Date: 5/7/2009
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVFILEPATHEVENTS_HPP
#define _EVFILEPATHEVENTS_HPP

#include "evbase.hpp"
#include "everror.h"

///////////////////////////////////////////////////////////////////////
//  Class: EvFilePathEvents
//
// Author: $author$
//   Date: 5/7/2009
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvFilePathEvents
: virtual public EvBase
{
public:
    typedef EvBase CImplements;
    typedef EvFilePathEvents CDerives;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnHost
    //
    //   Author: $author$
    //     Date: 5/7/2009
    ///////////////////////////////////////////////////////////////////////
    virtual LONG OnHost
    (const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnVolume
    //
    //   Author: $author$
    //     Date: 5/7/2009
    ///////////////////////////////////////////////////////////////////////
    virtual LONG OnVolume
    (const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnDirectory
    //
    //   Author: $author$
    //     Date: 5/7/2009
    ///////////////////////////////////////////////////////////////////////
    virtual LONG OnDirectory
    (const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnParentDirectory
    //
    //   Author: $author$
    //     Date: 5/7/2009
    ///////////////////////////////////////////////////////////////////////
    virtual LONG OnParentDirectory
    (const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnCurrentDirectory
    //
    //   Author: $author$
    //     Date: 5/7/2009
    ///////////////////////////////////////////////////////////////////////
    virtual LONG OnCurrentDirectory
    (const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnRootDirectory
    //
    //   Author: $author$
    //     Date: 5/7/2009
    ///////////////////////////////////////////////////////////////////////
    virtual LONG OnRootDirectory
    (const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnRootParentDirectory
    //
    //   Author: $author$
    //     Date: 5/8/2009
    ///////////////////////////////////////////////////////////////////////
    virtual LONG OnRootParentDirectory
    (const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnRootCurrentDirectory
    //
    //   Author: $author$
    //     Date: 5/8/2009
    ///////////////////////////////////////////////////////////////////////
    virtual LONG OnRootCurrentDirectory
    (const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnRootFileName
    //
    //   Author: $author$
    //     Date: 5/7/2009
    ///////////////////////////////////////////////////////////////////////
    virtual LONG OnRootFileName
    (const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnFileName
    //
    //   Author: $author$
    //     Date: 5/7/2009
    ///////////////////////////////////////////////////////////////////////
    virtual LONG OnFileName
    (const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnFileExtension
    //
    //   Author: $author$
    //     Date: 5/7/2009
    ///////////////////////////////////////////////////////////////////////
    virtual LONG OnFileExtension
    (const char* chars,
     LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: OnFileVersionExtension
    //
    //   Author: $author$
    //     Date: 5/7/2009
    ///////////////////////////////////////////////////////////////////////
    virtual LONG OnFileVersionExtension
    (const char* chars,
     LONG length=-1) = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: CreateInstance
    //
    //   Author: $author$
    //     Date: 5/16/2009
    ///////////////////////////////////////////////////////////////////////
    static EvFilePathEvents* CreateInstance
    (EvError& error);
    ///////////////////////////////////////////////////////////////////////
    // Function: DestroyInstance
    //
    //   Author: $author$
    //     Date: 5/16/2009
    ///////////////////////////////////////////////////////////////////////
    static EvError DestroyInstance
    (EvFilePathEvents& instance);
};
#endif // _EVFILEPATHEVENTS_HPP
