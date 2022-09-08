///////////////////////////////////////////////////////////////////////
//   File: evfilesystementrybase.hpp
//
// Author: $author$
//   Date: 6/15/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVFILESYSTEMENTRYBASE_HPP
#define _EVFILESYSTEMENTRYBASE_HPP

#include "evbase.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvFileSystemEntryBase
//
// Author: $author$
//   Date: 6/15/2007
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvFileSystemEntryBase
: virtual public EvBase
{
public:
    typedef EvBase CImplements;
    typedef EvFileSystemEntryBase CDerives;

    ///////////////////////////////////////////////////////////////////////
    //  Typedef: EvType
    //
    //   Author: $author$
    //     Date: 5/4/2007
    ///////////////////////////////////////////////////////////////////////
    typedef int EvType;

    ///////////////////////////////////////////////////////////////////////
    //   Enum:  
    //
    // Author: $author$
    //   Date: 5/4/2007
    ///////////////////////////////////////////////////////////////////////
    enum 
    {
        EV_TYPE_NONE          = 0,

        EV_TYPE_FILE          = 1,
        EV_TYPE_DIRECTORY     = (1<<1),
        EV_TYPE_SYMBOLIC_LINK = (1<<2),
        EV_TYPE_HARD_LINK     = (1<<3),
        EV_TYPE_BLOCK_DEVICE  = (1<<4),
        EV_TYPE_CHAR_DEVICE   = (1<<5),

        EV_TYPE_NEXT,
        EV_TYPE_ANY           = ((EV_TYPE_NEXT-1)<<1)-1
    };

    ///////////////////////////////////////////////////////////////////////
    // Function: SetName
    //
    //   Author: $author$
    //     Date: 5/4/2007
    ///////////////////////////////////////////////////////////////////////
    virtual LONG SetName
    (const char* chars, LONG length=-1) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetName
    //
    //   Author: $author$
    //     Date: 5/4/2007
    ///////////////////////////////////////////////////////////////////////
    virtual const char* GetName
    (LONG& length) const = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: SetType
    //
    //   Author: $author$
    //     Date: 5/4/2007
    ///////////////////////////////////////////////////////////////////////
    virtual int SetType(EvType type) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetType
    //
    //   Author: $author$
    //     Date: 5/4/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvType GetType() const = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: SetSize
    //
    //   Author: $author$
    //     Date: 7/17/2009
    ///////////////////////////////////////////////////////////////////////
    virtual LONGLONG SetSize
    (ULONGLONG size) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetSize
    //
    //   Author: $author$
    //     Date: 7/17/2009
    ///////////////////////////////////////////////////////////////////////
    virtual ULONGLONG GetSize() const = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: SetIsDirectory
    //
    //   Author: $author$
    //     Date: 5/4/2007
    ///////////////////////////////////////////////////////////////////////
    virtual int SetIsDirectory(bool is=true) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetIsDirectory
    //
    //   Author: $author$
    //     Date: 5/4/2007
    ///////////////////////////////////////////////////////////////////////
    virtual bool GetIsDirectory() const = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: SetIsArchive
    //
    //   Author: $author$
    //     Date: 5/22/2007
    ///////////////////////////////////////////////////////////////////////
    virtual int SetIsArchive
    (bool is=true) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetIsArchive
    //
    //   Author: $author$
    //     Date: 5/22/2007
    ///////////////////////////////////////////////////////////////////////
    virtual bool GetIsArchive() const = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: SetIsCompressed
    //
    //   Author: $author$
    //     Date: 5/22/2007
    ///////////////////////////////////////////////////////////////////////
    virtual int SetIsCompressed
    (bool is=true) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetIsCompressed
    //
    //   Author: $author$
    //     Date: 5/22/2007
    ///////////////////////////////////////////////////////////////////////
    virtual bool GetIsCompressed() const = 0;
   
    ///////////////////////////////////////////////////////////////////////
    // Function: SetIsEncrypted
    //
    //   Author: $author$
    //     Date: 5/22/2007
    ///////////////////////////////////////////////////////////////////////
    virtual int SetIsEncrypted
    (bool is=true) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetIsEncrypted
    //
    //   Author: $author$
    //     Date: 5/22/2007
    ///////////////////////////////////////////////////////////////////////
    virtual bool GetIsEncrypted() const = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: SetIsHidden
    //
    //   Author: $author$
    //     Date: 5/22/2007
    ///////////////////////////////////////////////////////////////////////
    virtual int SetIsHidden
    (bool is=true) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetIsHidden
    //
    //   Author: $author$
    //     Date: 5/22/2007
    ///////////////////////////////////////////////////////////////////////
    virtual bool GetIsHidden() const = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: SetIsOffline
    //
    //   Author: $author$
    //     Date: 5/22/2007
    ///////////////////////////////////////////////////////////////////////
    virtual int SetIsOffline
    (bool is=true) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetIsOffline
    //
    //   Author: $author$
    //     Date: 5/22/2007
    ///////////////////////////////////////////////////////////////////////
    virtual bool GetIsOffline() const = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: SetIsReadOnly
    //
    //   Author: $author$
    //     Date: 5/22/2007
    ///////////////////////////////////////////////////////////////////////
    virtual int SetIsReadOnly
    (bool is=true) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetIsReadOnly
    //
    //   Author: $author$
    //     Date: 5/22/2007
    ///////////////////////////////////////////////////////////////////////
    virtual bool GetIsReadOnly() const = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: SetIsSystem
    //
    //   Author: $author$
    //     Date: 5/22/2007
    ///////////////////////////////////////////////////////////////////////
    virtual int SetIsSystem
    (bool is=true) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetIsSystem
    //
    //   Author: $author$
    //     Date: 5/22/2007
    ///////////////////////////////////////////////////////////////////////
    virtual bool GetIsSystem() const = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: SetIsTemporary
    //
    //   Author: $author$
    //     Date: 5/22/2007
    ///////////////////////////////////////////////////////////////////////
    virtual int SetIsTemporary
    (bool is=true) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetIsTemporary
    //
    //   Author: $author$
    //     Date: 5/22/2007
    ///////////////////////////////////////////////////////////////////////
    virtual bool GetIsTemporary() const = 0;
};

#endif // _EVFILESYSTEMENTRYBASE_HPP
