///////////////////////////////////////////////////////////////////////
//   File: evinstance.hpp
//
// Author: $author$
//   Date: 5/26/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVINSTANCE_HPP
#define _EVINSTANCE_HPP

#include "evbase.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvInstance
//
// Author: $author$
//   Date: 5/26/2007
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvInstance
: virtual public EvBase
{
public:
    typedef EvBase CImplements;
    typedef EvInstance CDerives;
    ///////////////////////////////////////////////////////////////////////
    // Function: DeleteInstance
    //
    //   Author: $author$
    //     Date: 5/26/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError DeleteInstance() = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: DeleteThis
    //
    //   Author: $author$
    //     Date: 5/26/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError DeleteThis() = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: SetIsStaticInstance
    //
    //   Author: $author$
    //     Date: 3/12/2008
    ///////////////////////////////////////////////////////////////////////
    virtual int SetIsStaticInstance(bool is=true) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetIsStaticInstance
    //
    //   Author: $author$
    //     Date: 3/12/2008
    ///////////////////////////////////////////////////////////////////////
    virtual bool GetIsStaticInstance() const = 0;

    ///////////////////////////////////////////////////////////////////////
    // Function: CreateInstance
    //
    //   Author: $author$
    //     Date: 5/14/2008
    ///////////////////////////////////////////////////////////////////////
    static EvInstance* CreateInstance
    (EvError& error);
    ///////////////////////////////////////////////////////////////////////
    // Function: DestroyInstance
    //
    //   Author: $author$
    //     Date: 5/14/2008
    ///////////////////////////////////////////////////////////////////////
    static EvError DestroyInstance
    (EvInstance& instance);
};
#endif // _EVINSTANCE_HPP
