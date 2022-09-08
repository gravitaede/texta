///////////////////////////////////////////////////////////////////////
//   File: cevcpsencoder.hpp
//
// Author: $author$
//   Date: 11/28/2007
///////////////////////////////////////////////////////////////////////

#ifndef _CEVCPSENCODER_HPP
#define _CEVCPSENCODER_HPP

#include "evcpsbase.hpp"
#include "cevcharwriter.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: CEvcpsEncoder
//
// Author: $author$
//   Date: 11/28/2007
///////////////////////////////////////////////////////////////////////
class CEvcpsEncoder
: public CEvCharWriter
{
public:
    typedef CEvCharWriter CExtends;
    typedef CEvcpsEncoder CDerives;

    EvcpsBase& m_value;

    ///////////////////////////////////////////////////////////////////////
    // Constructor: CEvcpsEncoder
    //
    //       Author: $author$
    //         Date: 11/28/2007
    ///////////////////////////////////////////////////////////////////////
    CEvcpsEncoder
    (EvcpsBase& value) 
    : m_value(value)
    {
    }
    ///////////////////////////////////////////////////////////////////////
    // Function: Write
    //
    //   Author: $author$
    //     Date: 11/28/2007
    ///////////////////////////////////////////////////////////////////////
    virtual LONG Write
    (EvCharWriter& writer) 
    {
        LONG length = m_value.Write(writer);
        return length;
    }
};
#endif // _CEVCPSENCODER_HPP
