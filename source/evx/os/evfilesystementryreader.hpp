///////////////////////////////////////////////////////////////////////
//   File: evfilesystementryreader.hpp
//
// Author: $author$
//   Date: 6/24/2007
///////////////////////////////////////////////////////////////////////

#ifndef _EVFILESYSTEMENTRYREADER_HPP
#define _EVFILESYSTEMENTRYREADER_HPP

#include "evfilesystementryreaderevents.hpp"
#include "evbase.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvFileSystemEntryReader
//
// Author: $author$
//   Date: 6/24/2007
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvFileSystemEntryReader
: virtual public EvFileSystemEntryReaderEvents
{
public:
    typedef EvFileSystemEntryReaderEvents CImplements;
    typedef EvFileSystemEntryReader CDerives;
    ///////////////////////////////////////////////////////////////////////
    // Function: SetEvents
    //
    //   Author: $author$
    //     Date: 6/24/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvFileSystemEntryReaderEvents* SetEvents
    (EvFileSystemEntryReaderEvents* events) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetEvents
    //
    //   Author: $author$
    //     Date: 6/24/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvFileSystemEntryReaderEvents* GetEvents() const = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: CreateInstance
    //
    //   Author: $author$
    //     Date: 5/18/2008
    ///////////////////////////////////////////////////////////////////////
    static EvFileSystemEntryReader* CreateInstance
    (EvError& error);
    ///////////////////////////////////////////////////////////////////////
    // Function: DestroyInstance
    //
    //   Author: $author$
    //     Date: 5/18/2008
    ///////////////////////////////////////////////////////////////////////
    static EvError DestroyInstance
    (EvFileSystemEntryReader& instance);
};
#endif // _EVFILESYSTEMENTRYREADER_HPP
