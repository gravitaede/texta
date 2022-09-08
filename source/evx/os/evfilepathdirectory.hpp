///////////////////////////////////////////////////////////////////////
//   File: evfilepathdirectory.hpp
//
// Author: $author$
//   Date: 7/5/2007
///////////////////////////////////////////////////////////////////////

#ifndef _EVFILEPATHDIRECTORY_HPP
#define _EVFILEPATHDIRECTORY_HPP

#include <vector>
#include "evstringinstance.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvFilePathDirectory
//
// Author: $author$
//   Date: 6/1/2007
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvFilePathDirectory
: virtual public EvStringInstance
{
public:
    typedef EvStringInstance CImplements;
    typedef EvFilePathDirectory CDerives;
    typedef int Type;

    ///////////////////////////////////////////////////////////////////////
    //   Enum:  
    //
    // Author: $author$
    //   Date: 5/31/2007
    ///////////////////////////////////////////////////////////////////////
    enum 
    {
        EV_FIRST_TYPE = 0,

        EV_TYPE_NONE = EV_FIRST_TYPE,
        EV_TYPE_CURRENT,
        EV_TYPE_PARENT,
        EV_TYPE_ROOT,

        EV_NEXT_TYPE,
        EV_LAST_TYPE = (EV_NEXT_TYPE-1)
    };

    ///////////////////////////////////////////////////////////////////////
    // Function: CreateInstance
    //
    //   Author: $author$
    //     Date: 5/16/2008
    ///////////////////////////////////////////////////////////////////////
    static EvFilePathDirectory* CreateInstance
    (EvError& error);
    ///////////////////////////////////////////////////////////////////////
    // Function: DestroyInstance
    //
    //   Author: $author$
    //     Date: 5/16/2008
    ///////////////////////////////////////////////////////////////////////
    static EvError DestroyInstance
    (EvFilePathDirectory& instance);
};

///////////////////////////////////////////////////////////////////////
//  Typedef: CEvFilePathDirectories
//
//   Author: $author$
//     Date: 5/31/2007
///////////////////////////////////////////////////////////////////////
typedef ::std::vector<EvFilePathDirectory*>
CEvFilePathDirectories;

///////////////////////////////////////////////////////////////////////
//  Typedef: CEvFilePathDirectoriesIterator
//
//   Author: $author$
//     Date: 5/31/2007
///////////////////////////////////////////////////////////////////////
typedef CEvFilePathDirectories::iterator
CEvFilePathDirectoriesIterator;

///////////////////////////////////////////////////////////////////////
//  Typedef: const_CEvFilePathDirectoriesIterator
//
//   Author: $author$
//     Date: 5/31/2007
///////////////////////////////////////////////////////////////////////
typedef CEvFilePathDirectories::const_iterator
const_CEvFilePathDirectoriesIterator;

#endif // _EVFILEPATHDIRECTORY_HPP
