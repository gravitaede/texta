///////////////////////////////////////////////////////////////////////
//   File: cevcpsloginresponsedone.hpp
//
// Author: $author$
//   Date: 12/10/2007
///////////////////////////////////////////////////////////////////////

#ifndef _CEVCPSLOGINRESPONSEDONE_HPP
#define _CEVCPSLOGINRESPONSEDONE_HPP

#include "cevcpsbase.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: CEvcpsLoginResponseDone
//
// Author: $author$
//   Date: 12/10/2007
///////////////////////////////////////////////////////////////////////
class CEvcpsLoginResponseDone
: public CEvcpsBase
{
public:
    typedef CEvcpsBase CExtends;
    typedef CEvcpsLoginResponseDone CDerives;

    ///////////////////////////////////////////////////////////////////////
    // Constructor: CEvcpsLoginResponseDone
    //
    //       Author: $author$
    //         Date: 12/10/2007
    ///////////////////////////////////////////////////////////////////////
    CEvcpsLoginResponseDone() 
    {
    }
    ///////////////////////////////////////////////////////////////////////
    // Function: Read
    //
    //   Author: $author$
    //     Date: 12/10/2007
    ///////////////////////////////////////////////////////////////////////
    virtual LONG Read
    (EvCharReader& reader) 
    {
        LONG length = 0;
        return length;
    }
    ///////////////////////////////////////////////////////////////////////
    // Function: Write
    //
    //   Author: $author$
    //     Date: 12/10/2007
    ///////////////////////////////////////////////////////////////////////
    virtual LONG Write
    (EvCharWriter& writer) 
    {
        LONG length = 0;
        return length;
    }
    ///////////////////////////////////////////////////////////////////////
    // Function: Sizeof
    //
    //   Author: $author$
    //     Date: 12/10/2007
    ///////////////////////////////////////////////////////////////////////
    virtual USHORT Sizeof() const 
    {
        USHORT size = 0;
        return size;
    }
};

#endif // _CEVCPSLOGINRESPONSEDONE_HPP
