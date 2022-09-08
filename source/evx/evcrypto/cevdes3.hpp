///////////////////////////////////////////////////////////////////////
//   File: cevdes3.hpp
//
// Author: $author$
//   Date: 11/1/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _CEVDES3_HPP
#define _CEVDES3_HPP

#include "evdes3.hpp"
#include "cevcipher.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: CEvDES3
//
// Author: $author$
//   Date: 11/1/2007
///////////////////////////////////////////////////////////////////////
class CEvDES3
: virtual public EvDES3,
  public CEvCipher
{
public:
    typedef EvDES3 CImplements;
    typedef CEvCipher CExtends;
    typedef CEvDES3 CDerives;

    ///////////////////////////////////////////////////////////////////////
    // Constructor: CEvDES3
    //
    //       Author: $author$
    //         Date: 11/1/2007
    ///////////////////////////////////////////////////////////////////////
    CEvDES3() 
    {
    }
    ///////////////////////////////////////////////////////////////////////
    // Destructor: ~CEvDES3
    //
    //      Author: $author$
    //        Date: 11/1/2007
    ///////////////////////////////////////////////////////////////////////
    virtual ~CEvDES3()
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
};

#endif // _CEVDES3_HPP
