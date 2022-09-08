///////////////////////////////////////////////////////////////////////
//   File: ccevdes3.hpp
//
// Author: $author$
//   Date: 11/4/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _CCEVDES3_HPP
#define _CCEVDES3_HPP

#include <vector>
#include "evdes3.hpp"
#include "ccevcipher.hpp"
#include "cdes3.hxx"

///////////////////////////////////////////////////////////////////////
//  Class: CCEvDES3
//
// Author: $author$
//   Date: 11/4/2007
///////////////////////////////////////////////////////////////////////
class CCEvDES3
: virtual public EvDES3,
  public CCEvCipher
{
public:
    typedef EvDES3 CImplements;
    typedef CCEvCipher CExtends;
    typedef CCEvDES3 CDerives;

    CDES3 m_cipher;

    ///////////////////////////////////////////////////////////////////////
    // Constructor: CCEvDES3
    //
    //       Author: $author$
    //         Date: 11/4/2007
    ///////////////////////////////////////////////////////////////////////
    CCEvDES3()
    {
        m_deligate = &m_cipher;
    }
    ///////////////////////////////////////////////////////////////////////
    // Destructor: ~CCEvDES3
    //
    //      Author: $author$
    //        Date: 11/4/2007
    ///////////////////////////////////////////////////////////////////////
    virtual ~CCEvDES3()
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Function: GetBlockSize
    //
    //   Author: $author$
    //     Date: 12/5/2007
    ///////////////////////////////////////////////////////////////////////
    virtual LONG GetBlockSize() const 
    {
        LONG blockSize = EV_BLOCK_SIZE;
        return blockSize;
    }
    ///////////////////////////////////////////////////////////////////////
    // Function: DeleteThis
    //
    //   Author: $author$
    //     Date: 2/12/2009
    ///////////////////////////////////////////////////////////////////////
    virtual EvError DeleteThis() 
    {
        EvError error = EV_ERROR_NONE;
        delete this;
        return error;
    }
};

///////////////////////////////////////////////////////////////////////
//  Typedef: CCEvDES3s
//
//   Author: $author$
//     Date: 11/4/2007
///////////////////////////////////////////////////////////////////////
typedef ::std::vector<CCEvDES3*>
CCEvDES3s;

///////////////////////////////////////////////////////////////////////
//  Typedef: CCEvDES3sIterator
//
//   Author: $author$
//     Date: 11/4/2007
///////////////////////////////////////////////////////////////////////
typedef CCEvDES3s::iterator
CCEvDES3sIterator;

///////////////////////////////////////////////////////////////////////
//  Typedef: const_CCEvDES3sIterator
//
//   Author: $author$
//     Date: 11/4/2007
///////////////////////////////////////////////////////////////////////
typedef CCEvDES3s::const_iterator
const_CCEvDES3sIterator;

#endif // _CCEVDES3_HPP
